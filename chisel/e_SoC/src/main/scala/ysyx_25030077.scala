import chisel3._
import chisel3.util._

class ysyx_25030077 extends Module {
  val io = IO(new Bundle {
    // val pc_next = Output(UInt(32.W)) // 输出内存数据
    val interrupt = Input(Bool()) // 外部中断信号
    val master_awready = Input(Bool())
    val master_awvalid = Output(Bool())
    val master_awaddr = Output(UInt(32.W))
    val master_awid = Output(UInt(4.W))
    val master_awlen = Output(UInt(8.W))
    val master_awsize = Output(UInt(3.W))
    val master_awburst = Output(UInt(2.W))
    val master_wready = Input(Bool())
    val master_wvalid = Output(Bool())
    val master_wdata = Output(UInt(32.W))
    val master_wstrb = Output(UInt(4.W))
    val master_wlast = Output(Bool())
    val master_bready = Output(Bool())
    val master_bvalid = Input(Bool())
    val master_bid = Input(UInt(4.W))
    val master_bresp = Input(UInt(2.W))
    val master_arready = Input(Bool())
    val master_arvalid = Output(Bool())
    val master_araddr = Output(UInt(32.W))
    val master_arid = Output(UInt(4.W))
    val master_arlen = Output(UInt(8.W))
    val master_arsize = Output(UInt(3.W))
    val master_arburst = Output(UInt(2.W))
    val master_rready = Output(Bool())
    val master_rvalid = Input(Bool())
    val master_rdata = Input(UInt(32.W))
    val master_rid = Input(UInt(4.W))
    val master_rlast = Input(Bool())
    val master_rresp = Input(UInt(2.W))

    val master_arlock = Output(Bool())
    val master_arcache = Output(UInt(4.W))
    val master_arprot = Output(UInt(3.W))
    val master_arqos = Output(UInt(4.W))

    val master_awlock = Output(Bool())
    val master_awcache = Output(UInt(4.W))
    val master_awprot = Output(UInt(3.W))
    val master_awqos = Output(UInt(4.W))

    val slave_arlock = Input(Bool())
    val slave_arcache = Input(UInt(4.W))
    val slave_arprot = Input(UInt(3.W))
    val slave_arqos = Input(UInt(4.W))

    val slave_awlock = Input(Bool())
    val slave_awcache = Input(UInt(4.W))
    val slave_awprot = Input(UInt(3.W))
    val slave_awqos = Input(UInt(4.W))
    
    val slave_awready = Output(Bool())
    val slave_awvalid = Input(Bool())
    val slave_awaddr = Input(UInt(32.W))
    val slave_awid = Input(UInt(4.W))
    val slave_awlen = Input(UInt(8.W))
    val slave_awsize = Input(UInt(3.W))
    val slave_awburst = Input(UInt(2.W))
    val slave_wready = Output(Bool())
    val slave_wvalid = Input(Bool())
    val slave_wdata = Input(UInt(32.W))
    val slave_wstrb = Input(UInt(4.W))
    val slave_wlast = Input(Bool())
    val slave_bready = Input(Bool())
    val slave_bvalid = Output(Bool())
    val slave_bid = Output(UInt(4.W))
    val slave_bresp = Output(UInt(2.W))
    val slave_arready = Output(Bool())
    val slave_arvalid = Input(Bool())
    val slave_araddr = Input(UInt(32.W))
    val slave_arid = Input(UInt(4.W))
    val slave_arlen = Input(UInt(8.W))
    val slave_arsize = Input(UInt(3.W))
    val slave_arburst = Input(UInt(2.W))
    val slave_rready = Input(Bool())
    val slave_rvalid = Output(Bool())
    val slave_rdata = Output(UInt(32.W))
    val slave_rid = Output(UInt(4.W))
    val slave_rlast = Output(Bool())
    val slave_rresp = Output(UInt(2.W))
  })
  io.master_arlock := false.B
  io.master_arcache := 0.U
  io.master_arprot := 0.U
  io.master_arqos := 0.U
  io.master_awlock := false.B
  io.master_awcache := 0.U
  io.master_awprot := 0.U
  io.master_awqos := 0.U
  io.slave_awready := false.B
  io.slave_wready := false.B
  io.slave_bvalid := false.B
  io.slave_bid := 0.U
  io.slave_bresp := 0.U
  io.slave_arready := false.B
  io.slave_rvalid := false.B
  io.slave_rdata := 0.U
  io.slave_rid := 0.U
  io.slave_rlast := false.B
  io.slave_rresp := 0.U
  // 实例化 IFU 和 SRAM 模块
  // val a_addr_gen  = Module(new addr_gen())
  val b_ifu  = Module(new ysyx_25030077_IFU())
  val c_arbiter = Module(new ysyx_25030077_arbiter())
  val d_idu = Module(new ysyx_25030077_IDU())
  val e_imm = Module(new ysyx_25030077_imm())
  val f_gpr = Module(new ysyx_25030077_gpr())
  val h_data_control = Module(new ysyx_25030077_data_control())
  val i_alu = Module(new ysyx_25030077_alu())
  val j_pc_next = Module(new ysyx_25030077_pc_next())

