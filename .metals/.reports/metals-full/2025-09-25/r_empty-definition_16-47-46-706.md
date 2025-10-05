error id: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/top.scala:`<none>`.
file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/top.scala
empty definition using pc, found symbol in pc: `<none>`.
empty definition using semanticdb
empty definition using fallback
non-local guesses:
	 -chisel3/c_arbiter/io/axi_b_valid.
	 -chisel3/c_arbiter/io/axi_b_valid#
	 -chisel3/c_arbiter/io/axi_b_valid().
	 -chisel3/util/c_arbiter/io/axi_b_valid.
	 -chisel3/util/c_arbiter/io/axi_b_valid#
	 -chisel3/util/c_arbiter/io/axi_b_valid().
	 -c_arbiter/io/axi_b_valid.
	 -c_arbiter/io/axi_b_valid#
	 -c_arbiter/io/axi_b_valid().
	 -scala/Predef.c_arbiter.io.axi_b_valid.
	 -scala/Predef.c_arbiter.io.axi_b_valid#
	 -scala/Predef.c_arbiter.io.axi_b_valid().
offset: 1277
uri: file://<WORKSPACE>/chisel/b_npc_2/src/main/scala/top.scala
text:
```scala
import chisel3._
import chisel3.util._

class top extends Module {
  val io = IO(new Bundle {
    // val pc_next = Output(UInt(32.W)) // 输出内存数据
    val is_unknown_instruction = Output(UInt(1.W))
    val carry = Output(UInt(1.W))
    val isoverflow = Output(UInt(1.W))
  })

  // 实例化 IFU 和 SRAM 模块
  // val a_addr_gen  = Module(new addr_gen())
  val b_ifu  = Module(new IFU())
  val c_arbiter = Module(new arbiter())
  val d_idu = Module(new IDU())
  val e_imm = Module(new imm())
  val f_gpr = Module(new gpr())
  val g_mem = Module(new mem())
  val h_data_control = Module(new data_control())
  val i_alu = Module(new alu())
  val j_pc_next = Module(new pc_next())

  b_ifu.io.ar.ready := c_arbiter.io.ifu_ready

  c_arbiter.io.ifu_valid := b_ifu.io.ar.valid
  c_arbiter.io.pc := b_ifu.io.ar.bits.addr
  c_arbiter.io.rs1_data := f_gpr.io.rdata_rs1
  c_arbiter.io.rs2_data := f_gpr.io.rdata_rs2
  c_arbiter.io.imm := e_imm.io.imm
  c_arbiter.io.r_mask := d_idu.io.r_mask
  c_arbiter.io.w_mask := d_idu.io.w_mask
  c_arbiter.io.axi_ar_ready := g_mem.io.ar.ready
  c_arbiter.io.axi_aw_ready := g_mem.io.aw.ready
  c_arbiter.io.axi_w_ready := g_mem.io.w.ready
  c_arbiter.io.axi_r_valid := g_mem.io.r.valid
  c_arbiter.io.axi_r_data := g_mem.io.mem_data
  c_arbiter.io.axi_b_valid@@ := g_mem.io.b.valid
  c_arbiter.io.r_valid_lsu := d_idu.io.r_valid
  c_arbiter.io.gpr_r_ready := f_gpr.io.mem_Req.ready
  c_arbiter.io.gpr_b_ready := f_gpr.io.b.ready
  c_arbiter.io.delay_cnt := g_mem.io.cnt

  d_idu.io.instruction := c_arbiter.io.inst

  g_mem.io.ar.valid := c_arbiter.io.axi_ar_valid
  g_mem.io.aw.valid := c_arbiter.io.axi_aw_valid
  g_mem.io.w.valid := c_arbiter.io.axi_w_valid
  g_mem.io.waddr := c_arbiter.io.axi_aw_addr
  g_mem.io.raddr := c_arbiter.io.axi_ar_addr
  g_mem.io.wdata := c_arbiter.io.axi_w_data
  g_mem.io.r_mask := c_arbiter.io.axi_ar_strb
  g_mem.io.w_mask := c_arbiter.io.axi_w_strb
  g_mem.io.r_valid := c_arbiter.io.is_r
  g_mem.io.r.ready := c_arbiter.io.axi_r_ready
  g_mem.io.b.ready := c_arbiter.io.axi_b_ready

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

  io.is_unknown_instruction := j_pc_next.io.is_unknown_instruction
  io.carry := i_alu.io.carry
  io.isoverflow := i_alu.io.overflow
}

```


#### Short summary: 

empty definition using pc, found symbol in pc: `<none>`.