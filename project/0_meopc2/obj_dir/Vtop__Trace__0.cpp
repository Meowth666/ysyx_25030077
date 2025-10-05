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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030077_top__DOT__i0__DOT__state),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25030077_top__DOT__Pc_next),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030077_top__DOT__instruction_out),32);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25030077_top__DOT__imm_type),3);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25030077_top__DOT__rs1),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25030077_top__DOT__rs2),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25030077_top__DOT__data_control),3);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25030077_top__DOT__pc_next_type),4);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25030077_top__DOT__is_break_out));
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25030077_top__DOT__ALU_result),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25030077_top__DOT__mem_data),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030077_top__DOT__ALU_data_1),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25030077_top__DOT__ALU_data_2),32);
        bufp->chgBit(oldp+13,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                          >> 7U))),5);
        bufp->chgCData(oldp+16,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+17,((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+18,((0x213U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+19,((0x313U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+20,((0x393U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+21,((0x4293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
        bufp->chgBit(oldp+22,((0x293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
        bufp->chgBit(oldp+23,((0x93U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
        bufp->chgBit(oldp+24,((0x42b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
        bufp->chgBit(oldp+25,((0x2b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
        bufp->chgBit(oldp+26,((0x63U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+27,((0xe3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+28,((0x33U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+29,((0x233U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+30,((0x3b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+31,((0x333U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+32,((0x8033U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+33,((0x37U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
        bufp->chgBit(oldp+34,((0x17U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
        bufp->chgBit(oldp+35,((0x6fU == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
        bufp->chgBit(oldp+36,((0x67U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+37,((0x123U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+38,((0x2e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+39,((0x263U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+40,((0x363U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+41,((0x3e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+42,((0x23U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+43,((0xa3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+44,((0x203U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+45,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+46,((0x103U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+47,((0x83U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+48,((0x283U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+49,((0xb3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+50,((0x133U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+51,((0x1b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
        bufp->chgBit(oldp+52,((0x193U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+53,((0x113U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+54,((0xf3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+55,((0x173U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+56,((0x100073U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
        bufp->chgBit(oldp+57,((0x73U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
        bufp->chgBit(oldp+58,((0x30200073U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25030077_top__DOT__i3__DOT__Imm_type1),32);
        bufp->chgIData(oldp+60,((0xfffff000U & vlSelf->ysyx_25030077_top__DOT__instruction_out)),32);
        bufp->chgIData(oldp+61,(((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                    >> 0x1fU) ? 0xfffffU
                                    : 0U) << 0xcU) 
                                 | ((0xfe0U & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                >> 7U))))),32);
        bufp->chgIData(oldp+62,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                          >> 0x14U))),32);
        bufp->chgIData(oldp+63,((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                 >> 0x14U)),32);
        bufp->chgBit(oldp+64,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgBit(oldp+65,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgBit(oldp+66,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgBit(oldp+67,((4U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgBit(oldp+68,((5U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgBit(oldp+69,((6U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31),32);
        bufp->chgBit(oldp+102,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
        bufp->chgBit(oldp+103,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
        bufp->chgBit(oldp+104,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__csr_data),32);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult),33);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult),33);
        bufp->chgBit(oldp+110,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                < vlSelf->ysyx_25030077_top__DOT__ALU_data_2)));
        bufp->chgBit(oldp+111,(VL_LTS_III(32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2)));
        bufp->chgIData(oldp+112,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                  & vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
        bufp->chgIData(oldp+113,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                  | vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
        bufp->chgIData(oldp+114,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                  ^ vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
        bufp->chgIData(oldp+115,(((0x1fU >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                   : (- (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                         >> 0x1fU)))),32);
        bufp->chgIData(oldp+116,(((0x1fU >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                   ? (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                      >> vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                   : 0U)),32);
        bufp->chgQData(oldp+117,((0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_1)) 
                                     << ((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                          ? 0U : (0x1fU 
                                                  & vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T))))),63);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25030077_top__DOT__i7__DOT__ecall_dnpc),32);
        bufp->chgIData(oldp+120,(((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)),32);
        bufp->chgBit(oldp+121,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+122,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+123,((4U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+124,((5U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+125,((6U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+126,((7U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+127,((8U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+128,((9U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+129,((0xaU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
        bufp->chgBit(oldp+130,(((0xbU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)) 
                                | (0xcU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)))));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql));
        bufp->chgIData(oldp+132,(((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                   ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
        bufp->chgIData(oldp+133,(((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                   ? ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)
                                   : vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9)),32);
    }
    bufp->chgBit(oldp+134,(vlSelf->clock));
    bufp->chgBit(oldp+135,(vlSelf->reset));
    bufp->chgIData(oldp+136,(vlSelf->imm),32);
    bufp->chgCData(oldp+137,(vlSelf->rd),5);
    bufp->chgCData(oldp+138,(vlSelf->ALU_ctrl),4);
    bufp->chgIData(oldp+139,(vlSelf->rs1_out),32);
    bufp->chgIData(oldp+140,(vlSelf->rs2_out),32);
    bufp->chgBit(oldp+141,(vlSelf->ALU_carry));
    bufp->chgBit(oldp+142,(vlSelf->ALU_overflow));
    bufp->chgBit(oldp+143,((0U == (IData)(vlSelf->rd))));
    bufp->chgSData(oldp+144,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ALU_ctrl)))),16);
    bufp->chgBit(oldp+145,(VL_GTES_III(32, vlSelf->rs1_out, vlSelf->rs2_out)));
    bufp->chgBit(oldp+146,(VL_LTS_III(32, vlSelf->rs1_out, vlSelf->rs2_out)));
    bufp->chgBit(oldp+147,((vlSelf->rs1_out >= vlSelf->rs2_out)));
    bufp->chgBit(oldp+148,((vlSelf->rs1_out < vlSelf->rs2_out)));
    bufp->chgIData(oldp+149,((VL_GTES_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                               ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                               : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->chgIData(oldp+150,((VL_LTS_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                               ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                               : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->chgIData(oldp+151,(((vlSelf->rs1_out < vlSelf->rs2_out)
                               ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                               : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->chgIData(oldp+152,(((vlSelf->rs1_out >= vlSelf->rs2_out)
                               ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                               : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
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
