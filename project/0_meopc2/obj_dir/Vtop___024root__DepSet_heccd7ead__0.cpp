// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i1__DOT__addr_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ &addr_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i2__DOT__is_break_TOP(IData/*31:0*/ instruction_in, CData/*0:0*/ &is_break__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i7__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i9__DOT__mem_data_read_TOP(IData/*31:0*/ instruction_in, IData/*31:0*/ rs1_data_in, IData/*31:0*/ rs2_data_in, IData/*31:0*/ imm_data_in, IData/*31:0*/ &mem_data_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i6__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->ysyx_25030077_top__DOT__is_break_out) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("\346\243\200\346\265\213\345\210\260break\346\214\207\344\273\244, \344\273\277\347\234\237\351\200\200\345\207\272! \345\275\223\345\211\215PC = 0x%08x\n",
                  32,vlSelf->ysyx_25030077_top__DOT__i0__DOT__state);
        VL_FINISH_MT("vsrc/ysyx_25030077_EXIT.v", 12, "");
        VL_FINISH_MT("vsrc/ysyx_25030077_EXIT.v", 13, "");
    }
    if (VL_UNLIKELY(((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("\346\243\200\346\265\213\345\210\260\346\234\252\347\237\245\346\214\207\344\273\244, \344\273\277\347\234\237\351\200\200\345\207\272! \345\275\223\345\211\215PC = 0x%08x\n",
                  32,vlSelf->ysyx_25030077_top__DOT__i0__DOT__state);
        VL_FINISH_MT("vsrc/ysyx_25030077_EXIT.v", 20, "");
        VL_FINISH_MT("vsrc/ysyx_25030077_EXIT.v", 21, "");
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19 = 0U;
        vlSelf->ysyx_25030077_top__DOT__i0__DOT__state = 0x80000000U;
    } else {
        if ((0x1eU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x19U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x1aU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x1fU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x16U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x1dU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x1bU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x17U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x1cU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x18U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x15U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x14U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((9U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((8U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((7U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((6U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((5U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((4U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((3U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((1U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((2U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xaU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xbU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xcU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xdU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xeU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0xfU == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x10U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x11U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x12U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        if ((0x13U == (IData)(vlSelf->rd))) {
            vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19 
                = ((0U != (IData)(vlSelf->rd)) ? vlSelf->ysyx_25030077_top__DOT__ALU_result
                    : 0U);
        }
        vlSelf->ysyx_25030077_top__DOT__i0__DOT__state 
            = vlSelf->ysyx_25030077_top__DOT__Pc_next;
    }
    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i1__DOT__addr_read_TOP(vlSelf->ysyx_25030077_top__DOT__i0__DOT__state, vlSelf->__Vfunc_ysyx_25030077_top__DOT__i1__DOT__addr_read__0__Vfuncout);
    vlSelf->ysyx_25030077_top__DOT__instruction_out 
        = vlSelf->__Vfunc_ysyx_25030077_top__DOT__i1__DOT__addr_read__0__Vfuncout;
    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i2__DOT__is_break_TOP(vlSelf->ysyx_25030077_top__DOT__instruction_out, vlSelf->__Vfunc_ysyx_25030077_top__DOT__i2__DOT__is_break__1__Vfuncout);
    vlSelf->ysyx_25030077_top__DOT__is_break_out = vlSelf->__Vfunc_ysyx_25030077_top__DOT__i2__DOT__is_break__1__Vfuncout;
    vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9 
        = (vlSelf->ysyx_25030077_top__DOT__i0__DOT__state 
           + ((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                 >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
              | ((0x1000U & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                             >> 0x13U)) | ((0x800U 
                                            & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 7U)))))));
    vlSelf->ysyx_25030077_top__DOT__i3__DOT__Imm_type1 
        = ((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           (vlSelf->ysyx_25030077_top__DOT__instruction_out 
            >> 0x14U));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2 
        = ((0x380U & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                      >> 5U)) | (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3 
        = ((0xfc00U & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                       >> 0x10U)) | (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3 
        = ((0x1fc00U & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU)) | (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_imm_type_T_18 
        = ((0xf3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
            ? 6U : ((0x173U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? 6U : ((0x4293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                              ? 5U : ((0x293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                       ? 5U : ((0x93U 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                ? 5U
                                                : (
                                                   (0x193U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                    ? 1U
                                                    : 
                                                   ((0x113U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                     ? 1U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                      ? 2U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                       ? 2U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                        ? 3U
                                                        : 
                                                       ((0x67U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                         ? 3U
                                                         : 
                                                        ((0x123U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                          ? 4U
                                                          : 
                                                         ((0x23U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                           ? 4U
                                                           : 
                                                          ((0xa3U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                            ? 4U
                                                            : 
                                                           ((0x103U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                             ? 1U
                                                             : 
                                                            ((0x83U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                              ? 1U
                                                              : 
                                                             ((0x283U 
                                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                               ? 1U
                                                               : 
                                                              ((0x203U 
                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                ? 1U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                 ? 1U
                                                                 : 0U)))))))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rd_T_12 
        = (0x1fU & ((0x283U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 7U) : ((0x203U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                   ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                      >> 7U) : ((3U 
                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                 ? 
                                                (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 7U)
                                                 : 
                                                ((0x33U 
                                                  == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                  ? 
                                                 (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 7U)
                                                  : 
                                                 ((0x3b3U 
                                                   == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                   ? 
                                                  (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 7U)
                                                   : 
                                                  ((0xb3U 
                                                    == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 7U)
                                                    : 
                                                   ((0x42b3U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                     ? 
                                                    (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                     >> 7U)
                                                     : 
                                                    ((0x2b3U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                      ? 
                                                     (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                      >> 7U)
                                                      : 
                                                     ((0x233U 
                                                       == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                       >> 7U)
                                                       : 
                                                      ((0x333U 
                                                        == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                        >> 7U)
                                                        : 
                                                       ((0x8033U 
                                                         == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                         >> 7U)
                                                         : 
                                                        ((0x1b3U 
                                                          == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                          ? 
                                                         (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                          >> 7U)
                                                          : 
                                                         ((0x133U 
                                                           == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                           ? 
                                                          (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                           >> 7U)
                                                           : 0U))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_pc_next_type_T_19 
        = ((0x203U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
            ? 0U : ((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? 0U : ((0x33U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                              ? 0U : ((0x3b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                       ? 0U : ((0xb3U 
                                                == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                ? 0U
                                                : (
                                                   (0x42b3U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                    ? 0U
                                                    : 
                                                   ((0x2b3U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                     ? 0U
                                                     : 
                                                    ((0x233U 
                                                      == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                      ? 0U
                                                      : 
                                                     ((0x333U 
                                                       == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                       ? 0U
                                                       : 
                                                      ((0x8033U 
                                                        == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                         ? 6U
                                                         : 
                                                        ((0x2e3U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                          ? 7U
                                                          : 
                                                         ((0x263U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                           ? 9U
                                                           : 
                                                          ((0x363U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                            ? 0xaU
                                                            : 
                                                           ((0x3e3U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                             ? 8U
                                                             : 
                                                            ((0xe3U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                              ? 5U
                                                              : 
                                                             ((0x1b3U 
                                                               == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                               ? 0U
                                                               : 
                                                              ((0x133U 
                                                                == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                ? 0U
                                                                : 
                                                               ((0x193U 
                                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0x113U 
                                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 3U))))))))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_data_control_T_19 
        = ((0x83U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
            ? 2U : ((0x283U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? 2U : ((0x203U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                              ? 2U : ((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                       ? 2U : ((0x33U 
                                                == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                ? 3U
                                                : (
                                                   (0x3b3U 
                                                    == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                    ? 3U
                                                    : 
                                                   ((0xb3U 
                                                     == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                     ? 3U
                                                     : 
                                                    ((0x42b3U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                      ? 3U
                                                      : 
                                                     ((0x2b3U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                       ? 3U
                                                       : 
                                                      ((0x233U 
                                                        == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                        ? 3U
                                                        : 
                                                       ((0x333U 
                                                         == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                         ? 3U
                                                         : 
                                                        ((0x8033U 
                                                          == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                          ? 3U
                                                          : 
                                                         ((0x63U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x2e3U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x263U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0x363U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x3e3U 
                                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                               ? 0U
                                                               : 
                                                              ((0xe3U 
                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x133U 
                                                                 == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                 ? 3U
                                                                 : 
                                                                ((0x1b3U 
                                                                  == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                  ? 3U
                                                                  : 0U))))))))))))))))))));
    if ((0x42b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x2b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x233U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x333U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x8033U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x63U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x2e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x263U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x363U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x3e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0xe3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x1b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else if ((0x133U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)) {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU));
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0x14U));
    } else {
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12 
            = (0x1fU & 0U);
        vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12 
            = (0x1fU & 0U);
    }
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rd_T_24 
        = (0x1fU & ((0x173U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 7U) : ((0x4293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                   ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                      >> 7U) : ((0x293U 
                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                 ? 
                                                (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 7U)
                                                 : 
                                                ((0x93U 
                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                  ? 
                                                 (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 7U)
                                                  : 
                                                 ((0x193U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 7U)
                                                   : 
                                                  ((0x113U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 7U)
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                     ? 
                                                    (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                     >> 7U)
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                      ? 
                                                     (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                      >> 7U)
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                       ? 
                                                      (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                       >> 7U)
                                                       : 
                                                      ((0x67U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                        ? 
                                                       (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                        >> 7U)
                                                        : 
                                                       ((0x103U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                         >> 7U)
                                                         : 
                                                        ((0x83U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                          ? 
                                                         (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                          >> 7U)
                                                          : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rd_T_12))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__pc_next_type = 
        ((0x6fU == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))
          ? 1U : ((0x67U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                   ? 2U : ((0x17U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                            ? 0U : ((0x37U == (0x7fU 
                                               & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                     ? 0U : ((0x13U 
                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                              ? 0U : 
                                             ((0x213U 
                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                               ? 0U
                                               : ((0x313U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                   ? 0U
                                                   : 
                                                  ((0x393U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                    ? 0U
                                                    : 
                                                   ((0xf3U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                     ? 0U
                                                     : 
                                                    ((0x173U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                      ? 0U
                                                      : 
                                                     ((0x4293U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                       ? 0U
                                                       : 
                                                      ((0x293U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                        ? 0U
                                                        : 
                                                       ((0x93U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                         ? 0U
                                                         : 
                                                        ((0x123U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                          ? 0U
                                                          : 
                                                         ((0x23U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0xa3U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x100073U 
                                                             == vlSelf->ysyx_25030077_top__DOT__instruction_out)
                                                             ? 4U
                                                             : 
                                                            ((0x73U 
                                                              == vlSelf->ysyx_25030077_top__DOT__instruction_out)
                                                              ? 0xbU
                                                              : 
                                                             ((0x30200073U 
                                                               == vlSelf->ysyx_25030077_top__DOT__instruction_out)
                                                               ? 0xcU
                                                               : 
                                                              ((0x103U 
                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x83U 
                                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0x283U 
                                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_pc_next_type_T_19)))))))))))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__data_control = 
        ((0x17U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))
          ? 1U : ((0x6fU == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                   ? 1U : ((0x67U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                            ? 1U : ((0x123U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                     ? 0U : ((0x23U 
                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                              ? 0U : 
                                             ((0xa3U 
                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                               ? 0U
                                               : ((0x103U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                   ? 2U
                                                   : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_data_control_T_19))))))));
    vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_25 
        = (0x1fU & ((0x113U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                     ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                        >> 0xfU) : ((0x67U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                     ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                        >> 0xfU) : 
                                    ((0x123U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                      ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                         >> 0xfU) : 
                                     ((0x23U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                       ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                          >> 0xfU) : 
                                      ((0xa3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                        ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                           >> 0xfU)
                                        : ((0x103U 
                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                            ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                               >> 0xfU)
                                            : ((0x83U 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 0xfU)
                                                : (
                                                   (0x283U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x203U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                     >> 0xfU)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                      ? 
                                                     (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x33U 
                                                       == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x3b3U 
                                                        == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                        >> 0xfU)
                                                        : 
                                                       ((0xb3U 
                                                         == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                         >> 0xfU)
                                                         : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_12)))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__rs2 = (0x1fU & 
                                           ((0x123U 
                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                             ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                >> 0x14U)
                                             : ((0x23U 
                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                 ? 
                                                (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 0x14U)
                                                 : 
                                                ((0xa3U 
                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                  ? 
                                                 (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 0x14U)
                                                  : 
                                                 ((0x33U 
                                                   == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                   ? 
                                                  (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x3b3U 
                                                    == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 0x14U)
                                                    : 
                                                   ((0xb3U 
                                                     == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                     ? 
                                                    (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                     >> 0x14U)
                                                     : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs2_T_12))))))));
    if ((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ALU_ctrl = 0U;
        vlSelf->ysyx_25030077_top__DOT__imm_type = 1U;
    } else if ((0x213U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ALU_ctrl = 4U;
        vlSelf->ysyx_25030077_top__DOT__imm_type = 1U;
    } else if ((0x313U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ALU_ctrl = 3U;
        vlSelf->ysyx_25030077_top__DOT__imm_type = 1U;
    } else if ((0x393U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))) {
        vlSelf->ALU_ctrl = 6U;
        vlSelf->ysyx_25030077_top__DOT__imm_type = 1U;
    } else {
        vlSelf->ALU_ctrl = ((0xf3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                             ? 0xbU : ((0x173U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                        ? 0xcU : ((0x4293U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                   ? 5U
                                                   : 
                                                  ((0x293U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                    ? 9U
                                                    : 
                                                   ((0x93U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                     ? 8U
                                                     : 
                                                    ((0x193U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                      ? 2U
                                                      : 
                                                     ((0x113U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                       ? 0xaU
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                         ? 0U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_25030077_top__DOT__instruction_out))
                                                          ? 0U
                                                          : 
                                                         ((0x67U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x123U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0xa3U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x103U 
                                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                               ? 0U
                                                               : 
                                                              ((0x83U 
                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x283U 
                                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0x203U 
                                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x33U 
                                                                    == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                    ? 0U
                                                                    : 
                                                                   ((0x3b3U 
                                                                     == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                     ? 6U
                                                                     : 
                                                                    ((0xb3U 
                                                                      == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                      ? 8U
                                                                      : 
                                                                     ((0x42b3U 
                                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                                       ? 5U
                                                                       : 
                                                                      ((0x2b3U 
                                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                                        ? 9U
                                                                        : 
                                                                       ((0x233U 
                                                                         == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                         ? 4U
                                                                         : 
                                                                        ((0x333U 
                                                                          == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                          ? 3U
                                                                          : 
                                                                         ((0x8033U 
                                                                           == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                           ? 1U
                                                                           : 
                                                                          ((0x63U 
                                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                            ? 0U
                                                                            : 
                                                                           ((0x2e3U 
                                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                             ? 0U
                                                                             : 
                                                                            ((0x263U 
                                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                              ? 0U
                                                                              : 
                                                                             ((0x363U 
                                                                               == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                               ? 0U
                                                                               : 
                                                                              ((0x3e3U 
                                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                                ? 0U
                                                                                : 
                                                                               ((0xe3U 
                                                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x133U 
                                                                                == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x1b3U 
                                                                                == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))))))));
        vlSelf->ysyx_25030077_top__DOT__imm_type = vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_imm_type_T_18;
    }
    vlSelf->imm = ((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                    ? vlSelf->ysyx_25030077_top__DOT__i3__DOT__Imm_type1
                    : ((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                        ? (0xfffff000U & vlSelf->ysyx_25030077_top__DOT__instruction_out)
                        : ((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                            ? 4U : ((4U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                                     ? ((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                           >> 0x1fU)
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | ((0xfe0U 
                                            & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 7U))))
                                     : ((5U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                             >> 0x14U))
                                         : ((6U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))
                                             ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                >> 0x14U)
                                             : 0U))))));
    vlSelf->rd = (0x1fU & ((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                            ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                               >> 7U) : ((0x213U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                          ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                             >> 7U)
                                          : ((0x313U 
                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                              ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 7U)
                                              : ((0x393U 
                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                  ? 
                                                 (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 7U)
                                                  : 
                                                 ((0xf3U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 7U)
                                                   : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rd_T_24)))))));
    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i7__DOT__ecall_read_TOP(vlSelf->ysyx_25030077_top__DOT__i0__DOT__state, (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type), vlSelf->__Vfunc_ysyx_25030077_top__DOT__i7__DOT__ecall_read__3__Vfuncout);
    vlSelf->ysyx_25030077_top__DOT__rs1 = (0x1fU & 
                                           ((0x13U 
                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                             ? (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                >> 0xfU)
                                             : ((0x213U 
                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                 ? 
                                                (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                 >> 0xfU)
                                                 : 
                                                ((0x313U 
                                                  == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                  ? 
                                                 (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                  >> 0xfU)
                                                  : 
                                                 ((0x393U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                   >> 0xfU)
                                                   : 
                                                  ((0xf3U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x173U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x4293U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                      ? 
                                                     (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x293U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                       ? 
                                                      (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x93U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))
                                                        ? 
                                                       (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x193U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                         >> 0xfU)
                                                         : (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___io_rs1_T_25))))))))))));
    vlSelf->ysyx_25030077_top__DOT__i7__DOT__ecall_dnpc 
        = vlSelf->__Vfunc_ysyx_25030077_top__DOT__i7__DOT__ecall_read__3__Vfuncout;
    vlSelf->ysyx_25030077_top__DOT__i4__DOT___GEN_85 
        = ((0x15U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21
            : ((0x14U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20
                : ((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19
                    : ((0x12U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18
                        : ((0x11U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17
                            : ((0x10U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16
                                : ((0xfU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15
                                    : ((0xeU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14
                                        : ((0xdU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                     ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                      ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                       ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                         ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                          ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                           ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                             ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                              ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1
                                                              : vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0)))))))))))))))))))));
    vlSelf->ysyx_25030077_top__DOT__i4__DOT___GEN_53 
        = ((0x15U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21
            : ((0x14U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20
                : ((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19
                    : ((0x12U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18
                        : ((0x11U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17
                            : ((0x10U == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16
                                : ((0xfU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15
                                    : ((0xeU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14
                                        : ((0xdU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                     ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                      ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                       ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                         ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                          ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                           ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                             ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                              ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1
                                                              : vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0)))))))))))))))))))));
    vlSelf->rs2_out = ((0x1fU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31
                        : ((0x1eU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30
                            : ((0x1dU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29
                                : ((0x1cU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28
                                    : ((0x1bU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27
                                        : ((0x1aU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26
                                            : ((0x19U 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                     ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__rs2))
                                                      ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22
                                                      : vlSelf->ysyx_25030077_top__DOT__i4__DOT___GEN_85))))))))));
    vlSelf->rs1_out = ((0x1fU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31
                        : ((0x1eU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30
                            : ((0x1dU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29
                                : ((0x1cU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28
                                    : ((0x1bU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                        ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27
                                        : ((0x1aU == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                            ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26
                                            : ((0x19U 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                    ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                     ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__rs1))
                                                      ? vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22
                                                      : vlSelf->ysyx_25030077_top__DOT__i4__DOT___GEN_53))))))))));
    vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T 
        = ((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
            ? vlSelf->rs2_out : vlSelf->imm);
    vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql 
        = (vlSelf->rs1_out == vlSelf->rs2_out);
    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i9__DOT__mem_data_read_TOP(vlSelf->ysyx_25030077_top__DOT__instruction_out, vlSelf->rs1_out, vlSelf->rs2_out, vlSelf->imm, vlSelf->__Vfunc_ysyx_25030077_top__DOT__i9__DOT__mem_data_read__4__Vfuncout);
    vlSelf->ysyx_25030077_top__DOT__mem_data = vlSelf->__Vfunc_ysyx_25030077_top__DOT__i9__DOT__mem_data_read__4__Vfuncout;
    vlSelf->ysyx_25030077_top__DOT__i6__DOT____VdfgTmp_h0adca177__0 
        = ((2U != (IData)(vlSelf->ysyx_25030077_top__DOT__data_control)) 
           & (vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T 
              >> 0x1fU));
    vlSelf->ysyx_25030077_top__DOT__ALU_data_2 = ((2U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                                   ? 0U
                                                   : vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T);
    vlSelf->ysyx_25030077_top__DOT__Pc_next = (((0xbU 
                                                 == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)) 
                                                | (0xcU 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)))
                                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT__ecall_dnpc
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                    ? 
                                                   (vlSelf->ysyx_25030077_top__DOT__i0__DOT__state 
                                                    + 
                                                    ((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                        >> 0x1fU)
                                                        ? 0x7ffU
                                                        : 0U) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->ysyx_25030077_top__DOT__instruction_out) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                                    >> 0x14U)))))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                     ? 
                                                    (0xfffffffeU 
                                                     & (vlSelf->rs1_out 
                                                        + vlSelf->ysyx_25030077_top__DOT__i3__DOT__Imm_type1))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                      ? vlSelf->ysyx_25030077_top__DOT__i0__DOT__state
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                       ? 
                                                      ((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                                        ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                        ? 
                                                       ((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                                         ? 
                                                        ((IData)(4U) 
                                                         + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)
                                                         : vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                         ? 
                                                        (VL_GTES_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                                                          ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                                          : 
                                                         ((IData)(4U) 
                                                          + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                          ? 
                                                         ((vlSelf->rs1_out 
                                                           >= vlSelf->rs2_out)
                                                           ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                                           : 
                                                          ((IData)(4U) 
                                                           + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                           ? 
                                                          (VL_LTS_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                                                            ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))
                                                            ? 
                                                           ((vlSelf->rs1_out 
                                                             < vlSelf->rs2_out)
                                                             ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                                             : 
                                                            ((IData)(4U) 
                                                             + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)))))))))));
    vlSelf->ysyx_25030077_top__DOT__ALU_data_1 = ((1U 
                                                   == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                                   ? vlSelf->ysyx_25030077_top__DOT__i0__DOT__state
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                                    ? vlSelf->ysyx_25030077_top__DOT__mem_data
                                                    : vlSelf->rs1_out));
    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i6__DOT__csr_read_TOP(vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2, (IData)(vlSelf->ALU_ctrl), vlSelf->__Vfunc_ysyx_25030077_top__DOT__i6__DOT__csr_read__2__Vfuncout);
    vlSelf->ysyx_25030077_top__DOT__i6__DOT__csr_data 
        = vlSelf->__Vfunc_ysyx_25030077_top__DOT__i6__DOT__csr_read__2__Vfuncout;
    vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_1)) 
                             + (QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_2))));
    vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_1)) 
                             - (QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_2))));
    vlSelf->ALU_carry = (1U & ((((IData)(1U) << (IData)(vlSelf->ALU_ctrl)) 
                                & (IData)((vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult 
                                           >> 0x20U))) 
                               | (0x7fffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ALU_ctrl)) 
                                              >> 1U) 
                                             & (IData)(
                                                       (vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult 
                                                        >> 0x20U))))));
    vlSelf->ALU_overflow = ((((IData)(1U) << (IData)(vlSelf->ALU_ctrl)) 
                             & (((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                  >> 0x1fU) == (IData)(vlSelf->ysyx_25030077_top__DOT__i6__DOT____VdfgTmp_h0adca177__0)) 
                                & ((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                    >> 0x1fU) != (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult 
                                                             >> 0x1fU)))))) 
                            | (0x7fffU & ((((IData)(1U) 
                                            << (IData)(vlSelf->ALU_ctrl)) 
                                           >> 1U) & 
                                          (((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                             >> 0x1fU) 
                                            != (IData)(vlSelf->ysyx_25030077_top__DOT__i6__DOT____VdfgTmp_h0adca177__0)) 
                                           & ((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                               >> 0x1fU) 
                                              != (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult 
                                                             >> 0x1fU))))))));
    vlSelf->ysyx_25030077_top__DOT__i6__DOT___io_out_T_39 
        = (0x7fffffffffffffffULL & (((((((((1U & ((IData)(1U) 
                                                  << (IData)(vlSelf->ALU_ctrl)))
                                            ? vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult
                                            : 0ULL) 
                                          | ((2U & 
                                              ((IData)(1U) 
                                               << (IData)(vlSelf->ALU_ctrl)))
                                              ? vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult
                                              : 0ULL)) 
                                         | (QData)((IData)(
                                                           (0x3fffU 
                                                            & ((((IData)(1U) 
                                                                 << (IData)(vlSelf->ALU_ctrl)) 
                                                                >> 2U) 
                                                               & (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                                  < vlSelf->ysyx_25030077_top__DOT__ALU_data_2)))))) 
                                        | (QData)((IData)(
                                                          ((8U 
                                                            & ((IData)(1U) 
                                                               << (IData)(vlSelf->ALU_ctrl)))
                                                            ? 
                                                           (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                            | vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                            : 0U)))) 
                                       | (QData)((IData)(
                                                         ((0x10U 
                                                           & ((IData)(1U) 
                                                              << (IData)(vlSelf->ALU_ctrl)))
                                                           ? 
                                                          (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                           ^ vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                           : 0U)))) 
                                      | (QData)((IData)(
                                                        ((0x20U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->ALU_ctrl)))
                                                          ? 
                                                         ((0x1fU 
                                                           >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                           ? 
                                                          VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                           : 
                                                          (- 
                                                           (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                            >> 0x1fU)))
                                                          : 0U)))) 
                                     | (QData)((IData)(
                                                       ((0x40U 
                                                         & ((IData)(1U) 
                                                            << (IData)(vlSelf->ALU_ctrl)))
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                         & vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                         : 0U)))) 
                                    | ((0x100U & ((IData)(1U) 
                                                  << (IData)(vlSelf->ALU_ctrl)))
                                        ? ((QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_1)) 
                                           << ((2U 
                                                == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                                ? 0U
                                                : (0x1fU 
                                                   & vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T)))
                                        : 0ULL)));
    vlSelf->ysyx_25030077_top__DOT__ALU_result = ((1U 
                                                   & ((0x1fU 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelf->ALU_ctrl)) 
                                                          >> 0xbU)) 
                                                      | (0xfU 
                                                         & (((IData)(1U) 
                                                             << (IData)(vlSelf->ALU_ctrl)) 
                                                            >> 0xcU))))
                                                   ? vlSelf->ysyx_25030077_top__DOT__i6__DOT__csr_data
                                                   : 
                                                  (((IData)(vlSelf->ysyx_25030077_top__DOT__i6__DOT___io_out_T_39) 
                                                    | ((0x200U 
                                                        & ((IData)(1U) 
                                                           << (IData)(vlSelf->ALU_ctrl)))
                                                        ? 
                                                       ((0x1fU 
                                                         >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                         ? 
                                                        (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                                         >> vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                                         : 0U)
                                                        : 0U)) 
                                                   | (IData)((QData)((IData)(
                                                                             (0x3fU 
                                                                              & ((((IData)(1U) 
                                                                                << (IData)(vlSelf->ALU_ctrl)) 
                                                                                >> 0xaU) 
                                                                                & VL_LTS_III(32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2))))))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
