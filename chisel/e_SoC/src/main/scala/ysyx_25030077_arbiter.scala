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
    val axi_w_strb = Output(UInt(4.W))
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
//     io.axi_aw_size := 0.U
    io.axi_aw_burst := 0.U   

    io.axi_w_last := true.B

    io.axi_ar_id := 0.U
    io.axi_ar_len := 0.U
//     io.axi_ar_size := 2.U
    io.axi_ar_burst := 0.U
    
    ChiselHelpers.dontTouchBundleRecursive(io)   
    val state_reg = RegInit(0.U(2.W))
    val inst_reg = RegInit(0.U(32.W))
    val axi_r_valid_delay = RegInit(0.U)
    val canAccept = LFSR(16)(0)
    val validReg_aw1 = RegInit(false.B)
    val validReg_ar0 = RegInit(false.B)
    val validReg_ar1 = RegInit(false.B)
    val validReg_gpr = RegInit(false.B)
    val validReg_w1  = RegInit(false.B)
    val rdata_reg = RegInit(0.U(32.W))

    validReg_ar0 :=  Mux((io.ifu_valid && canAccept), true.B,
                            Mux(io.axi_ar_ready, false.B,validReg_ar0)) 
    validReg_ar1 :=  Mux((io.axi_r_valid && canAccept), true.B,
                            Mux(io.axi_ar_ready, false.B,validReg_ar1)) 
    validReg_aw1 :=  Mux((io.axi_r_valid && canAccept), true.B,
                            Mux(io.axi_aw_ready, false.B,validReg_aw1))
    validReg_w1  :=  Mux((io.axi_r_valid && canAccept), true.B,
                            Mux(io.axi_w_ready, false.B,validReg_w1)) 
    validReg_gpr :=  MuxCase(1.U, Seq(
                           (io.r_mask =/= 0.U) -> Mux((io.axi_r_valid && canAccept), true.B, Mux(io.gpr_r_ready, false.B,validReg_gpr)),
                           (io.r_mask === 0.U) -> Mux((state_reg === 2.U && canAccept), true.B, Mux(io.gpr_r_ready, false.B,validReg_gpr)),
                     ))
    val r_addr1 = (io.rs1_data +& io.imm)(31, 0)
    io.axi_ar_addr := MuxCase(io.pc, Seq(
                              (state_reg === 1.U && io.r_valid_lsu === true.B) -> r_addr1,      
                      ))
    axi_r_valid_delay := io.axi_r_valid
    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux((io.axi_r_valid && canAccept), 1.U, 0.U),
        (state_reg === 1.U) -> MuxCase(1.U, Seq(
                                    (io.r_valid_lsu && (io.w_mask === 0.U))  -> Mux((io.axi_r_valid && canAccept), 2.U, 1.U),
                                    ((io.r_valid_lsu === false.B) && (io.w_mask =/= 0.U)) -> Mux(io.axi_aw_ready, 2.U, 1.U),
                                    ((io.r_valid_lsu === false.B) && (io.w_mask === 0.U)) -> Mux(canAccept, 2.U, 1.U)
                             )),
        (state_reg === 2.U) -> Mux((validReg_gpr && io.gpr_r_ready), 0.U, 2.U)
    ))
    val waddr =  (io.rs1_data +& io.imm)(31, 0);
    io.axi_aw_addr := MuxCase(0.U, Seq(
                            (state_reg === 1.U) -> waddr
                            // (state_reg === 1.U) -> 0x10000000L.U
                     ))
    io.axi_aw_valid := MuxCase(false.B, Seq(
                              (state_reg === 1.U && io.w_mask =/= 0.U) -> validReg_aw1
                      ))
    io.axi_ar_valid := MuxCase(false.B, Seq(
                              (state_reg === 0.U) -> validReg_ar0,      
                              (state_reg === 1.U&& io.r_mask =/= 0.U) -> validReg_ar1
                       ))           
