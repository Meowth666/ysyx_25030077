import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_gpr extends Module {
  val io = IO(new Bundle {
    val mem_Req =  Flipped(Decoupled(new rReq))
    val b =  Flipped(Decoupled(new bReq))
    val gpr_b_resp = Input(UInt(2.W))
    val pc_next = Input(UInt(32.W))
    val waddr_rd = Input(UInt(5.W))
    val wdata_rd = Input(UInt(32.W))
    val raddr_rs1 = Input(UInt(5.W))
    val rdata_rs1 = Output(UInt(32.W))
    val raddr_rs2 = Input(UInt(5.W))
    val rdata_rs2 = Output(UInt(32.W))
    val ifu_Req =  Decoupled(new addrReq)
  })
  dontTouchBundleRecursive(io)
  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  val validReg = RegInit(false.B)
  val canAccept = LFSR(16)(0)
  val pc_next_reg = RegInit("h80000000".U(32.W))

  val reg_data_write = Mux(io.waddr_rd === 0.U, 0.U, io.wdata_rd)
  validReg := Mux(io.mem_Req.valid && canAccept, true.B,
                Mux(io.ifu_Req.ready, false.B,
                    validReg))
  // 读口
  io.rdata_rs1 := regs(io.raddr_rs1)
  io.rdata_rs2 := regs(io.raddr_rs2)
  io.ifu_Req.bits.addr := pc_next_reg

  regs(io.waddr_rd) := Mux(io.mem_Req.valid && canAccept, reg_data_write, regs(io.waddr_rd))
  pc_next_reg := Mux(io.mem_Req.valid && canAccept, io.pc_next, pc_next_reg)
  io.ifu_Req.valid := validReg
  io.mem_Req.ready := canAccept
  io.b.ready := canAccept
}


