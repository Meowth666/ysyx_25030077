import chisel3._
import chisel3.util._

class ysyx_25030077 extends Module {
  val io = IO(new Bundle {
    // val pc_next = Output(UInt(32.W)) // 输出内存数据
    val is_unknown_instruction = Output(UInt(1.W))
  })

  // 实例化 IFU 和 SRAM 模块
  // val a_addr_gen  = Module(new addr_gen())
  val b_ifu  = Module(new ysyx_25030077_IFU())
  val c_arbiter = Module(new ysyx_25030077_arbiter())
  val d_idu = Module(new ysyx_25030077_IDU())
  val e_imm = Module(new ysyx_25030077_imm())
  val f_gpr = Module(new ysyx_25030077_gpr())
  val g_mem = Module(new ysyx_25030077_mem())
  val h_data_control = Module(new ysyx_25030077_data_control())
  val i_alu = Module(new ysyx_25030077_alu())
  val j_pc_next = Module(new ysyx_25030077_pc_next())
  val l_uart = Module(new ysyx_25030077_UART())
  val m_clint = Module(new ysyx_25030077_clint())
  val n_xbar = Module(new ysyx_25030077_xbar())

  b_ifu.io.ar.ready := c_arbiter.io.ifu_ready

  c_arbiter.io.ifu_valid := b_ifu.io.ar.valid
  c_arbiter.io.pc := b_ifu.io.ar.bits.addr
  c_arbiter.io.rs1_data := f_gpr.io.rdata_rs1
  c_arbiter.io.rs2_data := f_gpr.io.rdata_rs2
  c_arbiter.io.imm := e_imm.io.imm
  c_arbiter.io.r_mask := d_idu.io.r_mask
  c_arbiter.io.w_mask := d_idu.io.w_mask
  c_arbiter.io.axi_ar_ready := n_xbar.io.axi_ar_ready
  c_arbiter.io.axi_aw_ready := n_xbar.io.axi_aw_ready
  c_arbiter.io.axi_w_ready := n_xbar.io.axi_w_ready
  c_arbiter.io.axi_r_valid := n_xbar.io.axi_r_valid
  c_arbiter.io.axi_r_data  := n_xbar.io.axi_r_data
  c_arbiter.io.axi_b_valid := n_xbar.io.axi_b_valid
  c_arbiter.io.r_valid_lsu := d_idu.io.r_valid
  c_arbiter.io.gpr_r_ready := f_gpr.io.mem_Req.ready
  c_arbiter.io.gpr_b_ready := f_gpr.io.b.ready
  c_arbiter.io.axi_b_resp  := n_xbar.io.axi_b_resp
  
  d_idu.io.instruction := c_arbiter.io.inst

  g_mem.io.ar.valid := n_xbar.io.axi_ar_valid_mem
  g_mem.io.aw.valid := n_xbar.io.axi_aw_valid_mem
  g_mem.io.w.valid := n_xbar.io.axi_w_valid_mem
  g_mem.io.waddr := n_xbar.io.axi_aw_addr_mem
  g_mem.io.raddr := n_xbar.io.axi_ar_addr_mem
  g_mem.io.wdata := n_xbar.io.axi_w_data_mem
  g_mem.io.r_mask := n_xbar.io.axi_ar_strb_mem
  g_mem.io.w_mask := n_xbar.io.axi_w_strb_mem
  g_mem.io.r.ready := n_xbar.io.axi_r_ready_mem
  g_mem.io.b.ready := n_xbar.io.axi_b_ready_mem

  f_gpr.io.ifu_Req <> b_ifu.io.rd_Req

  e_imm.io.instruction := c_arbiter.io.inst
  e_imm.io.imm_type := d_idu.io.imm_type

  f_gpr.io.raddr_rs1 := d_idu.io.rs1
  f_gpr.io.raddr_rs2 := d_idu.io.rs2
  f_gpr.io.pc_next := j_pc_next.io.pc_next
  f_gpr.io.waddr_rd := d_idu.io.rd
  f_gpr.io.wdata_rd := i_alu.io.out
  f_gpr.io.mem_Req.valid := c_arbiter.io.gpr_r_valid
  f_gpr.io.b.valid := c_arbiter.io.gpr_b_valid
  f_gpr.io.gpr_b_resp := c_arbiter.io.gpr_b_resp

