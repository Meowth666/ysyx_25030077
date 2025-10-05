import chisel3.stage.ChiselStage

object GenerateVerilog extends App {
  // 关闭随机初始化
  System.setProperty("chisel3.stage.NoRandomInit", "true")

  (new ChiselStage).emitVerilog(
    new top,
    Array("-td", "generated") // 输出目录为 generated
  )
}
