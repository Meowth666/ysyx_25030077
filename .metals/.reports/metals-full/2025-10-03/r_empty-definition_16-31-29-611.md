error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ysyx_25030077_arbiter.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ysyx_25030077_arbiter.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/delay_cnt_mem.
	 -chisel3/delay_cnt_mem#
	 -chisel3/delay_cnt_mem().
	 -chisel3/util/delay_cnt_mem.
	 -chisel3/util/delay_cnt_mem#
	 -chisel3/util/delay_cnt_mem().
	 -ChiselHelpers.delay_cnt_mem.
	 -ChiselHelpers.delay_cnt_mem#
	 -ChiselHelpers.delay_cnt_mem().
	 -delay_cnt_mem.
	 -delay_cnt_mem#
	 -delay_cnt_mem().
	 -scala/Predef.delay_cnt_mem.
	 -scala/Predef.delay_cnt_mem#
	 -scala/Predef.delay_cnt_mem().
offset: 217
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/ysyx_25030077_arbiter.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_arbiter extends Module {
  val io = IO(new Bundle {
    val ifu_valid = Input(Bool())
    val delay_cn@@t_mem = Input(UInt(3.W))
    val delay_cnt_clint = Input(UInt(3.W))
    val pc = Input(UInt(32.W))
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val imm = Input(UInt(32.W))
    val r_mask = Input(UInt(3.W))                
    val w_mask = Input(UInt(3.W))
    val axi_ar_valid_mem = Output(Bool())
    val axi_ar_addr_mem = Output(UInt(32.W))
    val axi_ar_strb_mem = Output(UInt(3.W))
    val axi_ar_ready_mem = Input(Bool())

    val axi_ar_valid_clint = Output(Bool())
    val axi_ar_addr_clint = Output(UInt(32.W))
    val axi_ar_strb_clint = Output(UInt(3.W))
    val axi_ar_ready_clint = Input(Bool())

    val axi_aw_valid_mem = Output(Bool())
    val axi_aw_addr_mem = Output(UInt(32.W))
    val axi_aw_ready_mem = Input(Bool())

    val axi_w_valid_mem = Output(Bool())
    val axi_w_data_mem = Output(UInt(32.W))
    val axi_w_strb_mem = Output(UInt(3.W))
    val axi_w_ready_mem = Input(Bool())

    val axi_aw_valid_uart = Output(Bool())
    val axi_aw_addr_uart = Output(UInt(32.W))
    val axi_aw_ready_uart = Input(Bool())

    val axi_w_valid_uart = Output(Bool())
    val axi_w_data_uart = Output(UInt(32.W))
    val axi_w_strb_uart = Output(UInt(3.W))
    val axi_w_ready_uart = Input(Bool())

    val axi_r_valid_mem = Input(Bool())
    val axi_r_data_mem = Input(UInt(32.W))
    val axi_r_ready_mem = Output(Bool())
    //r_resp

    val axi_r_valid_clint = Input(Bool())
    val axi_r_data_clint = Input(UInt(32.W))
    val axi_r_ready_clint = Output(Bool())

    val axi_b_valid = Input(Bool())
    val axi_b_ready = Output(Bool())
    val axi_b_resp = Input(UInt(2.W))
    val gpr_b_resp = Output(UInt(2.W))
    //b_resp

    val gpr_r_valid = Output(Bool())
    val gpr_b_valid = Output(Bool())
    val gpr_r_ready = Input(Bool())
    val gpr_b_ready = Input(Bool())
    val gpr_data = Output(UInt(32.W)) 
    val inst = Output(UInt(32.W))
    val ifu_ready = Output(Bool())

    val r_valid_lsu = Input(Bool())
    val is_r = Output(Bool())
  })

    ChiselHelpers.dontTouchBundleRecursive(io)   
    val state_reg = RegInit(0.U(2.W))
    val inst_reg = RegInit(0.U(32.W))

    val axi_ar_addr = MuxCase((io.rs1_data +& io.imm)(31, 0), Seq(
                              (state_reg === 0.U) -> io.pc,      
                            //   (state_reg === 1.U) -> (io.rs1_data +& io.imm)(31, 0)
                      ))
    val delay_cnt = Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), io.delay_cnt_clint, io.delay_cnt_mem)
    val axi_r_valid = io.axi_r_valid_mem || io.axi_r_valid_clint
    val axi_ar_ready = Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), io.axi_ar_ready_clint, io.axi_ar_ready_mem)
    val axi_r_data = Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), io.axi_r_data_clint, io.axi_r_data_mem)
    
    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux(delay_cnt === 1.U, 1.U, 0.U),
        (state_reg === 1.U) -> MuxCase(0.U, Seq(
                                    (io.r_valid_lsu === true.B) -> Mux(delay_cnt === 1.U, 2.U, 1.U),
                                    (io.r_valid_lsu === false.B) -> Mux(axi_r_valid & (io.axi_ar_ready_clint | io.axi_ar_ready_mem), 2.U, 1.U)
                             )),
        (state_reg === 2.U) -> Mux(axi_r_valid & axi_ar_ready, 0.U, 2.U)
    ))

    val axi_aw_addr = MuxCase(0.U, Seq(
                              (state_reg === 1.U) -> (io.rs1_data +& io.imm)(31, 0)
                      ))
    io.axi_aw_addr_mem  := Mux(axi_aw_addr === 0xa00003f8L.U, 0.U, axi_aw_addr)
    io.axi_aw_addr_uart := Mux(axi_aw_addr === 0xa00003f8L.U, 0xa00003f8L.U, 0.U)

    val axi_aw_valid = MuxCase(false.B, Seq(
                              (state_reg === 1.U) -> (io.axi_r_valid_mem || io.axi_r_valid_clint)
                      ))
    io.axi_aw_valid_mem  := Mux(axi_aw_addr === 0xa00003f8L.U, 0.U, axi_aw_valid)
    io.axi_aw_valid_uart := Mux(axi_aw_addr === 0xa00003f8L.U, axi_aw_valid, 0.U)
    
    io.axi_ar_addr_mem    := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), 0x80000000L.U, axi_ar_addr)
    io.axi_ar_addr_clint  := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), axi_ar_addr, 0x80000000L.U)      

    val axi_ar_valid = MuxCase(false.B, Seq(
                              (state_reg === 0.U) -> io.ifu_valid,      
                              (state_reg === 1.U) -> axi_r_valid
                       ))
    io.axi_ar_valid_mem    := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), 0.U, axi_ar_valid)
    io.axi_ar_valid_clint  := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), axi_ar_valid, 0.U)      
                     
    val axi_ar_strb  = MuxCase(0.U, Seq(
                              (state_reg === 0.U) -> 6.U,      
                              (state_reg === 1.U) -> io.r_mask
                       ))
    io.axi_ar_strb_mem    := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), 0.U, axi_ar_strb)
    io.axi_ar_strb_clint  := Mux(((axi_ar_addr === 0xa0000048L.U) || (axi_ar_addr === 0xa000004cL.U)), axi_ar_strb, 0.U)      

    val axi_w_valid  = MuxCase(false.B, Seq(    
                              (state_reg === 1.U) -> (io.axi_r_valid_mem || io.axi_r_valid_clint)
                       ))
    io.axi_w_valid_mem  := Mux(axi_aw_addr === 0xa00003f8L.U, 0.U, axi_w_valid)
    io.axi_w_valid_uart := Mux(axi_aw_addr === 0xa00003f8L.U, axi_w_valid, 0.U)

    val axi_w_data   = MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> io.rs2_data
                       ))
    io.axi_w_data_mem  := Mux(axi_aw_addr === 0xa00003f8L.U, 0.U, axi_w_data)
    io.axi_w_data_uart := Mux(axi_aw_addr === 0xa00003f8L.U, axi_w_data, 0.U)

    val axi_w_strb   = MuxCase(0.U, Seq(    
                              (state_reg === 1.U) -> io.w_mask
                       ))
    io.axi_w_strb_mem  := Mux(axi_aw_addr === 0xa00003f8L.U, 0.U, axi_w_strb)
    io.axi_w_strb_uart := Mux(axi_aw_addr === 0xa00003f8L.U, axi_w_strb, 0.U)

    io.axi_r_ready_clint  := io.gpr_r_ready
    io.axi_r_ready_mem    := io.gpr_r_ready
    io.axi_b_ready  := io.gpr_b_ready
    io.ifu_ready    := io.axi_ar_ready_mem

    io.gpr_r_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> axi_r_valid
                       ))
    io.gpr_b_valid  := MuxCase(false.B, Seq(    
                              (state_reg === 2.U) -> io.axi_b_valid
                       ))
    io.gpr_b_resp   := MuxCase(0.U, Seq(    
                              (state_reg === 2.U) -> io.axi_b_resp
                       ))
    io.gpr_data     := MuxCase(0.U, Seq(    
                              (state_reg === 2.U) -> axi_r_data
                       ))
    inst_reg         := MuxCase(inst_reg, Seq(    
                              (delay_cnt === 1.U &  (state_reg === 0.U)) -> axi_r_data
                       ))
    io.inst         := inst_reg
    io.is_r      := MuxCase(false.B, Seq(    
                              (state_reg === 0.U) -> true.B,
                              (state_reg === 1.U) -> io.r_valid_lsu
                       ))
}
```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.