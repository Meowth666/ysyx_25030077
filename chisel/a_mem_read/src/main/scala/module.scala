import chisel3._
import chisel3.util._

class MyOperators extends Module{
  val io = IO(new Bundle{
  val rs1_data = Input(UInt(32.W))
  val rs2_data = Input(UInt(32.W))
  val imm_data = Input(UInt(32.W))
  val io_mem_read_type = Input(UInt(3.W))
 })

  
}

object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
  emitVerilog(new MyOperators(), Array("--target-dir", "generated_verilog"))
}
