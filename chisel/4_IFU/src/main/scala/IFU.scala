import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val addr_Req = Flipped(Decoupled(new addrReq))
    val sramReq  = Decoupled(new InstReq)         // 向 SRAM 发起请求
  })

  // 状态定义
  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)

  // 锁存地址
  val addrReg = RegInit(0.U(32.W))

  // 条件更新 addrReg：只有在 idle 且输入地址有效时锁存
  addrReg := Mux((state === s_wait_ready) && (io.addr_Req.valid), io.addr_Req.bits.addr, addrReg)

  // 状态转移逻辑（纯 Mux）
  state := MuxLookup(state, s_idle, Array(
    s_idle -> s_wait_ready,
    s_wait_ready -> Mux(io.sramReq.ready, s_idle, s_wait_ready)
  ))

  // 输出逻辑（纯 Mux）
  io.sramReq.valid := (state === s_wait_ready)
  io.sramReq.bits.addr := addrReg
  io.addr_Req.ready := (state === s_wait_ready)
}
