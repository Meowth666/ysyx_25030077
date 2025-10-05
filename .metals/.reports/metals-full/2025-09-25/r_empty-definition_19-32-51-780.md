error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/GenerateVerilog.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/GenerateVerilog.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -targetDir.
	 -targetDir#
	 -targetDir().
	 -scala/Predef.targetDir.
	 -scala/Predef.targetDir#
	 -scala/Predef.targetDir().
offset: 591
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/GenerateVerilog.scala
text:
```scala
import chisel3.stage.ChiselStage

object GenerateVerilog extends App {
  val stage = new ChiselStage

  // 输出目录
  val targetDir = Array("--target-dir", "build")

  // 分别导出各个模块
  stage.emitVerilog(new top, targetDir)
  // stage.emitVerilog(new addr_gen, targetDir)
  stage.emitVerilog(new IFU, targetDir)
  stage.emitVerilog(new arbiter, targetDir)
  stage.emitVerilog(new IDU, targetDir)
  stage.emitVerilog(new imm, targetDir)
  stage.emitVerilog(new gpr, targetDir)
  stage.emitVerilog(new mem, targetDir)
  stage.emitVerilog(new data_control, targetDir)
  stage.emitVerilog(new alu, targe@@tDir)
  stage.emitVerilog(new pc_next, targetDir)
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.