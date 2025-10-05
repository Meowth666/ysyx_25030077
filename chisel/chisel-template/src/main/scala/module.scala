import chisel3._
import chisel3.util._

class ParameterizedAdder extends Module {
  val io = IO(new Bundle {
    val in_a     = Input(SInt(32.W))
    val in_b     = Input(SInt(32.W))
    val sw       = Input(UInt(3.W))
    val out      = Output(SInt(32.W))
    val carry    = Output(UInt(1.W))
    val overflow = Output(UInt(1.W))
  })

  // Convert sw signal to one-hot encoding
  val oneHot = UIntToOH(io.sw, 8)

  // Define operation results
  val addResult = (io.in_a +& io.in_b).asSInt
  val subResult = (io.in_a -& io.in_b).asSInt
  val andResult = (io.in_a & io.in_b).asSInt
  val orResult  = (io.in_a | io.in_b).asSInt
  val xorResult = (io.in_a ^ io.in_b).asSInt
  val otherResult = 0.S

  // Select the appropriate result based on oneHot signal
  io.out := Mux1H(Seq(
    oneHot(0) -> addResult,
    oneHot(1) -> subResult,
    oneHot(2) -> andResult,
    oneHot(3) -> orResult,
    oneHot(4) -> xorResult,
    oneHot(5) -> otherResult,
    oneHot(6) -> otherResult,
    oneHot(7) -> otherResult
  ))

  // Calculate carry and overflow flags for addition and subtraction
  io.carry := Mux1H(Seq(
    oneHot(0) -> addResult(4),
    oneHot(1) -> subResult(4),
    oneHot(2) -> 0.U,
    oneHot(3) -> 0.U,
    oneHot(4) -> 0.U,
    oneHot(5) -> 0.U,
    oneHot(6) -> 0.U,
    oneHot(7) -> 0.U
  ))

  io.overflow := Mux1H(Seq(
    oneHot(0) -> ((io.in_a(3) === io.in_b(3)) && (io.in_a(3) =/= addResult(3))),
    oneHot(1) -> ((io.in_a(3) =/= io.in_b(3)) && (io.in_a(3) =/= subResult(3))),
    oneHot(2) -> 0.U,
    oneHot(3) -> 0.U,
    oneHot(4) -> 0.U,
    oneHot(5) -> 0.U,
    oneHot(6) -> 0.U,
    oneHot(7) -> 0.U
  ))
}

object ParameterizedAdder extends App {
  println(getVerilogString(new ParameterizedAdder()))
}