//     io.axi_ar_strb  := MuxCase(0.U, Seq(
//                               (state_reg === 0.U) -> 6.U,      
//                               (state_reg === 1.U) -> io.r_mask
//                        ))
    io.axi_w_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 1.U && io.w_mask =/= 0.U) -> validReg_w1
                       ))
    val w_data = MuxCase(0.U, Seq(
                            (io.w_mask === 1.U) -> io.rs2_data,      
                            (io.w_mask === 2.U) -> MuxCase(0.U, Seq(    
                                                      (waddr(1) === 0.U) -> Cat(0.U(16.W), io.rs2_data(15, 0)),
                                                      (waddr(1) === 1.U) -> Cat(io.rs2_data(15, 0), 0.U(16.W))
                                                     )),
                            (io.w_mask === 3.U) -> MuxCase(0.U, Seq(    
                                                      (waddr(1, 0) === 0.U) -> Cat(0.U(24.W), io.rs2_data(7, 0)),
                                                      (waddr(1, 0) === 1.U) -> Cat(0.U(16.W), io.rs2_data(7, 0), 0.U(8.W)),
                                                      (waddr(1, 0) === 2.U) -> Cat(0.U(8.W), io.rs2_data(7, 0), 0.U(16.W)),
                                                      (waddr(1, 0) === 3.U) -> Cat(io.rs2_data(7, 0), 0.U(24.W))
                                                     ))
                     ))
    io.axi_w_data   := MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> w_data
                       ))
    val strb = MuxCase(0.U, Seq(
                              (io.w_mask === 1.U) -> 15.U,      
                              (io.w_mask === 2.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1) === 0.U) -> 3.U,
                                                        (waddr(1) === 1.U) -> 12.U
                                                     )),
                              (io.w_mask === 3.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1, 0) === 0.U) -> 1.U,
                                                        (waddr(1, 0) === 1.U) -> 2.U,
                                                        (waddr(1, 0) === 2.U) -> 4.U,
                                                        (waddr(1, 0) === 3.U) -> 8.U
                                                     ))
                     ))
    val wsize = MuxCase(0.U, Seq(
                              (io.w_mask === 1.U) -> 2.U,      
                              (io.w_mask === 2.U) -> 1.U,
                              (io.w_mask === 3.U) -> 0.U
                     ))  
    io.axi_w_strb   := MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> strb
                     ))
    io.axi_aw_size  := MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> wsize
                     ))

    io.axi_r_ready  := canAccept
    io.axi_b_ready  := canAccept
    io.ifu_ready    := canAccept

    io.gpr_r_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> validReg_gpr
                       ))
    io.gpr_b_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> validReg_gpr
                       ))
    io.gpr_b_resp   := MuxCase(0.U, Seq(    
                              (state_reg === 2.U) -> io.axi_b_resp
                       ))
    val rsize = MuxCase(0.U, Seq(
                              (io.r_mask === 1.U) -> 2.U,      
                              (io.r_mask === 2.U) -> 0.U,
                              (io.r_mask === 3.U) -> 1.U,      
                              (io.r_mask === 4.U) -> 1.U,
                              (io.r_mask === 5.U) -> 0.U
                     )) 
    io.axi_ar_size  := MuxCase(0.U, Seq(   
                              (state_reg === 0.U) -> 2.U, 
                              (state_reg === 1.U && io.r_mask =/= 0.U) -> rsize
                     ))   
    val is_sram = ((io.axi_ar_addr >= "h0f000000".U) && (io.axi_ar_addr < "h0f001fff".U))
    val rdata_sram = MuxCase(0.U, Seq(
                              (io.r_mask === 1.U) -> io.axi_r_data,      
                              (io.r_mask === 2.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1, 0) === 0.U) -> Cat(0.U(24.W), io.axi_r_data(7, 0)),
                                                        (waddr(1, 0) === 1.U) -> Cat(0.U(24.W), io.axi_r_data(15, 8)),
                                                        (waddr(1, 0) === 2.U) -> Cat(0.U(24.W), io.axi_r_data(23, 16)),
                                                        (waddr(1, 0) === 3.U) -> Cat(0.U(24.W), io.axi_r_data(31, 24))
                                                     )),
                              (io.r_mask === 3.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1) === 0.U) -> Cat(Fill(16, io.axi_r_data(15)), io.axi_r_data(15, 0)),
                                                        (waddr(1) === 1.U) -> Cat(Fill(16, io.axi_r_data(31)), io.axi_r_data(31,16))
                                                     )),
                              (io.r_mask === 4.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1) === 0.U) -> Cat(0.U(16.W), io.axi_r_data(15, 0)),
                                                        (waddr(1) === 1.U) -> Cat(0.U(16.W), io.axi_r_data(31,16))
                                                     )),
                              (io.r_mask === 5.U) -> MuxCase(0.U, Seq(    
                                                        (waddr(1, 0) === 0.U) -> Cat(Fill(24, io.axi_r_data(7)), io.axi_r_data(7, 0)),
                                                        (waddr(1, 0) === 1.U) -> Cat(Fill(24, io.axi_r_data(15)), io.axi_r_data(15, 8)),
                                                        (waddr(1, 0) === 2.U) -> Cat(Fill(24, io.axi_r_data(23)), io.axi_r_data(23, 16)),
                                                        (waddr(1, 0) === 3.U) -> Cat(Fill(24, io.axi_r_data(31)), io.axi_r_data(31, 24))
                                                     ))
                            )
                     )
    val rdata_mrom = MuxCase(0.U, Seq(
                              (io.r_mask === 1.U) -> io.axi_r_data,      
                              (io.r_mask === 2.U) -> Cat(0.U(24.W), io.axi_r_data(7, 0)),
                              (io.r_mask === 3.U) -> Cat(Fill(16, io.axi_r_data(15)), io.axi_r_data(15,0)),
                              (io.r_mask === 4.U) -> Cat(0.U(16.W), io.axi_r_data(15,0)),
                              (io.r_mask === 5.U) -> Cat(Fill(24, io.axi_r_data(7)), io.axi_r_data(7, 0))
                            )
                     )    
    val rdata = Mux(is_sram, rdata_sram, rdata_mrom)   
    rdata_reg := MuxCase(0.U, Seq(
              (io.r_valid_lsu && (io.w_mask === 0.U))  -> Mux((io.axi_r_valid && canAccept), rdata, rdata_reg),
    ))

    io.gpr_data     := MuxCase(0.U, Seq(    
                              (io.r_valid_lsu && (state_reg === 2.U)) -> rdata_reg
                       ))
    inst_reg         := MuxCase(inst_reg, Seq(    
                              ((io.axi_r_valid && canAccept) && (state_reg === 0.U)) -> io.axi_r_data
                       ))
    io.inst         := inst_reg
}
