import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_imm extends Module {
  val io = IO(new Bundle {
  val instruction = Input(UInt(32.W))
  val imm_type = Input(UInt(3.W))
  val imm = Output(UInt(32.W))
})
  
  // 使用无符号常量初始化 state 寄存器
  dontTouchBundleRecursive(io)
  val Imm_default = 0.U(32.W)
  val Imm_type3 = 4.U(32.W)
  val Imm_type1 = Cat(Fill(20, io.instruction(31,31)), io.instruction(31,20)) // 当 instruction_type 为 0000010011 时的特殊值
  val Imm_type2  = Cat(io.instruction(31,12), Fill(12, "b0".U))
  val Imm_type4 = Cat(Fill(20, io.instruction(31,31)), io.instruction(31,25), io.instruction(11,7)) // 当 instruction_type 为 0000010011 时的特殊值
  val Imm_type5 = Cat(Fill(27, "b0".U), io.instruction(24,20)) 
  val Imm_type6 = Cat(Fill(20, "b0".U), io.instruction(31,20)) 
  // 定义选择信号
  val is_type1  = io.imm_type === "b001".U
  val is_type2  = io.imm_type === "b010".U
  val is_type3  = io.imm_type === "b011".U
  val is_type4  = io.imm_type === "b100".U
  val is_type5  = io.imm_type === "b101".U
  val is_type6  = io.imm_type === "b110".U

  // 使用 Mux1H 选择输出
  io.imm := MuxCase(Imm_default, Seq(
    is_type1 -> Imm_type1,
    is_type2 ->  Imm_type2,
    is_type3 ->  Imm_type3,
    is_type4 ->  Imm_type4,
    is_type5 ->  Imm_type5,
    is_type6 ->  Imm_type6
  ))
}

