import chisel3._
import chisel3.util._

class ysyx_25030077_data_control extends Module{
  val io = IO(new Bundle{
  val rs1_data = Input(UInt(32.W))
  val rs2_data = Input(UInt(32.W))
  val imm = Input(UInt(32.W))
  val mem_data = Input(UInt(32.W))
  val pc_count = Input(UInt(32.W))
  val data_control = Input(UInt(3.W))
  val data_1 = Output(UInt(32.W))
  val data_2 = Output(UInt(32.W))
 })

  val default_data_1 = io.rs1_data
  val default_data_2 = io.imm
  val control1 = io.data_control === "b001".U // 选择信号，表示是否使用 pc_count 作为 data_1 的值
  val control2 = io.data_control === "b010".U // 选择信号，表示是否使用 pc_count 作为 data_1 的值
  val control3 = io.data_control === "b011".U // 选择信号，表示是否使用 pc_count 作为 data_1 的值
  val pc = io.pc_count
  val mem = io.mem_data

  io.data_1 := MuxCase(default_data_1, Seq(
    control1 -> pc,
    control2 -> mem
  ))
  
  io.data_2 := MuxCase(default_data_2, Seq(
    control2 -> 0.U(32.W),
    control3 -> io.rs2_data
  ))
}
