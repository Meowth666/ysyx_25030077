import chisel3._
import chisel3.util._

class alu extends Module {
  val io = IO(new Bundle {
    val in_a     = Input(UInt(32.W))
    val in_b     = Input(UInt(32.W))
    val sw       = Input(UInt(4.W))
    val out      = Output(UInt(32.W))
    val carry    = Output(UInt(1.W))
    val overflow = Output(UInt(1.W))
  })

  // one-hot selector
  val oneHot = UIntToOH(io.sw, 16)

  // --- compute base results (keep these widths safe) ---
  val add33  = (io.in_a +& io.in_b)    // 33 bits
  val sub33  = (io.in_a -& io.in_b)    // 33 bits
  val and32  = (io.in_a & io.in_b)
  val or32   = (io.in_a | io.in_b)
  val xor32  = (io.in_a ^ io.in_b)
  val srai32 = (io.in_a.asSInt >> io.in_b(4,0)).asUInt
  val srli32 = (io.in_a >> io.in_b(4,0))
  val sll32  = (io.in_a << io.in_b(4,0))
  val sltiu_b = (io.in_a < io.in_b)            // Bool
  val slt_b   = (io.in_a.asSInt < io.in_b.asSInt) // Bool

  // helpers: unify to 33 bits (MSB = carry/flag, [31:0] = value)
  def u32_to_u33(x: UInt) = Cat(0.U(1.W), x)            // 32 -> 33
  def bool_to_u33(b: Bool) = Cat(0.U(32.W), b.asUInt)  // 1 -> 33

  // build unified 33-bit out33 via Mux1H
  val out33 = Mux1H(Seq(
    oneHot(0)  -> add33,
    oneHot(1)  -> sub33,
    oneHot(2)  -> bool_to_u33(sltiu_b),
    oneHot(3)  -> u32_to_u33(or32),
    oneHot(4)  -> u32_to_u33(xor32),
    oneHot(5)  -> u32_to_u33(srai32),
    oneHot(6)  -> u32_to_u33(and32),
    oneHot(7)  -> 0.U(33.W),
    oneHot(8)  -> u32_to_u33(sll32),
    oneHot(9)  -> u32_to_u33(srli32),
    oneHot(10) -> bool_to_u33(slt_b),
    oneHot(11) -> 0.U(33.W),
    oneHot(12) -> 0.U(33.W),
    oneHot(13) -> 0.U(33.W),
    oneHot(14) -> 0.U(33.W),
    oneHot(15) -> 0.U(33.W)
  ))

  // assign out and carry from unified vector
  io.out   := out33(31,0)
  io.carry := out33(32)

  // --- Overflow detection using bitwise formula (no precedence ambiguity) ---
  val a31 = io.in_a(31)
  val b31 = io.in_b(31)
  val s31 = out33(31) // 32-bit result sign

  // overflow formulas (Bool)
  val overflowAddBool = (a31 ^ s31) & !(a31 ^ b31)  // (A^SUM) & ~(A^B)
  val overflowSubBool = (a31 ^ s31) &  (a31 ^ b31)  // (A^SUM) & (A^B)

  // choose overflow only for add/sub
  io.overflow := Mux1H(Seq(
    oneHot(0) -> overflowAddBool.asUInt,
    oneHot(1) -> overflowSubBool.asUInt,
    oneHot(2) -> 0.U(1.W),
    oneHot(3) -> 0.U(1.W),
    oneHot(4) -> 0.U(1.W),
    oneHot(5) -> 0.U(1.W),
    oneHot(6) -> 0.U(1.W),
    oneHot(7) -> 0.U(1.W),
    oneHot(8) -> 0.U(1.W),
    oneHot(9) -> 0.U(1.W),
    oneHot(10)-> 0.U(1.W),
    oneHot(11)-> 0.U(1.W),
    oneHot(12)-> 0.U(1.W),
    oneHot(13)-> 0.U(1.W),
    oneHot(14)-> 0.U(1.W),
    oneHot(15)-> 0.U(1.W)
  ))
}

object MyOperators extends App {
  //println(getVerilogString(new MyOperators()))
  val outputDir = "generated_verilog"
  // 生成 Verilog 文件并输出到指定目录
   emitVerilog(new alu(), Array("--target-dir", "generated_verilog"))
}