  j_pc_next.io.rs1_data := f_gpr.io.rdata_rs1
  j_pc_next.io.rs2_data := f_gpr.io.rdata_rs2
  j_pc_next.io.instruction := c_arbiter.io.inst
  j_pc_next.io.pc_count := b_ifu.io.rd_Req.bits.addr
  j_pc_next.io.pc_next_type := d_idu.io.pc_next_type

  h_data_control.io.rs1_data := f_gpr.io.rdata_rs1
  h_data_control.io.rs2_data := f_gpr.io.rdata_rs2
  h_data_control.io.imm := e_imm.io.imm
  h_data_control.io.mem_data := c_arbiter.io.gpr_data
  h_data_control.io.data_control := d_idu.io.data_control
  h_data_control.io.pc_count := b_ifu.io.rd_Req.bits.addr

  i_alu.io.in_a := h_data_control.io.data_1
  i_alu.io.in_b := h_data_control.io.data_2
  i_alu.io.sw := d_idu.io.ALU_ctrl

  l_uart.io.aw.valid := n_xbar.io.axi_aw_valid_uart
  l_uart.io.w.valid := n_xbar.io.axi_w_valid_uart
  l_uart.io.waddr := n_xbar.io.axi_aw_addr_uart
  l_uart.io.wdata := n_xbar.io.axi_w_data_uart
  l_uart.io.w_mask := n_xbar.io.axi_w_strb_uart

  m_clint.io.ar.valid := n_xbar.io.axi_ar_valid_clint
  m_clint.io.raddr := n_xbar.io.axi_ar_addr_clint
  m_clint.io.r_mask := n_xbar.io.axi_ar_strb_clint
  // m_clint.io.r_valid := c_arbiter.io.is_r
  m_clint.io.r.ready := n_xbar.io.axi_r_ready_clint
  m_clint.io.b.ready := n_xbar.io.axi_b_ready_clint

  n_xbar.io.axi_ar_valid := c_arbiter.io.axi_ar_valid
  n_xbar.io.axi_ar_addr := c_arbiter.io.axi_ar_addr
  n_xbar.io.axi_ar_strb := c_arbiter.io.axi_ar_strb
  n_xbar.io.axi_aw_valid := c_arbiter.io.axi_aw_valid
  n_xbar.io.axi_aw_addr := c_arbiter.io.axi_aw_addr
  n_xbar.io.axi_w_valid := c_arbiter.io.axi_w_valid
  n_xbar.io.axi_w_data := c_arbiter.io.axi_w_data
  n_xbar.io.axi_w_strb := c_arbiter.io.axi_w_strb
  n_xbar.io.axi_r_ready := c_arbiter.io.axi_r_ready
  n_xbar.io.axi_b_ready := c_arbiter.io.axi_b_ready
  n_xbar.io.axi_ar_ready_mem := g_mem.io.ar.ready
  n_xbar.io.axi_ar_ready_clint := m_clint.io.ar.ready
  n_xbar.io.axi_aw_ready_mem := g_mem.io.aw.ready
  n_xbar.io.axi_aw_ready_uart := l_uart.io.aw.ready
  n_xbar.io.axi_w_ready_mem := g_mem.io.w.ready
  n_xbar.io.axi_w_ready_uart := l_uart.io.w.ready
  n_xbar.io.axi_r_valid_mem := g_mem.io.r.valid
  n_xbar.io.axi_r_data_mem := g_mem.io.mem_data
  n_xbar.io.axi_r_valid_clint := m_clint.io.r.valid
  n_xbar.io.axi_r_data_clint := m_clint.io.mem_data
  n_xbar.io.axi_b_valid_mem := g_mem.io.r.valid
  n_xbar.io.axi_b_resp_mem := g_mem.io.mem_data
  n_xbar.io.axi_b_valid_clint := m_clint.io.r.valid
  n_xbar.io.axi_b_resp_clint := m_clint.io.mem_data

  io.is_unknown_instruction := j_pc_next.io.is_unknown_instruction
}
