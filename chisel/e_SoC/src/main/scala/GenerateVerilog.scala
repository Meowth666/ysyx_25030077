import chisel3.stage.ChiselStage

object GenerateVerilog extends App {
  val stage = new ChiselStage

  // 输出目录
  val targetDir = Array("--target-dir", "build")

  // 分别导出各个模块
  stage.emitVerilog(new ysyx_25030077, targetDir)
  // stage.emitVerilog(new addr_gen, targetDir)
  stage.emitVerilog(new ysyx_25030077_IFU, targetDir)
  stage.emitVerilog(new ysyx_25030077_arbiter, targetDir)
  stage.emitVerilog(new ysyx_25030077_IDU, targetDir)
  stage.emitVerilog(new ysyx_25030077_imm, targetDir)
  stage.emitVerilog(new ysyx_25030077_gpr, targetDir)
  stage.emitVerilog(new ysyx_25030077_data_control, targetDir)
  stage.emitVerilog(new ysyx_25030077_alu, targetDir)
  stage.emitVerilog(new ysyx_25030077_pc_next, targetDir)
}
