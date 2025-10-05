import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._
class ysyx_25030077_UART extends Module {
  val io = IO(new Bundle {
    val aw  = Flipped(Decoupled(new awReq))
    val w   = Flipped(Decoupled(new wReq))
    val waddr = Input(UInt(32.W))
    val wdata  = Input(UInt(32.W))
    val w_mask = Input(UInt(3.W))
  })
    dontTouchBundleRecursive(io)
    val canAccept =  LFSR(16)(0);

    io.aw.ready := canAccept
    io.w.ready  := canAccept

    val targetAddr = 0xa00003f8L.U(32.W)

    val charToPrint = io.wdata(7,0)
    printf(p"${Mux((io.aw.valid && canAccept && io.w.valid && (io.waddr === targetAddr)), charToPrint, 0.U)}%c")
}