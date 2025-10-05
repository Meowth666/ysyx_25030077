import chisel3._
import chisel3.util._

class top extends Module {
  val io = IO(new Bundle {
    // val addr_in = Input(UInt(32.W)) // 输入地址
    val imm_type = Output(UInt(3.W))
    val rs1 = Output(UInt(5.W))
    val rs2 = Output(UInt(5.W))
    val rd = Output(UInt(5.W))
    val data_control = Output(UInt(3.W))
    val ALU_ctrl = Output(UInt(4.W))
    val pc_next_type = Output(UInt(4.W))
  })

  // 实例化 IFU 和 SRAM 模块
  val addr_gen  = Module(new addr_gen())
  val ifu  = Module(new IFU())
  val sram = Module(new SRAM())
  val idu = Module(new IDU())

  addr_gen.io.IFUReq <> ifu.io.addr_Req
  // 连接 IFU 和 SRAM
  ifu.io.sramReq <> sram.io.req
  // 顶层输出 IFU 解出的指令
  sram.io.iduReq <> idu.io.inst_req

  io.imm_type := idu.io.imm_type
  io.rs1 := idu.io.rs1
  io.rs2 := idu.io.rs2
  io.rd := idu.io.rd
  io.ALU_ctrl := idu.io.ALU_ctrl
  io.data_control := idu.io.data_control
  io.pc_next_type := idu.io.pc_next_type
}
