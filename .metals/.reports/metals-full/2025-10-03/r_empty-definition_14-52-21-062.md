error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/IFU.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/IFU.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/ChiselHelpers.
	 -chisel3/util/ChiselHelpers.
	 -ChiselHelpers.ChiselHelpers.
	 -ChiselHelpers.
	 -scala/Predef.ChiselHelpers.
offset: 52
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/IFU.scala
text:
```scala
import chisel3._
import chisel3.util._
import Chisel@@Helpers._
class IFU extends Module {
  val io = IO(new Bundle {
    val rd_Req = Flipped(Decoupled(new addrReq))
    val ar  = Decoupled(new InstReq)         // 向 SRAM 发起请求
  })
  // Queue 打断环路（深度1即可）
  val reqQ = Queue(io.rd_Req, 1)
  // sramReq 从 Queue 取数据
  io.ar.valid := reqQ.valid
  io.ar.bits.addr := reqQ.bits.addr
  reqQ.ready := io.ar.ready
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.