  b_ifu.io.ar.ready := c_arbiter.io.ifu_ready

  c_arbiter.io.ifu_valid := b_ifu.io.ar.valid
  c_arbiter.io.pc := b_ifu.io.ar.bits.addr
  c_arbiter.io.rs1_data := f_gpr.io.rdata_rs1
  c_arbiter.io.rs2_data := f_gpr.io.rdata_rs2
  c_arbiter.io.imm := e_imm.io.imm
  c_arbiter.io.r_mask := d_idu.io.r_mask
  c_arbiter.io.w_mask := d_idu.io.w_mask
  c_arbiter.io.axi_ar_ready := io.master_arready
  c_arbiter.io.axi_aw_ready := io.master_awready
  c_arbiter.io.axi_w_ready := io.master_wready
  c_arbiter.io.axi_r_valid := io.master_rvalid
  c_arbiter.io.axi_r_data := io.master_rdata
  c_arbiter.io.axi_r_resp := io.master_rresp
  c_arbiter.io.axi_r_id := io.master_rid
  c_arbiter.io.axi_r_last := io.master_rlast
  c_arbiter.io.axi_b_valid := io.master_bvalid
  c_arbiter.io.axi_b_resp := io.master_bresp
  c_arbiter.io.axi_b_id := io.master_bid
  c_arbiter.io.r_valid_lsu := d_idu.io.r_valid
  c_arbiter.io.gpr_r_ready := f_gpr.io.mem_Req.ready
  c_arbiter.io.gpr_b_ready := f_gpr.io.b.ready

  d_idu.io.instruction := c_arbiter.io.inst

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

  io.master_awvalid := c_arbiter.io.axi_aw_valid
  io.master_awaddr := c_arbiter.io.axi_aw_addr
  io.master_awid := c_arbiter.io.axi_aw_id
  io.master_awlen := c_arbiter.io.axi_aw_len
  io.master_awsize := c_arbiter.io.axi_aw_size
  io.master_awburst := c_arbiter.io.axi_aw_burst
  io.master_wvalid := c_arbiter.io.axi_w_valid
  io.master_wdata := c_arbiter.io.axi_w_data
  io.master_wstrb := c_arbiter.io.axi_w_strb
  io.master_wlast := c_arbiter.io.axi_w_last
  io.master_bready := c_arbiter.io.axi_b_ready
  io.master_arvalid := c_arbiter.io.axi_ar_valid
  io.master_araddr := c_arbiter.io.axi_ar_addr
  io.master_arid := c_arbiter.io.axi_ar_id
  io.master_arlen := c_arbiter.io.axi_ar_len
  io.master_arsize := c_arbiter.io.axi_ar_size
  io.master_arburst := c_arbiter.io.axi_ar_burst
  io.master_rready := c_arbiter.io.axi_r_ready
}
