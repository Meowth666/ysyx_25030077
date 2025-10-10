import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_arbiter extends Module {
  val io = IO(new Bundle {
    val ifu_valid = Input(Bool())
    val pc = Input(UInt(32.W))
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val imm = Input(UInt(32.W))
    val r_mask = Input(UInt(3.W))                
    val w_mask = Input(UInt(3.W))

    val axi_ar_valid = Output(Bool())
    val axi_ar_addr = Output(UInt(32.W))
    val axi_ar_ready = Input(Bool())
    val axi_ar_id = Output(UInt(4.W))
    val axi_ar_len = Output(UInt(8.W))
    val axi_ar_size = Output(UInt(3.W))
    val axi_ar_burst = Output(UInt(2.W))

    val axi_aw_valid = Output(Bool())
    val axi_aw_addr = Output(UInt(32.W))
    val axi_aw_ready = Input(Bool())
    val axi_aw_id = Output(UInt(4.W))
    val axi_aw_len = Output(UInt(8.W))
    val axi_aw_size = Output(UInt(3.W))
    val axi_aw_burst = Output(UInt(2.W))   

    val axi_w_valid = Output(Bool())
    val axi_w_data = Output(UInt(32.W))
    val axi_w_strb = Output(UInt(3.W))
    val axi_w_ready = Input(Bool())
    val axi_w_last = Output(Bool())

    val axi_r_valid = Input(Bool())
    val axi_r_data = Input(UInt(32.W))
    val axi_r_ready = Output(Bool())
    val axi_r_resp = Input(UInt(2.W))
    val axi_r_id = Input(UInt(4.W))
    val axi_r_last = Input(Bool())

    val axi_b_valid = Input(Bool())
    val axi_b_ready = Output(Bool())
    val axi_b_resp = Input(UInt(2.W))
    val axi_b_id = Input(UInt(4.W))

    val gpr_b_resp = Output(UInt(2.W))
    val gpr_r_valid = Output(Bool())
    val gpr_b_valid = Output(Bool())
    val gpr_r_ready = Input(Bool())
    val gpr_b_ready = Input(Bool())
    val gpr_data = Output(UInt(32.W)) 
    val inst = Output(UInt(32.W))
    val ifu_ready = Output(Bool())
    val r_valid_lsu = Input(Bool())
  })
    io.axi_aw_id := 0.U
    io.axi_aw_len := 0.U
    io.axi_aw_size := 0.U
    io.axi_aw_burst := 0.U   

    io.axi_w_last := false.B

    io.axi_ar_id := 0.U
    io.axi_ar_len := 0.U
    io.axi_ar_size := 0.U
    io.axi_ar_burst := 0.U
    
    ChiselHelpers.dontTouchBundleRecursive(io)   
    val state_reg = RegInit(0.U(2.W))
    val inst_reg = RegInit(0.U(32.W))
    val axi_r_valid_delay = RegInit(0.U)

    io.axi_ar_addr := MuxCase((io.rs1_data +& io.imm)(31, 0), Seq(
                              (state_reg === 0.U) -> io.pc,      
                      ))
    axi_r_valid_delay := io.axi_r_valid
    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux(io.axi_r_valid === 1.U, 1.U, 0.U),
        (state_reg === 1.U) -> MuxCase(0.U, Seq(
                                    (io.r_valid_lsu === true.B) -> Mux(((io.axi_r_valid === 1.U) & (axi_r_valid_delay === 0.U)), 2.U, 1.U),
                                    (io.r_valid_lsu === false.B) -> Mux(io.axi_r_valid & io.axi_ar_ready, 2.U, 1.U)
                             )),
        (state_reg === 2.U) -> Mux(io.axi_r_valid & io.axi_ar_ready, 0.U, 2.U)
    ))

    io.axi_aw_addr := MuxCase(0.U, Seq(
                              (state_reg === 1.U) -> (io.rs1_data +& io.imm)(31, 0)
                      ))
    io.axi_aw_valid := MuxCase(false.B, Seq(
                              (state_reg === 1.U) -> (io.axi_r_valid)
                      ))
    io.axi_ar_valid := MuxCase(false.B, Seq(
                              (state_reg === 0.U) -> io.ifu_valid,      
                              (state_reg === 1.U) -> io.axi_r_valid
                       ))           
//     io.axi_ar_strb  := MuxCase(0.U, Seq(
//                               (state_reg === 0.U) -> 6.U,      
//                               (state_reg === 1.U) -> io.r_mask
//                        ))
    io.axi_w_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 1.U) -> io.axi_r_valid
                       ))
    io.axi_w_data   := MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> io.rs2_data
                       ))
    io.axi_w_strb   := MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> io.w_mask
                       ))

    io.axi_r_ready  := io.gpr_r_ready
    io.axi_b_ready  := io.gpr_b_ready
    io.ifu_ready    := io.axi_ar_ready

    io.gpr_r_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> io.axi_r_valid
                       ))
    io.gpr_b_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> io.axi_b_valid
                       ))
    io.gpr_b_resp   := MuxCase(0.U, Seq(    
                              (state_reg === 2.U) -> io.axi_b_resp
                       ))
    io.gpr_data     := MuxCase(0.U, Seq(    
                              (state_reg === 2.U) -> io.axi_r_data
                       ))
    inst_reg         := MuxCase(inst_reg, Seq(    
                              (io.axi_r_valid === 1.U & (state_reg === 0.U)) -> io.axi_r_data
                       ))
    io.inst         := inst_reg
}