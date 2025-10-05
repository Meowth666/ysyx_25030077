import chisel3._
import chisel3.util._

class MyOperators extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(32.W))
    val rs1_data    = Input(UInt(32.W))
    val rs2_data    = Input(UInt(32.W))
    val imm_data    = Input(UInt(32.W))
    val mem_data    = Output(UInt(32.W))
  })
  // 初始化 0..255
  val mems = RegInit(VecInit(Seq.tabulate(256)(i => i.U(32.W))))
  // 取每个输入的低 8 位并做异或
  val index = io.instruction(7,0) ^ io.rs1_data(7,0) ^ io.rs2_data(7,0) ^ io.imm_data(7,0)
  // 用异或结果作为索引
  io.mem_data := mems(index)
}

object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
  emitVerilog(new MyOperators(), Array("--target-dir", "generated_verilog"))
}
