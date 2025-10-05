import chisel3._
import chisel3.util._

class MyOperators extends Module {
  val io = IO(new Bundle {
    val in      = Input(UInt(4.W))
    val out_mux = Output(UInt(4.W))
    val out_cat = Output(UInt(4.W))
  })

  val s = true.B
  io.out_mux := Mux(s, 3.U, 0.U) //MUX(条件, 为真时的值, 为假时的值)
  io.out_cat := Cat(2.U(2.W), 1.U(1.W))//Cat拼接函数(低位, 高位)
}

object MyOperators extends App {
  println(getVerilogString(new MyOperators()))
}
