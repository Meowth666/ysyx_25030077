import chisel3._
import chisel3.util._

class SRAM extends Module {
  val io = IO(new Bundle {
    val req = Flipped(Decoupled(new InstReq))   // 来自 IFU 的请求
    val iduReq  = Decoupled(new yimaReq)
  })

  // 状态定义
  val s_wait_vaild :: s_out :: Nil = Enum(2)
  val state_ram = RegInit(s_wait_vaild)

  // 锁存地址
  val instReg = RegInit(0x413.U(32.W))
  // 条件更新 addrReg：只有在 idle 且输入地址有效时锁存
  instReg := Mux((io.req.valid), instReg, io.req.bits.addr)

  // 状态转移逻辑（纯 Mux）
  state_ram := MuxLookup(state_ram, s_wait_vaild, Array(
    s_wait_vaild -> Mux(io.req.valid, s_out, s_wait_vaild),
    s_out -> Mux(io.req.ready, s_wait_vaild, s_out)
  ))
  io.req.ready := (state_ram === s_out)

  io.iduReq.bits.inst := instReg
  io.iduReq.valid := (state_ram === s_out)
}
