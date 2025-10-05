import chisel3._
import chisel3.util._

class MyOperators extends Module {
  val io = IO(new Bundle {
    val waddr = Input(UInt(5.W))
    val wdata = Input(UInt(32.W))
    val raddr_rs1 = Input(UInt(5.W))
    val rdata_rs1 = Output(UInt(32.W))
    val raddr_rs2 = Input(UInt(5.W))
    val rdata_rs2 = Output(UInt(32.W))
  })

  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

  // 延迟一个周期的写地址和写数据
  val waddr_d = RegNext(io.waddr)
  val wdata_d = RegNext(io.wdata)

  // x0 恒为 0，用 Mux 选择写入值
  regs(waddr_d) := Mux(waddr_d === 0.U, 0.U, wdata_d)

  // 读口
  io.rdata_rs1 := regs(io.raddr_rs1)
  io.rdata_rs2 := regs(io.raddr_rs2)
}



object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
  emitVerilog(new MyOperators(), Array("--target-dir", "generated_verilog"))
}
