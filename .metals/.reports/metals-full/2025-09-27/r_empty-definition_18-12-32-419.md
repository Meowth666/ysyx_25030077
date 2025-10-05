error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/clint.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/clint.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/io/ar/valid.
	 -chisel3/io/ar/valid#
	 -chisel3/io/ar/valid().
	 -chisel3/util/io/ar/valid.
	 -chisel3/util/io/ar/valid#
	 -chisel3/util/io/ar/valid().
	 -io/ar/valid.
	 -io/ar/valid#
	 -io/ar/valid().
	 -scala/Predef.io.ar.valid.
	 -scala/Predef.io.ar.valid#
	 -scala/Predef.io.ar.valid().
offset: 1031
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/clint.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
class clint extends Module {
  val io = IO(new Bundle {
    val ar  = Flipped(Decoupled(new arReq))
    val raddr = Input(UInt(32.W))
    val r_mask = Input(UInt(3.W))
    val r_valid = Input(Bool())
    val mem_data = Output(UInt(32.W))
    val cnt = Output(UInt(3.W))
    val r  = Decoupled(new rReq)
  })

  val mem_data_Reg = RegInit(0x0.U(32.W))
  val validReg = RegInit(false.B)
  val canAccept =  LFSR(16)(0)
  val read_data = (io.waddr ^ io.raddr ^ Cat(0.U(27.W), (io.r_mask | io.w_mask), io.aw.valid, io.w.valid));

  val delayCnt = RegInit(0.U(3.W))  // 延迟最大 7 个周期
  val startDelay = WireInit(false.B)
  startDelay := io.ar.valid && canAccept && io.r_valid

  io.cnt := delayCnt
  delayCnt := Mux(startDelay, LFSR(3),
              Mux(delayCnt =/= 0.U, delayCnt - 1.U,
                  0.U))
  
  io.r.valid := validReg && (delayCnt === 0.U)
  io.b.valid := validReg && (delayCnt === 0.U)

  io.mem_data := mem_data_Reg

  validReg := Mux(io.ar.val@@id && canAccept, true.B,
              Mux(io.b.ready && io.r.ready && (delayCnt === 0.U), false.B,
                  validReg))
  mem_data_Reg := Mux(io.ar.valid && canAccept, read_data, mem_data_Reg)

  io.ar.ready := canAccept
  io.aw.ready := canAccept
  io.w.ready  := canAccept
}



```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.