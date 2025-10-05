// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"io_is_unknown_instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"io_isoverflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"io_is_unknown_instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"io_isoverflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"b_ifu_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"b_ifu_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"b_ifu_io_rd_Req_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"b_ifu_io_rd_Req_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"b_ifu_io_rd_Req_bits_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"b_ifu_io_ar_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"b_ifu_io_ar_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"b_ifu_io_ar_bits_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"c_arbiter_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"c_arbiter_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"c_arbiter_io_ifu_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"c_arbiter_io_delay_cnt_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+8,"c_arbiter_io_delay_cnt_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+6,"c_arbiter_io_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"c_arbiter_io_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"c_arbiter_io_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"c_arbiter_io_r_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"c_arbiter_io_w_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+13,"c_arbiter_io_axi_ar_valid_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"c_arbiter_io_axi_ar_addr_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"c_arbiter_io_axi_ar_strb_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+4,"c_arbiter_io_axi_ar_ready_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"c_arbiter_io_axi_ar_valid_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"c_arbiter_io_axi_ar_addr_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"c_arbiter_io_axi_ar_strb_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+19,"c_arbiter_io_axi_ar_ready_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"c_arbiter_io_axi_aw_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"c_arbiter_io_axi_aw_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"c_arbiter_io_axi_w_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"c_arbiter_io_axi_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+23,"c_arbiter_io_axi_r_valid_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"c_arbiter_io_axi_r_data_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"c_arbiter_io_axi_r_ready_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"c_arbiter_io_axi_r_valid_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"c_arbiter_io_axi_r_data_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"c_arbiter_io_axi_r_ready_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"c_arbiter_io_axi_b_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"c_arbiter_io_gpr_r_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"c_arbiter_io_gpr_b_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"c_arbiter_io_gpr_r_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"c_arbiter_io_gpr_b_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"c_arbiter_io_gpr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"c_arbiter_io_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"c_arbiter_io_ifu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"c_arbiter_io_r_valid_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"c_arbiter_io_is_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"d_idu_io_instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"d_idu_io_imm_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+35,"d_idu_io_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"d_idu_io_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"d_idu_io_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"d_idu_io_data_control",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+39,"d_idu_io_ALU_ctrl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"d_idu_io_pc_next_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+11,"d_idu_io_r_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"d_idu_io_w_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"d_idu_io_r_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"e_imm_io_instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"e_imm_io_imm_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+10,"e_imm_io_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"f_gpr_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"f_gpr_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"f_gpr_io_mem_Req_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"f_gpr_io_mem_Req_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"f_gpr_io_b_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"f_gpr_io_b_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"f_gpr_io_pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"f_gpr_io_waddr_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"f_gpr_io_wdata_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"f_gpr_io_raddr_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+9,"f_gpr_io_rdata_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"f_gpr_io_raddr_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"f_gpr_io_rdata_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"f_gpr_io_ifu_Req_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"f_gpr_io_ifu_Req_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"f_gpr_io_ifu_Req_bits_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"g_mem_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"g_mem_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"g_mem_io_ar_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"g_mem_io_ar_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"g_mem_io_aw_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"g_mem_io_w_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"g_mem_io_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"g_mem_io_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"g_mem_io_r_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"g_mem_io_w_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+33,"g_mem_io_r_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"g_mem_io_mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"g_mem_io_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"g_mem_io_r__ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"g_mem_io_r__valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"g_mem_io_b_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"h_data_control_io_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"h_data_control_io_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"h_data_control_io_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"h_data_control_io_mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"h_data_control_io_pc_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"h_data_control_io_data_control",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+44,"h_data_control_io_data_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"h_data_control_io_data_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"i_alu_io_in_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"i_alu_io_in_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"i_alu_io_sw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+42,"i_alu_io_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+287,"i_alu_io_carry",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"i_alu_io_overflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"j_pc_next_io_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"j_pc_next_io_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"j_pc_next_io_instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"j_pc_next_io_pc_next_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3,"j_pc_next_io_pc_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"j_pc_next_io_pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+286,"j_pc_next_io_is_unknown_instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"m_clint_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"m_clint_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"m_clint_io_ar_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"m_clint_io_ar_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"m_clint_io_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"m_clint_io_r_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+33,"m_clint_io_r_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"m_clint_io_mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"m_clint_io_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"m_clint_io_r__ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"m_clint_io_r__valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"c_arbiter_io_axi_w_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"c_arbiter_io_axi_b_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"g_mem_io_w_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"g_mem_io_aw_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"c_arbiter_io_axi_aw_valid_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"c_arbiter_io_axi_aw_addr_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"c_arbiter_io_axi_w_valid_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"c_arbiter_io_axi_w_data_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"c_arbiter_io_axi_w_strb_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+51,"is_break_out_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"l_uart_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"l_uart_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"l_uart_io_aw_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"l_uart_io_w_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"l_uart_io_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"l_uart_io_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("b_ifu ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"io_rd_Req_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_rd_Req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_rd_Req_bits_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"io_ar_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_ar_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_ar_bits_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"reqQ_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reqQ_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reqQ_io_enq_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"reqQ_io_enq_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"reqQ_io_enq_bits_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"reqQ_io_deq_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"reqQ_io_deq_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"reqQ_io_deq_bits_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("reqQ ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_enq_bits_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_deq_bits_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+52+i*1,"ram_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+289,"ram_addr_io_deq_bits_MPORT_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"ram_addr_io_deq_bits_MPORT_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"ram_addr_io_deq_bits_MPORT_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"ram_addr_MPORT_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+290,"ram_addr_MPORT_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"ram_addr_MPORT_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"ram_addr_MPORT_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"maybe_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("c_arbiter ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_ifu_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"io_delay_cnt_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+8,"io_delay_cnt_clint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+6,"io_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"io_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"io_r_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"io_w_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+13,"io_axi_ar_valid_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"io_axi_ar_addr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"io_axi_ar_strb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+4,"io_axi_ar_ready_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_axi_ar_valid_clint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_axi_ar_addr_clint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"io_axi_ar_strb_clint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+19,"io_axi_ar_ready_clint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_axi_aw_valid_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"io_axi_aw_addr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"io_axi_aw_ready_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_axi_w_valid_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"io_axi_w_data_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"io_axi_w_strb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+4,"io_axi_w_ready_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"io_axi_aw_valid_uart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"io_axi_aw_addr_uart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"io_axi_w_valid_uart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"io_axi_w_data_uart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"io_axi_w_strb_uart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+23,"io_axi_r_valid_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"io_axi_r_data_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"io_axi_r_ready_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"io_axi_r_valid_clint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"io_axi_r_data_clint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"io_axi_r_ready_clint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"io_axi_b_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_axi_b_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"io_gpr_r_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_gpr_b_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_gpr_r_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_gpr_b_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_gpr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"io_ifu_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"io_r_valid_lsu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"io_is_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"state_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,"inst_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"axi_ar_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+58,"axi_r_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"axi_ar_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"axi_r_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"axi_aw_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+62,"axi_aw_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"axi_ar_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"axi_ar_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+65,"axi_w_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"axi_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_idu ");
    tracep->declBus(c+31,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"io_imm_type",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+35,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"io_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"io_data_control",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+39,"io_ALU_ctrl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"io_pc_next_type",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+11,"io_r_mask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"io_w_mask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"io_r_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"is_break_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"addi_Rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+68,"addi_Rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+69,"sltu_Rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+70,"isaddi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"isxori",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"isori",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"isandi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"issrai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"issrli",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"isslli",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"issra",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"issrl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"isbeq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"isbne",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"isadd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"isxor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"isand",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"isor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"issub",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"islui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"isauipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"isjal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"isjalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"issw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"isbge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"isblt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"isbltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"isbgeu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"issb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"issh",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"islbu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"islb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"islw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"islh",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"islhu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"issll",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"isslt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"issltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"issltiu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"isslti",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"iscsrrw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"iscsrrs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"isebreak",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"isecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"ismret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_imm ");
    tracep->declBus(c+31,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"io_imm_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+10,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"Imm_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"Imm_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"Imm_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"Imm_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"Imm_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+116,"is_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"is_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"is_type3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"is_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"is_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"is_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f_gpr ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_mem_Req_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"io_mem_Req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_b_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_b_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"io_pc_next",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"io_waddr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"io_wdata_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"io_raddr_rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+9,"io_rdata_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_raddr_rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"io_rdata_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"io_ifu_Req_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_ifu_Req_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_ifu_Req_bits_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"canAccept_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"canAccept_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"canAccept_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"canAccept_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"canAccept_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"canAccept_prng_io_out_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"canAccept_prng_io_out_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"canAccept_prng_io_out_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"canAccept_prng_io_out_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"canAccept_prng_io_out_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"canAccept_prng_io_out_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"canAccept_prng_io_out_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"canAccept_prng_io_out_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"canAccept_prng_io_out_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"canAccept_prng_io_out_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"canAccept_prng_io_out_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"canAccept_prng_io_out_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"canAccept_prng_io_out_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"regs_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,"regs_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,"regs_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,"regs_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,"regs_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,"regs_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,"regs_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,"regs_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,"regs_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,"regs_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,"regs_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,"regs_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,"regs_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,"regs_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,"regs_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,"regs_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,"regs_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,"regs_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,"regs_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,"regs_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,"regs_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,"regs_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,"regs_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,"regs_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,"regs_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,"regs_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,"regs_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,"regs_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,"regs_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,"regs_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,"regs_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"regs_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,"validReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+169,"canAccept_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+25,"canAccept",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"pc_next_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("canAccept_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"io_out_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"io_out_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"io_out_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"io_out_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"io_out_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"io_out_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"io_out_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"io_out_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"io_out_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"io_out_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"io_out_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"io_out_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"io_out_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+122,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+123,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"state_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"state_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"state_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"state_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"state_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"state_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"state_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+131,"state_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+132,"state_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"state_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"state_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+135,"state_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+136,"state_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_mem ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_ar_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"io_ar_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_aw_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_aw_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_w_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_w_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"io_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"io_r_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"io_w_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+33,"io_r_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"io_mem_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"io_cnt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"io_r__ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"io_r__valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_b_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"io_b_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+170,"io_r_mask_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"io_w_mask_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+172,"valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"canAccept_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"canAccept_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"canAccept_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"canAccept_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"canAccept_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"canAccept_prng_io_out_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"canAccept_prng_io_out_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"canAccept_prng_io_out_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"canAccept_prng_io_out_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"canAccept_prng_io_out_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"canAccept_prng_io_out_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"canAccept_prng_io_out_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"canAccept_prng_io_out_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"canAccept_prng_io_out_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"canAccept_prng_io_out_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"canAccept_prng_io_out_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"canAccept_prng_io_out_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"canAccept_prng_io_out_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"delayCnt_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"delayCnt_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"delayCnt_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"delayCnt_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"delayCnt_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"mem_data_Reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,"validReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"canAccept_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+4,"canAccept",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"read_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"delayCnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+194,"startDelay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("canAccept_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"io_out_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"io_out_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"io_out_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"io_out_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"io_out_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"io_out_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"io_out_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"io_out_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"io_out_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"io_out_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"io_out_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"io_out_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"io_out_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"state_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"state_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"state_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+178,"state_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"state_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+180,"state_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+181,"state_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"state_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"state_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"state_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+185,"state_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+186,"state_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+187,"state_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delayCnt_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+189,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+190,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("h_data_control ");
    tracep->declBus(c+9,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"io_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"io_mem_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"io_pc_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"io_data_control",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+44,"io_data_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"io_data_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+195,"control1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"control2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"control3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_alu ");
    tracep->declBus(c+44,"io_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"io_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+42,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+287,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+198,"csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"oneHot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declQuad(c+200,"add33",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+202,"sub33",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBus(c+204,"and32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"or32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+206,"xor32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+207,"srai32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+208,"srli32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+209,"sll32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->declBit(c+211,"sltiu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"slt_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+213,"out33",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+215,"a31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"b31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"s31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"overflowAddBool",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"overflowSubBool",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("j_pc_next ");
    tracep->declBus(c+9,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"io_pc_next_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3,"io_pc_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"io_pc_next",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+286,"io_is_unknown_instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+220,"ecall_dnpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+221,"default_pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+222,"is_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"is_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"is_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"is_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"is_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"is_type7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"is_type8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"is_type9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_type10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_type11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"is_eql",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"is_more_equ",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"is_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"is_more_equ_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"is_less_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+237,"beq_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+238,"bge_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+239,"blt_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+240,"bltu_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+241,"bgeu_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"bne_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("k_EXIT ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"is_break_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"is_unknown_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l_uart ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"io_aw_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"io_w_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"canAccept_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"canAccept_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"canAccept_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"canAccept_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"canAccept_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"canAccept_prng_io_out_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"canAccept_prng_io_out_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"canAccept_prng_io_out_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"canAccept_prng_io_out_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"canAccept_prng_io_out_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"canAccept_prng_io_out_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"canAccept_prng_io_out_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"canAccept_prng_io_out_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"canAccept_prng_io_out_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"canAccept_prng_io_out_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"canAccept_prng_io_out_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"canAccept_prng_io_out_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"canAccept_prng_io_out_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"canAccept_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+243,"canAccept",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+260,"charToPrint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("canAccept_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"io_out_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"io_out_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"io_out_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"io_out_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"io_out_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"io_out_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"io_out_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"io_out_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"io_out_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"io_out_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"io_out_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"io_out_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"io_out_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+244,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+245,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+246,"state_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+247,"state_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+248,"state_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+249,"state_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+250,"state_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+251,"state_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+252,"state_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+253,"state_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+254,"state_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+255,"state_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+256,"state_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+257,"state_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+258,"state_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_clint ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_ar_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_ar_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"io_r_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+33,"io_r_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"io_mem_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_cnt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"io_r__ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"io_r__valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"canAccept_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"canAccept_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"canAccept_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"canAccept_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"canAccept_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"canAccept_prng_io_out_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"canAccept_prng_io_out_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"canAccept_prng_io_out_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"canAccept_prng_io_out_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"canAccept_prng_io_out_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"canAccept_prng_io_out_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"canAccept_prng_io_out_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"canAccept_prng_io_out_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"canAccept_prng_io_out_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"canAccept_prng_io_out_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"canAccept_prng_io_out_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"canAccept_prng_io_out_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"canAccept_prng_io_out_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"delayCnt_prng_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"delayCnt_prng_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"delayCnt_prng_io_out_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"delayCnt_prng_io_out_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"delayCnt_prng_io_out_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+279,"mem_data_Reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+281,"validReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+282,"canAccept_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+19,"canAccept",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"delayCnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+283,"startDelay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("canAccept_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"io_out_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"io_out_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"io_out_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"io_out_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"io_out_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"io_out_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"io_out_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_out_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"io_out_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"io_out_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"io_out_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"io_out_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"io_out_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+261,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+262,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+263,"state_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+264,"state_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"state_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+266,"state_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+267,"state_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+268,"state_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+269,"state_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+270,"state_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+271,"state_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+272,"state_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+273,"state_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+274,"state_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+275,"state_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delayCnt_prng ");
    tracep->declBit(c+284,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"io_out_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"io_out_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"io_out_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"state_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+277,"state_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+278,"state_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)))));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__f_gpr__DOT__validReg));
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__f_gpr__DOT__pc_next_reg),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
                            [0U]),32);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__g_mem__DOT__delayCnt),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__m_clint__DOT__delayCnt),3);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__c_arbiter_io_rs1_data),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__c_arbiter_io_imm),32);
    bufp->fullCData(oldp+11,(((0x103U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                               ? 1U : ((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                        ? 3U : ((0x283U 
                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                 ? 4U
                                                 : 
                                                ((0x203U 
                                                  == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 5U
                                                   : 0U)))))),3);
    bufp->fullCData(oldp+12,(((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                               ? 1U : ((0x23U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                        ? 3U : ((0xa3U 
                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                 ? 2U
                                                 : 0U)))),3);
    bufp->fullBit(oldp+13,(((~ (IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)) 
                            & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid))));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem),32);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem),3);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2) 
                            & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid))));
    bufp->fullIData(oldp+17,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                               ? vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr
                               : 0x80000000U)),32);
    bufp->fullCData(oldp+18,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                               ? ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                   ? 6U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                            ? ((0x103U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 1U
                                                : (
                                                   (0x83U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 3U
                                                    : 
                                                   ((0x283U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 4U
                                                     : 
                                                    ((0x203U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 5U
                                                       : 0U)))))
                                            : 0U)) : 0U)),3);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0));
    bufp->fullBit(oldp+20,(((0xa00003f8U != vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                            & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid))));
    bufp->fullIData(oldp+21,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? 0x80000000U : vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)),32);
    bufp->fullCData(oldp+22,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                        ? ((0x123U 
                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                            ? 1U : 
                                           ((0x23U 
                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                             ? 3U : 
                                            ((0xa3U 
                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                              ? 2U : 0U)))
                                        : 0U))),3);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem));
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__g_mem__DOT__mem_data_Reg),32);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->top__DOT__m_clint__DOT__validReg) 
                            & (0U == (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt)))));
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint),32);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid));
    bufp->fullBit(oldp+29,(((2U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
                            & (IData)(vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem))));
    bufp->fullIData(oldp+30,(((2U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                               ? ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                   ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                                   : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg)
                               : 0U)),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__c_arbiter__DOT__inst_reg),32);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__c_arbiter_io_r_valid_lsu));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__c_arbiter_io_is_r));
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__d_idu_io_imm_type),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__d_idu_io_rs1),5);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__d_idu_io_rs2),5);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__d_idu_io_rd),5);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__d_idu_io_data_control),3);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__d_idu_io_ALU_ctrl),4);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__d_idu_io_pc_next_type),4);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__f_gpr_io_pc_next),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__f_gpr_io_wdata_rd),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__f_gpr_io_rdata_rs2),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__h_data_control_io_data_1),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__h_data_control_io_data_2),32);
    bufp->fullIData(oldp+46,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                        ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                                        : 0U))),32);
    bufp->fullBit(oldp+47,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                            & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid))));
    bufp->fullIData(oldp+48,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? 0xa00003f8U : 0U)),32);
    bufp->fullIData(oldp+49,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                   ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                                   : 0U) : 0U)),32);
    bufp->fullCData(oldp+50,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                               ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                   ? ((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                       ? 1U : ((0x23U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 3U
                                                : (
                                                   (0xa3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 0U)))
                                   : 0U) : 0U)),3);
    bufp->fullBit(oldp+51,((0x100073U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[0]),32);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
                            & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0))));
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__c_arbiter__DOT__state_reg),2);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr),32);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__c_arbiter__DOT__delay_cnt),3);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                             ? (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0)
                             : (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0))));
    bufp->fullIData(oldp+60,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                               ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                               : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg)),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr),32);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid));
    bufp->fullCData(oldp+64,(((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                               ? 6U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                        ? ((0x103U 
                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                            ? 1U : 
                                           ((0x83U 
                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                             ? 3U : 
                                            ((0x283U 
                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                              ? 4U : 
                                             ((0x203U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 2U
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 5U
                                                   : 0U)))))
                                        : 0U))),3);
    bufp->fullIData(oldp+65,(((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                               ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                               : 0U)),32);
    bufp->fullCData(oldp+66,(((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                               ? ((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                   ? 1U : ((0x23U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                            ? 3U : 
                                           ((0xa3U 
                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                             ? 2U : 0U)))
                               : 0U)),3);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                       >> 7U))),5);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+70,((0x13U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+71,((0x213U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+72,((0x313U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+73,((0x393U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+74,((0x4293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+75,((0x293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+76,((0x93U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+77,((0x42b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+78,((0x2b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
    bufp->fullBit(oldp+79,((0x63U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+80,((0xe3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+81,((0x33U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+82,((0x233U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+83,((0x3b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+84,((0x333U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+85,((0x8033U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+86,((0x37U == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+87,((0x17U == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+88,((0x6fU == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
    bufp->fullBit(oldp+89,((0x67U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+90,((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+91,((0x2e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+92,((0x263U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+93,((0x363U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+94,((0x3e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+95,((0x23U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+96,((0xa3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+97,((0x203U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+98,((3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+99,((0x103U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+100,((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+101,((0x283U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+102,((0xb3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+103,((0x133U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+104,((0x1b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
    bufp->fullBit(oldp+105,((0x193U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+106,((0x113U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+107,((0xf3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+108,((0x173U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+109,((0x73U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullBit(oldp+110,((0x30200073U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__e_imm__DOT__Imm_type1),32);
    bufp->fullIData(oldp+112,((0xfffff000U & vlSelf->top__DOT__c_arbiter__DOT__inst_reg)),32);
    bufp->fullIData(oldp+113,(((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0xfe0U & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                            >> 7U))))),32);
    bufp->fullIData(oldp+114,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+115,((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                               >> 0x14U)),32);
    bufp->fullBit(oldp+116,((1U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+117,((2U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+118,((3U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+119,((4U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+120,((5U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+121,((6U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_8));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_9));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_11));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_14));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_15));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__f_gpr__DOT__regs_0),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__f_gpr__DOT__regs_1),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__f_gpr__DOT__regs_2),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__f_gpr__DOT__regs_3),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__f_gpr__DOT__regs_4),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__f_gpr__DOT__regs_5),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__f_gpr__DOT__regs_6),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__f_gpr__DOT__regs_7),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__f_gpr__DOT__regs_8),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__f_gpr__DOT__regs_9),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__f_gpr__DOT__regs_10),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__f_gpr__DOT__regs_11),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__f_gpr__DOT__regs_12),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__f_gpr__DOT__regs_13),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__f_gpr__DOT__regs_14),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__f_gpr__DOT__regs_15),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__f_gpr__DOT__regs_16),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__f_gpr__DOT__regs_17),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__f_gpr__DOT__regs_18),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__f_gpr__DOT__regs_19),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__f_gpr__DOT__regs_20),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__f_gpr__DOT__regs_21),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__f_gpr__DOT__regs_22),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__f_gpr__DOT__regs_23),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__f_gpr__DOT__regs_24),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__f_gpr__DOT__regs_25),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__f_gpr__DOT__regs_26),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__f_gpr__DOT__regs_27),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__f_gpr__DOT__regs_28),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__f_gpr__DOT__regs_29),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__f_gpr__DOT__regs_30),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__f_gpr__DOT__regs_31),32);
    bufp->fullCData(oldp+169,((((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7) 
                                << 7U) | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))))))))),8);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem),32);
    bufp->fullIData(oldp+171,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                         ? ((0x123U 
                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                             ? 1U : 
                                            ((0x23U 
                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                              ? 3U : 
                                             ((0xa3U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 2U
                                               : 0U)))
                                         : 0U))),32);
    bufp->fullIData(oldp+172,(((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0) 
                               & ((0xa00003f8U != vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                                  & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid)))),32);
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_1));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_2));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_3));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_4));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_8));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_9));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_10));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_11));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_12));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_13));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_14));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_15));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_2));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__g_mem__DOT__validReg));
    bufp->fullCData(oldp+192,((((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7) 
                                << 7U) | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0))))))))),8);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__g_mem__DOT__read_data),32);
    bufp->fullBit(oldp+194,(((IData)(vlSelf->top__DOT__g_mem__DOT___startDelay_T) 
                             & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))));
    bufp->fullBit(oldp+195,((1U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
    bufp->fullBit(oldp+196,((2U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
    bufp->fullBit(oldp+197,((3U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__i_alu__DOT__csr_data),32);
    bufp->fullSData(oldp+199,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))),16);
    bufp->fullQData(oldp+200,((0x1ffffffffULL & ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                                 + (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2))))),33);
    bufp->fullQData(oldp+202,((0x1ffffffffULL & ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                                 - (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2))))),33);
    bufp->fullIData(oldp+204,((vlSelf->top__DOT__h_data_control_io_data_1 
                               & vlSelf->top__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+205,((vlSelf->top__DOT__h_data_control_io_data_1 
                               | vlSelf->top__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+206,((vlSelf->top__DOT__h_data_control_io_data_1 
                               ^ vlSelf->top__DOT__h_data_control_io_data_2)),32);
    bufp->fullIData(oldp+207,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__h_data_control_io_data_1, (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))),32);
    bufp->fullIData(oldp+208,((vlSelf->top__DOT__h_data_control_io_data_1 
                               >> (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))),32);
    bufp->fullQData(oldp+209,((0x7fffffffffffffffULL 
                               & ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                  << (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0)))),63);
    bufp->fullBit(oldp+211,((vlSelf->top__DOT__h_data_control_io_data_1 
                             < vlSelf->top__DOT__h_data_control_io_data_2)));
    bufp->fullBit(oldp+212,(VL_LTS_III(32, vlSelf->top__DOT__h_data_control_io_data_1, vlSelf->top__DOT__h_data_control_io_data_2)));
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__i_alu__DOT__out33),64);
    bufp->fullBit(oldp+215,((vlSelf->top__DOT__h_data_control_io_data_1 
                             >> 0x1fU)));
    bufp->fullBit(oldp+216,(((2U != (IData)(vlSelf->top__DOT__d_idu_io_data_control)) 
                             & (vlSelf->top__DOT__h_data_control__DOT___io_data_2_T 
                                >> 0x1fU))));
    bufp->fullBit(oldp+217,((1U & (IData)((vlSelf->top__DOT__i_alu__DOT__out33 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+218,(((~ (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1)) 
                             & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T))));
    bufp->fullBit(oldp+219,(((IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T) 
                             & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1))));
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__j_pc_next__DOT__ecall_dnpc),32);
    bufp->fullIData(oldp+221,(((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)),32);
    bufp->fullBit(oldp+222,((1U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+223,((2U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+224,((4U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+225,((5U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+226,((6U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+227,((7U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+228,((8U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+229,((9U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+230,((0xaU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
    bufp->fullBit(oldp+231,(((0xbU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)) 
                             | (0xcU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)))));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__j_pc_next__DOT__is_eql));
    bufp->fullBit(oldp+233,(VL_GTES_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
    bufp->fullBit(oldp+234,(VL_LTS_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
    bufp->fullBit(oldp+235,((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                             >= vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
    bufp->fullBit(oldp+236,((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                             < vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
    bufp->fullIData(oldp+237,(((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+238,((VL_GTES_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+239,((VL_LTS_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+240,(((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                < vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+241,(((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                >= vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
    bufp->fullIData(oldp+242,(((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                ? ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)
                                : vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9)),32);
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_1));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_2));
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_3));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_4));
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7));
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_8));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_9));
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_10));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_11));
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_12));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_13));
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_14));
    bufp->fullBit(oldp+258,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_15));
    bufp->fullCData(oldp+259,((((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7) 
                                << 7U) | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0))))))))),8);
    bufp->fullCData(oldp+260,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                    ? (0xffU & vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                    : 0U) : 0U)),8);
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_1));
    bufp->fullBit(oldp+262,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_2));
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_3));
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_4));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6));
    bufp->fullBit(oldp+267,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7));
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_8));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_9));
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_10));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_11));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_12));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_13));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_14));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_15));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1));
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_2));
    bufp->fullQData(oldp+279,(vlSelf->top__DOT__m_clint__DOT__mem_data_Reg),64);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__m_clint__DOT__validReg));
    bufp->fullCData(oldp+282,((((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7) 
                                << 7U) | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0))))))))),8);
    bufp->fullBit(oldp+283,(((IData)(vlSelf->top__DOT__m_clint__DOT___startDelay_T) 
                             & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))));
    bufp->fullBit(oldp+284,(vlSelf->clock));
    bufp->fullBit(oldp+285,(vlSelf->reset));
    bufp->fullBit(oldp+286,(vlSelf->io_is_unknown_instruction));
    bufp->fullBit(oldp+287,(vlSelf->io_carry));
    bufp->fullBit(oldp+288,(vlSelf->io_isoverflow));
    bufp->fullBit(oldp+289,(1U));
    bufp->fullBit(oldp+290,(0U));
}
