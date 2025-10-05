import chisel3._
import chisel3.util._

class top extends Module {
  val io = IO(new Bundle {
    val add_valid = Input(UInt(1.W))
    val addr_in = Input(UInt(32.W)) // 输入地址
    val pc_count = Output(UInt(32.W))    // 从 IFU 输出的指令
  })
  val addr_Reg = RegInit(0x80000000L.U(32.W))
  addr_Reg :=  Mux((io.add_valid === 1.U(1.W)), addr_Reg, io.addr_in)
  io.pc_count := addr_Reg
}
