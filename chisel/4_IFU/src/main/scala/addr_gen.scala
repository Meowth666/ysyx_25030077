import chisel3._
import chisel3.util._

class addr_gen extends Module {
  val io = IO(new Bundle {
    val IFUReq  = Decoupled(new addrReq)         // 向 SRAM 发起请求
  })

  // 状态定义
  val addr_idle :: addr_wait_ready :: Nil = Enum(2)
  val addr_state = RegInit(addr_idle)

  // 锁存地址
  val dataReg = RegInit(0x80000000L.U(32.W))

  dataReg := Mux((addr_state === addr_idle), dataReg + 4.U(32.W), dataReg)

  // 状态转移逻辑（纯 Mux）
  addr_state := MuxLookup(addr_state, addr_idle, Array(
    addr_idle -> addr_wait_ready,
    addr_wait_ready -> Mux(io.IFUReq.ready, addr_idle, addr_wait_ready)
  ))

  // 输出逻辑（纯 Mux）
  io.IFUReq.valid := (addr_state === addr_wait_ready)
  io.IFUReq.bits.addr := dataReg
}

