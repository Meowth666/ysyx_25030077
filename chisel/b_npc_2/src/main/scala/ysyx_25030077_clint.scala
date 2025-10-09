import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_clint extends Module {
  val io = IO(new Bundle {
    val ar  = Flipped(Decoupled(new arReq))
    val raddr = Input(UInt(32.W))
    val r_mask = Input(UInt(3.W))
    // val r_valid = Input(Bool())
    val mem_data = Output(UInt(32.W))
    val r  = Decoupled(new rReq)
    val b  = Decoupled(new bReq)
    val b_resp = Output(UInt(2.W))
  })
  dontTouchBundleRecursive(io)
  val mem_data_Reg = RegInit(0x0.U(64.W))
  val validReg = RegInit(false.B)
  val canAccept =  LFSR(16)(0)
 
  val delayCnt = RegInit(0.U(3.W))  // 延迟最大 7 个周期
  val startDelay = WireInit(false.B)

  val r_valid_1 = io.r_mask > 0.U
  startDelay := io.ar.valid && canAccept && r_valid_1
  // io.cnt := delayCnt
  val lfsrValue = LFSR(3)
  // 2. 调整范围为2-7：若为1则替换为2，其他值不变
  val adjustedLfsr = Mux(lfsrValue === 1.U, 2.U(3.W), lfsrValue)
  delayCnt := Mux((startDelay && delayCnt === 0.U), adjustedLfsr,
              Mux(delayCnt =/= 0.U, delayCnt - 1.U,
                  0.U))
  
  io.r.valid := validReg && (delayCnt === 0.U || delayCnt === 1.U)
  io.b.valid := validReg && (delayCnt === 0.U || delayCnt === 1.U)
  io.b_resp := 0.U

  io.mem_data := Mux(io.raddr === 0xa0000048L.U, mem_data_Reg(31, 0), mem_data_Reg(63, 32))
  validReg := Mux(io.ar.valid && canAccept, true.B,
              Mux(io.r.ready && (delayCnt === 0.U), false.B,
                  validReg))
  mem_data_Reg := Mux(io.ar.valid && canAccept, mem_data_Reg + 1792.U, mem_data_Reg)

  io.ar.ready := canAccept
}


