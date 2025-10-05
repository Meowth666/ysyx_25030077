// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)))));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__f_gpr__DOT__validReg));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__f_gpr__DOT__pc_next_reg),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
                               [0U]),32);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__g_mem__DOT__delayCnt),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__m_clint__DOT__delayCnt),3);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__c_arbiter_io_rs1_data),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__c_arbiter_io_imm),32);
        bufp->chgCData(oldp+10,(((0x103U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                  ? 1U : ((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                           ? 3U : (
                                                   (0x283U 
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
        bufp->chgCData(oldp+11,(((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                  ? 1U : ((0x23U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                           ? 3U : (
                                                   (0xa3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 0U)))),3);
        bufp->chgBit(oldp+12,(((~ (IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)) 
                               & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid))));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem),32);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem),3);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2) 
                               & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid))));
        bufp->chgIData(oldp+16,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                  ? vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr
                                  : 0x80000000U)),32);
        bufp->chgCData(oldp+17,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                  ? ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                      ? 6U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                               ? ((0x103U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 1U
                                                   : 
                                                  ((0x83U 
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
                                               : 0U))
                                  : 0U)),3);
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0));
        bufp->chgBit(oldp+19,(((0xa00003f8U != vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                               & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid))));
        bufp->chgIData(oldp+20,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? 0x80000000U : vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)),32);
        bufp->chgCData(oldp+21,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                           ? ((0x123U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 1U
                                               : ((0x23U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 3U
                                                   : 
                                                  ((0xa3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 0U)))
                                           : 0U))),3);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__g_mem__DOT__mem_data_Reg),32);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0));
        bufp->chgBit(oldp+25,(((IData)(vlSelf->top__DOT__m_clint__DOT__validReg) 
                               & (0U == (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt)))));
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint),32);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid));
        bufp->chgBit(oldp+28,(((2U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
                               & (IData)(vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem))));
        bufp->chgIData(oldp+29,(((2U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                  ? ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                      ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                                      : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg)
                                  : 0U)),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__c_arbiter__DOT__inst_reg),32);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__c_arbiter_io_r_valid_lsu));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__c_arbiter_io_is_r));
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__d_idu_io_imm_type),3);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__d_idu_io_rs1),5);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__d_idu_io_rs2),5);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__d_idu_io_rd),5);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__d_idu_io_data_control),3);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__d_idu_io_ALU_ctrl),4);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__d_idu_io_pc_next_type),4);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__f_gpr_io_pc_next),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__f_gpr_io_wdata_rd),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__f_gpr_io_rdata_rs2),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__h_data_control_io_data_1),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__h_data_control_io_data_2),32);
        bufp->chgIData(oldp+45,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                           ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                                           : 0U))),32);
        bufp->chgBit(oldp+46,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                               & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid))));
        bufp->chgIData(oldp+47,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? 0xa00003f8U : 0U)),32);
        bufp->chgIData(oldp+48,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                      ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                                      : 0U) : 0U)),32);
        bufp->chgCData(oldp+49,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                  ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                      ? ((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                          ? 1U : ((0x23U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 3U
                                                   : 
                                                  ((0xa3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 0U)))
                                      : 0U) : 0U)),3);
        bufp->chgBit(oldp+50,((0x100073U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[0]),32);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en));
        bufp->chgBit(oldp+53,(((IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
                               & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0))));
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__c_arbiter__DOT__state_reg),2);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr),32);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__c_arbiter__DOT__delay_cnt),3);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                ? (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0)
                                : (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0))));
        bufp->chgIData(oldp+59,(((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                  ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                                  : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg)),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr),32);
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid));
        bufp->chgCData(oldp+63,(((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                  ? 6U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                           ? ((0x103U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 1U
                                               : ((0x83U 
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
                                           : 0U))),3);
        bufp->chgIData(oldp+64,(((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                  ? vlSelf->top__DOT__f_gpr_io_rdata_rs2
                                  : 0U)),32);
        bufp->chgCData(oldp+65,(((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                  ? ((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                      ? 1U : ((0x23U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 3U
                                               : ((0xa3U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 2U
                                                   : 0U)))
                                  : 0U)),3);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                          >> 7U))),5);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+69,((0x13U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+70,((0x213U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+71,((0x313U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+72,((0x393U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+73,((0x4293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+74,((0x293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+75,((0x93U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+76,((0x42b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+77,((0x2b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+78,((0x63U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+79,((0xe3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+80,((0x33U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+81,((0x233U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+82,((0x3b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+83,((0x333U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+84,((0x8033U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+85,((0x37U == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+86,((0x17U == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+87,((0x6fU == (0x7fU & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+88,((0x67U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+89,((0x123U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+90,((0x2e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+91,((0x263U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+92,((0x363U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+93,((0x3e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+94,((0x23U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+95,((0xa3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+96,((0x203U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+97,((3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+98,((0x103U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+99,((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+100,((0x283U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+101,((0xb3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+102,((0x133U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+103,((0x1b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+104,((0x193U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+105,((0x113U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+106,((0xf3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+107,((0x173U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+108,((0x73U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgBit(oldp+109,((0x30200073U == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__e_imm__DOT__Imm_type1),32);
        bufp->chgIData(oldp+111,((0xfffff000U & vlSelf->top__DOT__c_arbiter__DOT__inst_reg)),32);
        bufp->chgIData(oldp+112,(((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                 >> 7U))))),32);
        bufp->chgIData(oldp+113,((0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                           >> 0x14U))),32);
        bufp->chgIData(oldp+114,((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                  >> 0x14U)),32);
        bufp->chgBit(oldp+115,((1U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+116,((2U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+117,((3U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+118,((4U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+119,((5U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+120,((6U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+121,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1));
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_8));
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_9));
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_11));
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_14));
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_15));
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__f_gpr__DOT__regs_0),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__f_gpr__DOT__regs_1),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__f_gpr__DOT__regs_2),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__f_gpr__DOT__regs_3),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__f_gpr__DOT__regs_4),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__f_gpr__DOT__regs_5),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__f_gpr__DOT__regs_6),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__f_gpr__DOT__regs_7),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__f_gpr__DOT__regs_8),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__f_gpr__DOT__regs_9),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__f_gpr__DOT__regs_10),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__f_gpr__DOT__regs_11),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__f_gpr__DOT__regs_12),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__f_gpr__DOT__regs_13),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__f_gpr__DOT__regs_14),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__f_gpr__DOT__regs_15),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__f_gpr__DOT__regs_16),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__f_gpr__DOT__regs_17),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__f_gpr__DOT__regs_18),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__f_gpr__DOT__regs_19),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__f_gpr__DOT__regs_20),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__f_gpr__DOT__regs_21),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__f_gpr__DOT__regs_22),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__f_gpr__DOT__regs_23),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__f_gpr__DOT__regs_24),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__f_gpr__DOT__regs_25),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__f_gpr__DOT__regs_26),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__f_gpr__DOT__regs_27),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__f_gpr__DOT__regs_28),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__f_gpr__DOT__regs_29),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__f_gpr__DOT__regs_30),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__f_gpr__DOT__regs_31),32);
        bufp->chgCData(oldp+168,((((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7) 
                                   << 7U) | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5) 
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
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem),32);
        bufp->chgIData(oldp+170,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                   ? 0U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                            ? ((0x123U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 3U
                                                    : 
                                                   ((0xa3U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 2U
                                                     : 0U)))
                                            : 0U))),32);
        bufp->chgIData(oldp+171,(((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0) 
                                  & ((0xa00003f8U != vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                                     & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid)))),32);
        bufp->chgBit(oldp+172,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_1));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_2));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_3));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_4));
        bufp->chgBit(oldp+176,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5));
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6));
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_8));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_9));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_10));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_11));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_12));
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_13));
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_14));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_15));
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_2));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__g_mem__DOT__validReg));
        bufp->chgCData(oldp+191,((((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7) 
                                   << 7U) | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5) 
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
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__g_mem__DOT__read_data),32);
        bufp->chgBit(oldp+193,(((IData)(vlSelf->top__DOT__g_mem__DOT___startDelay_T) 
                                & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))));
        bufp->chgBit(oldp+194,((1U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
        bufp->chgBit(oldp+195,((2U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
        bufp->chgBit(oldp+196,((3U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))));
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__i_alu__DOT__csr_data),32);
        bufp->chgSData(oldp+198,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))),16);
        bufp->chgQData(oldp+199,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                   + (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2))))),33);
        bufp->chgQData(oldp+201,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                   - (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2))))),33);
        bufp->chgIData(oldp+203,((vlSelf->top__DOT__h_data_control_io_data_1 
                                  & vlSelf->top__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+204,((vlSelf->top__DOT__h_data_control_io_data_1 
                                  | vlSelf->top__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+205,((vlSelf->top__DOT__h_data_control_io_data_1 
                                  ^ vlSelf->top__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+206,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__h_data_control_io_data_1, (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))),32);
        bufp->chgIData(oldp+207,((vlSelf->top__DOT__h_data_control_io_data_1 
                                  >> (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))),32);
        bufp->chgQData(oldp+208,((0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                     << (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0)))),63);
        bufp->chgBit(oldp+210,((vlSelf->top__DOT__h_data_control_io_data_1 
                                < vlSelf->top__DOT__h_data_control_io_data_2)));
        bufp->chgBit(oldp+211,(VL_LTS_III(32, vlSelf->top__DOT__h_data_control_io_data_1, vlSelf->top__DOT__h_data_control_io_data_2)));
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__i_alu__DOT__out33),64);
        bufp->chgBit(oldp+214,((vlSelf->top__DOT__h_data_control_io_data_1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+215,(((2U != (IData)(vlSelf->top__DOT__d_idu_io_data_control)) 
                                & (vlSelf->top__DOT__h_data_control__DOT___io_data_2_T 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelf->top__DOT__i_alu__DOT__out33 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+217,(((~ (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1)) 
                                & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T))));
        bufp->chgBit(oldp+218,(((IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T) 
                                & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1))));
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__j_pc_next__DOT__ecall_dnpc),32);
        bufp->chgIData(oldp+220,(((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)),32);
        bufp->chgBit(oldp+221,((1U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+222,((2U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+223,((4U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+224,((5U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+225,((6U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+226,((7U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+227,((8U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+228,((9U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+229,((0xaU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+230,(((0xbU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)) 
                                | (0xcU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)))));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__j_pc_next__DOT__is_eql));
        bufp->chgBit(oldp+232,(VL_GTES_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
        bufp->chgBit(oldp+233,(VL_LTS_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
        bufp->chgBit(oldp+234,((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                >= vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
        bufp->chgBit(oldp+235,((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                < vlSelf->top__DOT__f_gpr_io_rdata_rs2)));
        bufp->chgIData(oldp+236,(((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                   ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+237,((VL_GTES_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                   ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+238,((VL_LTS_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                   ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+239,(((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                   < vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                   ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+240,(((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                   >= vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                   ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+241,(((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                   ? ((IData)(4U) + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)
                                   : vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9)),32);
        bufp->chgBit(oldp+242,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_1));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_2));
        bufp->chgBit(oldp+245,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_3));
        bufp->chgBit(oldp+246,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_4));
        bufp->chgBit(oldp+247,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5));
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6));
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7));
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_8));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_9));
        bufp->chgBit(oldp+252,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_10));
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_11));
        bufp->chgBit(oldp+254,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_12));
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_13));
        bufp->chgBit(oldp+256,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_14));
        bufp->chgBit(oldp+257,(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_15));
        bufp->chgCData(oldp+258,((((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7) 
                                   << 7U) | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5) 
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
        bufp->chgCData(oldp+259,(((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                   ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                       ? (0xffU & vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                       : 0U) : 0U)),8);
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_1));
        bufp->chgBit(oldp+261,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_2));
        bufp->chgBit(oldp+262,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_3));
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_4));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5));
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6));
        bufp->chgBit(oldp+266,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7));
        bufp->chgBit(oldp+267,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_8));
        bufp->chgBit(oldp+268,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_9));
        bufp->chgBit(oldp+269,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_10));
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_11));
        bufp->chgBit(oldp+271,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_12));
        bufp->chgBit(oldp+272,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_13));
        bufp->chgBit(oldp+273,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_14));
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_15));
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1));
        bufp->chgBit(oldp+277,(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_2));
        bufp->chgQData(oldp+278,(vlSelf->top__DOT__m_clint__DOT__mem_data_Reg),64);
        bufp->chgBit(oldp+280,(vlSelf->top__DOT__m_clint__DOT__validReg));
        bufp->chgCData(oldp+281,((((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7) 
                                   << 7U) | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5) 
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
        bufp->chgBit(oldp+282,(((IData)(vlSelf->top__DOT__m_clint__DOT___startDelay_T) 
                                & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))));
    }
    bufp->chgBit(oldp+283,(vlSelf->clock));
    bufp->chgBit(oldp+284,(vlSelf->reset));
    bufp->chgBit(oldp+285,(vlSelf->io_is_unknown_instruction));
    bufp->chgBit(oldp+286,(vlSelf->io_carry));
    bufp->chgBit(oldp+287,(vlSelf->io_isoverflow));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
