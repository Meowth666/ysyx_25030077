import chisel3._
import chisel3.util._

class MyOperators extends Module {
  val io = IO(new Bundle {
  val next_pc = Input(UInt(32.W))
  val Pc_count = Output(UInt(32.W))
  })

  // 使用无符号常量初始化 state 寄存器
  val state = RegInit(0x80000000L.U(32.W))
  val nextState = io.next_pc
  state := nextState
  io.Pc_count := state
}

object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
   emitVerilog(new MyOperators(), Array("--target-dir", "generated_verilog"))
}
