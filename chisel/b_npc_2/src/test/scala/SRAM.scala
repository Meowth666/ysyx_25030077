import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR

class SRAM extends Module {
  val io = IO(new Bundle {
    val ar = Flipped(Decoupled(new InstReq))   // 来自 IFU 的请求

    val ar1  = Decoupled(new arReq)
    val aw = Decoupled(new awReq)
    val w  = Decoupled(new wReq)

    val r_data = Output(UInt(32.W))
  })
  // 锁存地址
  val instReg = RegInit(0x413.U(32.W))
  val validReg = RegInit(true.B)

  val canAccept = LFSR(16)(0)

  io.ar1.valid  := validReg
  io.w.valid  := validReg
  io.aw.valid := validReg

  io.r_data := instReg

  validReg := Mux(io.ar.valid && canAccept, true.B,
              Mux(io.ar1.ready && io.aw.ready && io.w.ready, false.B,
                  validReg))

  instReg := Mux((io.ar.valid && canAccept), io.ar.bits.addr, instReg)

  io.ar.ready := canAccept
}
