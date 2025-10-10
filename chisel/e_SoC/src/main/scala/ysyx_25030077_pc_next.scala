import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_pc_next extends Module{
  val io = IO(new Bundle{
  val rs1_data = Input(UInt(32.W))
  val rs2_data = Input(UInt(32.W))
  val instruction = Input(UInt(32.W))
  val pc_next_type = Input(UInt(4.W))
  val pc_count = Input(UInt(32.W))
  val pc_next = Output(UInt(32.W))
  val is_unknown_instruction = Output(UInt(1.W))
 })
  dontTouchBundleRecursive(io)
  val default_pc_next = io.pc_count + 4.U(32.W) // 默认值为 pc_count + 4
  val default_is_unknown_instruction = 0.U(1.W) // 默认值为 pc_count + 4

  val is_type1 = io.pc_next_type === "b0001".U // 
  val is_type2 = io.pc_next_type === "b0010".U // 
  val is_type3 = io.pc_next_type === "b0011".U // 
  val is_type4 = io.pc_next_type === "b0100".U // 
  val is_type5 = io.pc_next_type === "b0101".U // 
  val is_type6 = io.pc_next_type === "b0110".U // 
  val is_type7 = io.pc_next_type === "b0111".U // 
  val is_type8 = io.pc_next_type === "b1000".U // 
  val is_type9 = io.pc_next_type === "b1001".U // 
  val is_type10= io.pc_next_type === "b1010".U // 

  val is_eql = io.rs1_data === io.rs2_data
  val is_more_equ = io.rs1_data.asSInt >= io.rs2_data.asSInt
  val is_less = io.rs1_data.asSInt < io.rs2_data.asSInt
  val is_more_equ_u = io.rs1_data >= io.rs2_data
  val is_less_u = io.rs1_data < io.rs2_data


  val beq_result = MuxCase(default_pc_next, Seq(
    is_eql -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  val bge_result = MuxCase(default_pc_next, Seq(
    is_more_equ -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  val blt_result = MuxCase(default_pc_next, Seq(
    is_less -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  val bltu_result = MuxCase(default_pc_next, Seq(
    is_less_u -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  val bgeu_result = MuxCase(default_pc_next, Seq(
    is_more_equ_u -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  val bne_result = MuxCase(default_pc_next, Seq(
    !is_eql -> (io.pc_count + Cat(Fill(19, io.instruction(31,31)), io.instruction(31,31), io.instruction(7,7), io.instruction(30,25), io.instruction(11,8), 0.U(1.W)))
  ))

  io.pc_next := MuxCase(default_pc_next, Seq(
    is_type1 -> (io.pc_count + Cat(Fill(11, io.instruction(31,31)), io.instruction(31,31), io.instruction(19,12), io.instruction(20), io.instruction(30,21), 0.U(1.W))),
    is_type2 -> ((io.rs1_data + Cat(Fill(20, io.instruction(31,31)), io.instruction(31,20))) & (~1.U(32.W))),
    is_type4 -> io.pc_count,
    is_type6 -> beq_result,
    is_type5 -> bne_result,
    is_type7 -> bge_result,
    is_type8 -> bgeu_result,
    is_type9 -> blt_result,
    is_type10 -> bltu_result
  ))

  io.is_unknown_instruction := MuxCase(default_is_unknown_instruction, Seq(
    is_type3 -> (1.U(1.W))
  ))
}
