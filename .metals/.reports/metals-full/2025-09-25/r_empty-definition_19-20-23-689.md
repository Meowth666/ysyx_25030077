error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/UART.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/UART.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/io/wdata.
	 -chisel3/io/wdata#
	 -chisel3/io/wdata().
	 -chisel3/util/io/wdata.
	 -chisel3/util/io/wdata#
	 -chisel3/util/io/wdata().
	 -io/wdata.
	 -io/wdata#
	 -io/wdata().
	 -scala/Predef.io.wdata.
	 -scala/Predef.io.wdata#
	 -scala/Predef.io.wdata().
offset: 433
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/UART.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
class mem extends Module {
  val io = IO(new Bundle {
    val aw  = Flipped(Decoupled(new awReq))
    val w   = Flipped(Decoupled(new wReq))
    val waddr = Input(UInt(32.W))
    val wdata  = Input(UInt(32.W))
    val w_mask = Input(UInt(3.W))
  })

    val canAccept =  LFSR(16)(0);

    io.aw.ready := canAccept
    io.w.ready  := canAccept

    val low8 = io.@@wdata(1,0)
    printf(p"${charToPrint}%c")
}
```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.