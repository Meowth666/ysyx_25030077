import chisel3._
import chisel3.stage.{ChiselStage, ChiselGeneratorAnnotation}

object GenerateVerilog extends App {
  (new ChiselStage).execute(
    Array("-td", "generated"), // 输出目录为 generated/
    Seq(ChiselGeneratorAnnotation(() => new top)) // 默认输出 generated/NPC.v
  )
}
