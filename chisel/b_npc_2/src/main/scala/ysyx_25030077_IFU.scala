import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_IFU extends Module {
  val io = IO(new Bundle {
    val rd_Req = Flipped(Decoupled(new addrReq))
    val ar  = Decoupled(new InstReq)         // 向 SRAM 发起请求
  })
  dontTouchBundleRecursive(io)
  // Queue 打断环路（深度1即可）
  val reqQ = Queue(io.rd_Req, 1)
  // sramReq 从 Queue 取数据
  io.ar.valid := reqQ.valid
  io.ar.bits.addr := reqQ.bits.addr
  reqQ.ready := io.ar.ready
}
