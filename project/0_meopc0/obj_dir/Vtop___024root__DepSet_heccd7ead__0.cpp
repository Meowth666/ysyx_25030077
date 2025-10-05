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

void Vtop___024root____Vdpiimwrap_top__DOT__j_pc_next__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__mem_data_read_TOP(IData/*31:0*/ mask, IData/*31:0*/ addr_in, IData/*31:0*/ &mem_data_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__addr_read_TOP(IData/*31:0*/ addr_in, IData/*31:0*/ &addr_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__i_alu__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0;
    __Vdlyvval__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0;
    __Vdlyvset__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0;
    __Vdly__top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0;
    __Vdly__top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0 = 0;
    // Body
    __Vdly__top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0 
        = vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0;
    __Vdly__top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0 
        = vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0;
    __Vdlyvset__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)((((0xa00003f8U == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr) 
                                   & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid)) 
                                  & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0))) 
                         & (0xa00003f8U == ((0xa00003f8U 
                                             == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                             ? 0xa00003f8U
                                             : 0U))))) {
            VL_FWRITEF(0x80000002U,"%c",8,((0xa00003f8U 
                                            == vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr)
                                            ? ((1U 
                                                == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                                ? (0xffU 
                                                   & vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                                : 0U)
                                            : 0U));
        }
    }
    __Vdly__top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0 
        = vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0 
        = vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0 
        = vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0 
        = vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0;
    __Vdly__top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1) 
                                     ^ (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_2)));
    __Vdly__top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1) 
                                     ^ (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_2)));
    if (vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0 
            = vlSelf->top__DOT__f_gpr__DOT__pc_next_reg;
        __Vdlyvset__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__m_clint__DOT__delayCnt = 0U;
        vlSelf->top__DOT__g_mem__DOT__delayCnt = 0U;
        vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full = 0U;
        vlSelf->top__DOT__m_clint__DOT__mem_data_Reg = 0ULL;
        vlSelf->top__DOT__f_gpr__DOT__regs_0 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_1 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_2 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_3 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_4 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_5 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_6 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_7 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_8 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_9 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_10 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_11 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_12 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_13 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_14 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_15 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_16 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_17 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_18 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_19 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_20 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_21 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_22 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_23 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_24 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_25 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_26 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_27 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_28 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_29 = 0U;
        vlSelf->top__DOT__f_gpr__DOT__regs_30 = 0U;
        vlSelf->top__DOT__c_arbiter__DOT__inst_reg = 0U;
        vlSelf->top__DOT__f_gpr__DOT__pc_next_reg = 0x80000000U;
        vlSelf->top__DOT__f_gpr__DOT__regs_31 = 0U;
        vlSelf->top__DOT__g_mem__DOT__mem_data_Reg = 0U;
        vlSelf->top__DOT__c_arbiter__DOT__state_reg = 0U;
    } else {
        vlSelf->top__DOT__m_clint__DOT__delayCnt = 
            (((IData)(vlSelf->top__DOT__m_clint__DOT___startDelay_T) 
              & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))
              ? (((IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_2) 
                  << 2U) | (((IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1) 
                             << 1U) | (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0)))
              : ((0U != (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt))
                  ? (IData)(vlSelf->top__DOT__m_clint__DOT___delayCnt_T_3)
                  : 0U));
        vlSelf->top__DOT__g_mem__DOT__delayCnt = (((IData)(vlSelf->top__DOT__g_mem__DOT___startDelay_T) 
                                                   & (IData)(vlSelf->top__DOT__c_arbiter_io_is_r))
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0)))
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt))
                                                    ? (IData)(vlSelf->top__DOT__g_mem__DOT___delayCnt_T_3)
                                                    : 0U));
        if (((IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__do_deq))) {
            vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full 
                = vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en;
        }
        if (vlSelf->top__DOT__m_clint__DOT___startDelay_T) {
            vlSelf->top__DOT__m_clint__DOT__mem_data_Reg 
                = vlSelf->top__DOT__m_clint__DOT___mem_data_Reg_T_2;
        }
        if ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_0 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((1U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_1 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((2U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_2 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((3U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_3 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((4U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_4 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((5U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_5 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((6U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_6 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((7U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_7 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((8U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_8 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((9U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_9 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xaU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_10 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xbU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_11 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xcU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_12 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xdU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_13 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xeU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_14 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0xfU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_15 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x10U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_16 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x11U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_17 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x12U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_18 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x13U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_19 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x14U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_20 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x15U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_21 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x16U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_22 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x17U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_23 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x18U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_24 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x19U == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_25 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x1aU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_26 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x1bU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_27 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x1cU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_28 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x1dU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_29 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if ((0x1eU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            vlSelf->top__DOT__f_gpr__DOT__regs_30 = 
                (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))
                  ? ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd)
                  : ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                      ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                      : vlSelf->top__DOT__f_gpr__DOT___GEN_94));
        }
        if (((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__delay_cnt)) 
             & (0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)))) {
            vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                = ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                    ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                    : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg);
        }
        if (((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
             & (IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid))) {
            vlSelf->top__DOT__f_gpr__DOT__pc_next_reg 
                = vlSelf->top__DOT__f_gpr_io_pc_next;
        }
        if ((0x1fU == (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
            if (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                 & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0))) {
                vlSelf->top__DOT__f_gpr__DOT__regs_31 
                    = ((0U == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                        ? 0U : vlSelf->top__DOT__f_gpr_io_wdata_rd);
            } else if ((0x1fU != (IData)(vlSelf->top__DOT__d_idu_io_rd))) {
                vlSelf->top__DOT__f_gpr__DOT__regs_31 
                    = vlSelf->top__DOT__f_gpr__DOT___GEN_94;
            }
        }
        if (vlSelf->top__DOT__g_mem__DOT___startDelay_T) {
            vlSelf->top__DOT__g_mem__DOT__mem_data_Reg 
                = vlSelf->top__DOT__g_mem__DOT__read_data;
        }
        vlSelf->top__DOT__c_arbiter__DOT__state_reg 
            = ((IData)(vlSelf->top__DOT__c_arbiter__DOT___axi_ar_addr_T_2)
                ? (1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__delay_cnt))
                : ((IData)(vlSelf->top__DOT__c_arbiter__DOT___state_reg_T_3)
                    ? ((IData)(vlSelf->top__DOT__c_arbiter_io_r_valid_lsu)
                        ? ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__delay_cnt))
                            ? 2U : 1U) : ((IData)(vlSelf->top__DOT__c_arbiter_io_r_valid_lsu)
                                           ? 0U : (
                                                   ((IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid) 
                                                    & ((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0) 
                                                       | (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0)))
                                                    ? 2U
                                                    : 1U)))
                    : ((IData)(vlSelf->top__DOT__c_arbiter__DOT___state_reg_T_13)
                        ? (((IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid) 
                            & ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                ? (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0)
                                : (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0)))
                            ? 0U : 2U) : 0U)));
    }
    __Vdly__top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_15) 
                                     ^ ((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_13) 
                                        ^ ((IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_10) 
                                           ^ (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_12)))));
    __Vdly__top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_15) 
                                     ^ ((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_13) 
                                        ^ ((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_10) 
                                           ^ (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_12)))));
    __Vdly__top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_15) 
                                     ^ ((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_13) 
                                        ^ ((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_10) 
                                           ^ (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_12)))));
    __Vdly__top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_15) 
                                     ^ ((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13) 
                                        ^ ((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10) 
                                           ^ (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12)))));
    vlSelf->top__DOT__f_gpr__DOT__validReg = ((IData)(vlSelf->reset) 
                                              | (((IData)(vlSelf->top__DOT__c_arbiter_io_gpr_r_valid) 
                                                  & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0)) 
                                                 | (IData)(vlSelf->top__DOT__f_gpr__DOT___validReg_T_2)));
    vlSelf->top__DOT__m_clint__DOT__validReg = ((~ (IData)(vlSelf->reset)) 
                                                & ((IData)(vlSelf->top__DOT__m_clint__DOT___startDelay_T) 
                                                   | (IData)(vlSelf->top__DOT__m_clint__DOT___validReg_T_3)));
    vlSelf->top__DOT__g_mem__DOT__validReg = ((~ (IData)(vlSelf->reset)) 
                                              & ((IData)(vlSelf->top__DOT__g_mem__DOT___startDelay_T) 
                                                 | (IData)(vlSelf->top__DOT__g_mem__DOT___validReg_T_4)));
    if (__Vdlyvset__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0) {
        vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[0U] 
            = __Vdlyvval__top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr__v0;
    }
    vlSelf->top__DOT__m_clint__DOT___delayCnt_T_3 = 
        (7U & ((IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt) 
               - (IData)(1U)));
    vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1));
    vlSelf->top__DOT__g_mem__DOT___delayCnt_T_3 = (7U 
                                                   & ((IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt) 
                                                      - (IData)(1U)));
    vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_14));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_14));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_14));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_14));
    vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)) 
           & (IData)(vlSelf->top__DOT__f_gpr__DOT__validReg));
    vlSelf->top__DOT__f_gpr__DOT___validReg_T_2 = ((IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
                                                   & (IData)(vlSelf->top__DOT__f_gpr__DOT__validReg));
    vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem 
        = ((IData)(vlSelf->top__DOT__g_mem__DOT__validReg) 
           & (0U == (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt)));
    vlSelf->top__DOT__m_clint__DOT___mem_data_Reg_T_2 
        = (0x700ULL + vlSelf->top__DOT__m_clint__DOT__mem_data_Reg);
    vlSelf->top__DOT__e_imm__DOT__Imm_type1 = ((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x1fU)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x14U));
    vlSelf->top__DOT__d_idu__DOT___isaddi_T_2 = ((0x380U 
                                                  & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->top__DOT__c_arbiter__DOT__inst_reg));
    vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid = 
        (((IData)(vlSelf->top__DOT__m_clint__DOT__validReg) 
          & (0U == (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt))) 
         | (IData)(vlSelf->top__DOT__c_arbiter_io_axi_r_valid_mem));
    vlSelf->top__DOT__c_arbiter_io_r_valid_lsu = ((0x103U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2)) 
                                                  | ((0x83U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2)) 
                                                     | ((0x283U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2)) 
                                                        | ((0x203U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2)) 
                                                           | (3U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))))));
    vlSelf->top__DOT__d_idu__DOT___isadd_T_3 = ((0x1fc00U 
                                                 & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0xfU)) 
                                                | (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2));
    vlSelf->top__DOT__d_idu__DOT___issrai_T_3 = ((0xfc00U 
                                                  & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0x10U)) 
                                                 | (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2));
    vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0));
    vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0));
    vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9 
        = (vlSelf->top__DOT__f_gpr__DOT__pc_next_reg 
           + ((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                 >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
              | ((0x1000U & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                             >> 0x13U)) | ((0x800U 
                                            & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 7U)))))));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_13));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_13));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_13));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13));
    vlSelf->top__DOT__c_arbiter__DOT___axi_ar_addr_T_2 
        = (0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg));
    vlSelf->top__DOT__c_arbiter__DOT___state_reg_T_3 
        = (1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg));
    vlSelf->top__DOT__c_arbiter__DOT___state_reg_T_13 
        = (2U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg));
    vlSelf->top__DOT__c_arbiter_io_gpr_r_valid = ((2U 
                                                   == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
                                                  & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid));
    vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid 
        = ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
           & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_r_valid));
    vlSelf->top__DOT__c_arbiter_io_is_r = ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
                                           | ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg)) 
                                              & (IData)(vlSelf->top__DOT__c_arbiter_io_r_valid_lsu)));
    vlSelf->top__DOT__d_idu__DOT___io_pc_next_type_T_19 
        = ((0x203U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
            ? 0U : ((3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                     ? 0U : ((0x33U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                              ? 0U : ((0x3b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                       ? 0U : ((0xb3U 
                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                ? 0U
                                                : (
                                                   (0x42b3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                    ? 0U
                                                    : 
                                                   ((0x2b3U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                     ? 0U
                                                     : 
                                                    ((0x233U 
                                                      == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 0U
                                                      : 
                                                     ((0x333U 
                                                       == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 0U
                                                       : 
                                                      ((0x8033U 
                                                        == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 6U
                                                         : 
                                                        ((0x2e3U 
                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 7U
                                                          : 
                                                         ((0x263U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 9U
                                                           : 
                                                          ((0x363U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0xaU
                                                            : 
                                                           ((0x3e3U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 8U
                                                             : 
                                                            ((0xe3U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 5U
                                                              : 
                                                             ((0x1b3U 
                                                               == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 0U
                                                               : 
                                                              ((0x133U 
                                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 0U
                                                                : 
                                                               ((0x193U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0x113U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 3U))))))))))))))))))));
    vlSelf->top__DOT__d_idu__DOT___io_rd_T_12 = (0x1fU 
                                                 & ((0x283U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 7U)
                                                     : 
                                                    ((0x203U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 7U)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 
                                                      (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 7U)
                                                       : 
                                                      ((0x33U 
                                                        == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 7U)
                                                        : 
                                                       ((0x3b3U 
                                                         == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                         ? 
                                                        (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 7U)
                                                         : 
                                                        ((0xb3U 
                                                          == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 
                                                         (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 7U)
                                                          : 
                                                         ((0x42b3U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                           ? 
                                                          (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 7U)
                                                           : 
                                                          ((0x2b3U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                            ? 
                                                           (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 7U)
                                                            : 
                                                           ((0x233U 
                                                             == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 7U)
                                                             : 
                                                            ((0x333U 
                                                              == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 7U)
                                                              : 
                                                             ((0x8033U 
                                                               == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 
                                                              (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 7U)
                                                               : 
                                                              ((0x1b3U 
                                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 
                                                               (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 7U)
                                                                : 
                                                               ((0x133U 
                                                                 == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                 ? 
                                                                (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                 >> 7U)
                                                                 : 0U))))))))))))));
    vlSelf->top__DOT__d_idu__DOT___io_data_control_T_19 
        = ((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
            ? 2U : ((0x283U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                     ? 2U : ((0x203U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                              ? 2U : ((3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                       ? 2U : ((0x33U 
                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                ? 3U
                                                : (
                                                   (0x3b3U 
                                                    == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                    ? 3U
                                                    : 
                                                   ((0xb3U 
                                                     == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 3U
                                                     : 
                                                    ((0x42b3U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                      ? 3U
                                                      : 
                                                     ((0x2b3U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                       ? 3U
                                                       : 
                                                      ((0x233U 
                                                        == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 3U
                                                        : 
                                                       ((0x333U 
                                                         == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                         ? 3U
                                                         : 
                                                        ((0x8033U 
                                                          == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 3U
                                                          : 
                                                         ((0x63U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x2e3U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x263U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0x363U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x3e3U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 0U
                                                               : 
                                                              ((0xe3U 
                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x133U 
                                                                 == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                 ? 3U
                                                                 : 
                                                                ((0x1b3U 
                                                                  == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                  ? 3U
                                                                  : 0U))))))))))))))))))));
    if ((0x42b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x2b3U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x233U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x333U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x8033U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x63U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x2e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x263U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x363U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x3e3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0xe3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x1b3U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x133U == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)) {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else {
        vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12 
            = (0x1fU & 0U);
        vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12 
            = (0x1fU & 0U);
    }
    vlSelf->top__DOT__d_idu__DOT___io_imm_type_T_18 
        = ((0xf3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
            ? 6U : ((0x173U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                     ? 6U : ((0x4293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                              ? 5U : ((0x293U == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                       ? 5U : ((0x93U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                ? 5U
                                                : (
                                                   (0x193U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 1U
                                                    : 
                                                   ((0x113U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 1U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                      ? 2U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                       ? 2U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                        ? 3U
                                                        : 
                                                       ((0x67U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 3U
                                                         : 
                                                        ((0x123U 
                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 4U
                                                          : 
                                                         ((0x23U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 4U
                                                           : 
                                                          ((0xa3U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 4U
                                                            : 
                                                           ((0x103U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 1U
                                                             : 
                                                            ((0x83U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 1U
                                                              : 
                                                             ((0x283U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 1U
                                                               : 
                                                              ((0x203U 
                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 1U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 1U
                                                                 : 0U)))))))))))))))))));
    vlSelf->top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0 
        = __Vdly__top__DOT__m_clint__DOT__delayCnt_prng__DOT__state_0;
    vlSelf->top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0 
        = __Vdly__top__DOT__g_mem__DOT__delayCnt_prng__DOT__state_0;
    vlSelf->top__DOT__d_idu_io_pc_next_type = ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                ? 1U
                                                : (
                                                   (0x67U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                      ? 0U
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 0U
                                                       : 
                                                      ((0x213U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x313U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 0U
                                                         : 
                                                        ((0x393U 
                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 0U
                                                          : 
                                                         ((0xf3U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x173U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x4293U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                             ? 0U
                                                             : 
                                                            ((0x293U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                              ? 0U
                                                              : 
                                                             ((0x93U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                               ? 0U
                                                               : 
                                                              ((0x123U 
                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x23U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0xa3U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x100073U 
                                                                   == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)
                                                                   ? 4U
                                                                   : 
                                                                  ((0x73U 
                                                                    == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)
                                                                    ? 0xbU
                                                                    : 
                                                                   ((0x30200073U 
                                                                     == vlSelf->top__DOT__c_arbiter__DOT__inst_reg)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((0x103U 
                                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x83U 
                                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x283U 
                                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                        ? 0U
                                                                        : (IData)(vlSelf->top__DOT__d_idu__DOT___io_pc_next_type_T_19)))))))))))))))))))))));
    vlSelf->top__DOT__d_idu__DOT___io_rd_T_24 = (0x1fU 
                                                 & ((0x173U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 7U)
                                                     : 
                                                    ((0x4293U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 7U)
                                                      : 
                                                     ((0x293U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                       ? 
                                                      (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 7U)
                                                       : 
                                                      ((0x93U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                        ? 
                                                       (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 7U)
                                                        : 
                                                       ((0x193U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 7U)
                                                         : 
                                                        ((0x113U 
                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 
                                                         (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 7U)
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                           ? 
                                                          (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 7U)
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                            ? 
                                                           (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 7U)
                                                            : 
                                                           ((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                             ? 
                                                            (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 7U)
                                                             : 
                                                            ((0x67U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 
                                                             (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 7U)
                                                              : 
                                                             ((0x103U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 
                                                              (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 7U)
                                                               : 
                                                              ((0x83U 
                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 
                                                               (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 7U)
                                                                : (IData)(vlSelf->top__DOT__d_idu__DOT___io_rd_T_12))))))))))))));
    vlSelf->top__DOT__d_idu_io_data_control = ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                ? 1U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 1U
                                                     : 
                                                    ((0x123U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 0U
                                                      : 
                                                     ((0x23U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 0U
                                                       : 
                                                      ((0xa3U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x103U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 2U
                                                         : (IData)(vlSelf->top__DOT__d_idu__DOT___io_data_control_T_19))))))));
    vlSelf->top__DOT__d_idu_io_rs2 = (0x1fU & ((0x123U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                ? (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0x14U)
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0x14U)
                                                    : 
                                                   ((0xa3U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x33U 
                                                      == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)
                                                      : 
                                                     ((0x3b3U 
                                                       == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0x14U)
                                                       : 
                                                      ((0xb3U 
                                                        == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0x14U)
                                                        : (IData)(vlSelf->top__DOT__d_idu__DOT___io_rs2_T_12))))))));
    vlSelf->top__DOT__d_idu__DOT___io_rs1_T_25 = (0x1fU 
                                                  & ((0x113U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x67U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 
                                                      (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x123U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 
                                                       (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x23U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 0xfU)
                                                         : 
                                                        ((0xa3U 
                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 
                                                         (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0xfU)
                                                          : 
                                                         ((0x103U 
                                                           == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 
                                                          (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0xfU)
                                                           : 
                                                          ((0x83U 
                                                            == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 
                                                           (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 0xfU)
                                                            : 
                                                           ((0x283U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 
                                                            (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 0xfU)
                                                             : 
                                                            ((0x203U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 
                                                             (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 0xfU)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 
                                                              (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 0xfU)
                                                               : 
                                                              ((0x33U 
                                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 
                                                               (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 0xfU)
                                                                : 
                                                               ((0x3b3U 
                                                                 == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                 ? 
                                                                (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                 >> 0xfU)
                                                                 : 
                                                                ((0xb3U 
                                                                  == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                  ? 
                                                                 (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                  >> 0xfU)
                                                                  : (IData)(vlSelf->top__DOT__d_idu__DOT___io_rs1_T_12)))))))))))))));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_12));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_12));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_12));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12));
    vlSelf->io_is_unknown_instruction = (3U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type));
    if ((0x13U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_ALU_ctrl = 0U;
        vlSelf->top__DOT__d_idu_io_imm_type = 1U;
    } else if ((0x213U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_ALU_ctrl = 4U;
        vlSelf->top__DOT__d_idu_io_imm_type = 1U;
    } else if ((0x313U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_ALU_ctrl = 3U;
        vlSelf->top__DOT__d_idu_io_imm_type = 1U;
    } else if ((0x393U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_ALU_ctrl = 6U;
        vlSelf->top__DOT__d_idu_io_imm_type = 1U;
    } else {
        vlSelf->top__DOT__d_idu_io_ALU_ctrl = ((0xf3U 
                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 0xbU
                                                : (
                                                   (0x173U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 0xcU
                                                    : 
                                                   ((0x4293U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x293U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                      ? 9U
                                                      : 
                                                     ((0x93U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                       ? 8U
                                                       : 
                                                      ((0x193U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 2U
                                                        : 
                                                       ((0x113U 
                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 0xaU
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                          ? 0U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                           ? 0U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__c_arbiter__DOT__inst_reg))
                                                            ? 0U
                                                            : 
                                                           ((0x67U 
                                                             == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0x123U 
                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x23U 
                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 0U
                                                               : 
                                                              ((0xa3U 
                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 0U
                                                                : 
                                                               ((0x103U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 0U
                                                                 : 
                                                                ((0x83U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x283U 
                                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x203U 
                                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x33U 
                                                                      == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                      ? 0U
                                                                      : 
                                                                     ((0x3b3U 
                                                                       == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                       ? 6U
                                                                       : 
                                                                      ((0xb3U 
                                                                        == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                        ? 8U
                                                                        : 
                                                                       ((0x42b3U 
                                                                         == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                                         ? 5U
                                                                         : 
                                                                        ((0x2b3U 
                                                                          == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                                          ? 9U
                                                                          : 
                                                                         ((0x233U 
                                                                           == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                           ? 4U
                                                                           : 
                                                                          ((0x333U 
                                                                            == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                            ? 3U
                                                                            : 
                                                                           ((0x8033U 
                                                                             == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                             ? 1U
                                                                             : 
                                                                            ((0x63U 
                                                                              == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                              ? 0U
                                                                              : 
                                                                             ((0x2e3U 
                                                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                               ? 0U
                                                                               : 
                                                                              ((0x263U 
                                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                                ? 0U
                                                                                : 
                                                                               ((0x363U 
                                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x3e3U 
                                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xe3U 
                                                                                == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x133U 
                                                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x1b3U 
                                                                                == vlSelf->top__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))))))));
        vlSelf->top__DOT__d_idu_io_imm_type = vlSelf->top__DOT__d_idu__DOT___io_imm_type_T_18;
    }
    vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid 
        = ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
            ? (IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)
            : (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_aw_valid));
    Vtop___024root____Vdpiimwrap_top__DOT__j_pc_next__DOT__ecall_read_TOP(vlSelf->top__DOT__f_gpr__DOT__pc_next_reg, (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type), vlSelf->__Vfunc_top__DOT__j_pc_next__DOT__ecall_read__3__Vfuncout);
    if ((0x13U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU));
    } else if ((0x213U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU));
    } else if ((0x313U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU));
    } else if ((0x393U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU));
    } else if ((0xf3U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU));
    } else {
        vlSelf->top__DOT__d_idu_io_rd = (0x1fU & (IData)(vlSelf->top__DOT__d_idu__DOT___io_rd_T_24));
        vlSelf->top__DOT__d_idu_io_rs1 = (0x1fU & (
                                                   (0x173U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x4293U 
                                                     == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                     ? 
                                                    (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x293U 
                                                      == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x93U 
                                                       == (IData)(vlSelf->top__DOT__d_idu__DOT___issrai_T_3))
                                                       ? 
                                                      (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x193U 
                                                        == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 
                                                       (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0xfU)
                                                        : (IData)(vlSelf->top__DOT__d_idu__DOT___io_rs1_T_25)))))));
    }
    vlSelf->top__DOT__j_pc_next__DOT__ecall_dnpc = vlSelf->__Vfunc_top__DOT__j_pc_next__DOT__ecall_read__3__Vfuncout;
    vlSelf->top__DOT__f_gpr__DOT___GEN_53 = ((0x15U 
                                              == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_21
                                              : ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_20
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_19
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_18
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_17
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_16
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_15
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_13
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                          ? vlSelf->top__DOT__f_gpr__DOT__regs_12
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                           ? vlSelf->top__DOT__f_gpr__DOT__regs_11
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                            ? vlSelf->top__DOT__f_gpr__DOT__regs_10
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                             ? vlSelf->top__DOT__f_gpr__DOT__regs_9
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_8
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                               ? vlSelf->top__DOT__f_gpr__DOT__regs_7
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                ? vlSelf->top__DOT__f_gpr__DOT__regs_6
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                 ? vlSelf->top__DOT__f_gpr__DOT__regs_5
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_4
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_3
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_2
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_1
                                                                     : vlSelf->top__DOT__f_gpr__DOT__regs_0)))))))))))))))))))));
    vlSelf->top__DOT__c_arbiter_io_imm = ((1U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                           ? vlSelf->top__DOT__e_imm__DOT__Imm_type1
                                           : ((2U == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                               ? (0xfffff000U 
                                                  & vlSelf->top__DOT__c_arbiter__DOT__inst_reg)
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                                    ? 
                                                   ((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0x1fU)
                                                       ? 0xfffffU
                                                       : 0U) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 7U))))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0x14U))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_imm_type))
                                                      ? 
                                                     (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)
                                                      : 0U))))));
    vlSelf->top__DOT__f_gpr__DOT___GEN_85 = ((0x15U 
                                              == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_21
                                              : ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_20
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_19
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_18
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_17
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_16
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_15
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_13
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                          ? vlSelf->top__DOT__f_gpr__DOT__regs_12
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                           ? vlSelf->top__DOT__f_gpr__DOT__regs_11
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                            ? vlSelf->top__DOT__f_gpr__DOT__regs_10
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                             ? vlSelf->top__DOT__f_gpr__DOT__regs_9
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_8
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                               ? vlSelf->top__DOT__f_gpr__DOT__regs_7
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                ? vlSelf->top__DOT__f_gpr__DOT__regs_6
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                 ? vlSelf->top__DOT__f_gpr__DOT__regs_5
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_4
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_3
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_2
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_1
                                                                     : vlSelf->top__DOT__f_gpr__DOT__regs_0)))))))))))))))))))));
    vlSelf->top__DOT__f_gpr_io_rdata_rs2 = ((0x1fU 
                                             == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                             ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                                             : ((0x1eU 
                                                 == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                 ? vlSelf->top__DOT__f_gpr__DOT__regs_30
                                                 : 
                                                ((0x1dU 
                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rs2))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_22
                                                         : vlSelf->top__DOT__f_gpr__DOT___GEN_53))))))))));
    vlSelf->top__DOT__f_gpr__DOT___GEN_21 = ((0x15U 
                                              == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_21
                                              : ((0x14U 
                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_20
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_19
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_18
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_17
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_16
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_15
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_13
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                          ? vlSelf->top__DOT__f_gpr__DOT__regs_12
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                           ? vlSelf->top__DOT__f_gpr__DOT__regs_11
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                            ? vlSelf->top__DOT__f_gpr__DOT__regs_10
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                             ? vlSelf->top__DOT__f_gpr__DOT__regs_9
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_8
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                               ? vlSelf->top__DOT__f_gpr__DOT__regs_7
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                ? vlSelf->top__DOT__f_gpr__DOT__regs_6
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                 ? vlSelf->top__DOT__f_gpr__DOT__regs_5
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_4
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_3
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_2
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_1
                                                                     : vlSelf->top__DOT__f_gpr__DOT__regs_0)))))))))))))))))))));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_11));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_11));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_11));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_11));
    vlSelf->top__DOT__f_gpr__DOT___GEN_94 = ((0x1eU 
                                              == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                              ? vlSelf->top__DOT__f_gpr__DOT__regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                  ? vlSelf->top__DOT__f_gpr__DOT__regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rd))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_22
                                                         : vlSelf->top__DOT__f_gpr__DOT___GEN_85)))))))));
    vlSelf->top__DOT__h_data_control__DOT___io_data_2_T 
        = ((3U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))
            ? vlSelf->top__DOT__f_gpr_io_rdata_rs2 : vlSelf->top__DOT__c_arbiter_io_imm);
    vlSelf->top__DOT__c_arbiter_io_rs1_data = ((0x1fU 
                                                == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                ? vlSelf->top__DOT__f_gpr__DOT__regs_31
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__regs_30
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                     ? vlSelf->top__DOT__f_gpr__DOT__regs_29
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                      ? vlSelf->top__DOT__f_gpr__DOT__regs_28
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                       ? vlSelf->top__DOT__f_gpr__DOT__regs_27
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                        ? vlSelf->top__DOT__f_gpr__DOT__regs_26
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                         ? vlSelf->top__DOT__f_gpr__DOT__regs_25
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                          ? vlSelf->top__DOT__f_gpr__DOT__regs_24
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                           ? vlSelf->top__DOT__f_gpr__DOT__regs_23
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->top__DOT__d_idu_io_rs1))
                                                            ? vlSelf->top__DOT__f_gpr__DOT__regs_22
                                                            : vlSelf->top__DOT__f_gpr__DOT___GEN_21))))))))));
    if ((2U == (IData)(vlSelf->top__DOT__d_idu_io_data_control))) {
        vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0 = 0U;
        vlSelf->top__DOT__h_data_control_io_data_2 = 0U;
    } else {
        vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0 
            = (0x1fU & vlSelf->top__DOT__h_data_control__DOT___io_data_2_T);
        vlSelf->top__DOT__h_data_control_io_data_2 
            = vlSelf->top__DOT__h_data_control__DOT___io_data_2_T;
    }
    vlSelf->top__DOT__j_pc_next__DOT__is_eql = (vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                                == vlSelf->top__DOT__f_gpr_io_rdata_rs2);
    vlSelf->top__DOT__c_arbiter__DOT___axi_ar_addr_T 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->top__DOT__c_arbiter_io_rs1_data)) 
                             + (QData)((IData)(vlSelf->top__DOT__c_arbiter_io_imm))));
    vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr = 
        ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
          ? vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
         [0U] : (IData)(vlSelf->top__DOT__c_arbiter__DOT___axi_ar_addr_T));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_10));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_10));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_10));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10));
    vlSelf->top__DOT__f_gpr_io_pc_next = (((0xbU == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)) 
                                           | (0xcU 
                                              == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type)))
                                           ? vlSelf->top__DOT__j_pc_next__DOT__ecall_dnpc
                                           : ((1U == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                               ? (vlSelf->top__DOT__f_gpr__DOT__pc_next_reg 
                                                  + 
                                                  ((((vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x1fU)
                                                      ? 0x7ffU
                                                      : 0U) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->top__DOT__c_arbiter__DOT__inst_reg) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->top__DOT__c_arbiter__DOT__inst_reg 
                                                                  >> 0x14U)))))))
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                                      + vlSelf->top__DOT__e_imm__DOT__Imm_type1))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                    ? vlSelf->top__DOT__f_gpr__DOT__pc_next_reg
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                                      ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__j_pc_next__DOT__is_eql)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)
                                                       : vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                       ? 
                                                      (VL_GTES_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                                        ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                        ? 
                                                       ((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                                         >= vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                                         ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                                         : 
                                                        ((IData)(4U) 
                                                         + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                         ? 
                                                        (VL_LTS_III(32, vlSelf->top__DOT__c_arbiter_io_rs1_data, vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                                          ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                                          : 
                                                         ((IData)(4U) 
                                                          + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->top__DOT__d_idu_io_pc_next_type))
                                                          ? 
                                                         ((vlSelf->top__DOT__c_arbiter_io_rs1_data 
                                                           < vlSelf->top__DOT__f_gpr_io_rdata_rs2)
                                                           ? vlSelf->top__DOT__j_pc_next__DOT___beq_result_T_9
                                                           : 
                                                          ((IData)(4U) 
                                                           + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg))
                                                          : 
                                                         ((IData)(4U) 
                                                          + vlSelf->top__DOT__f_gpr__DOT__pc_next_reg)))))))))));
    vlSelf->top__DOT__c_arbiter__DOT__axi_aw_addr = 
        ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
          ? (IData)(vlSelf->top__DOT__c_arbiter__DOT___axi_ar_addr_T)
          : 0U);
    vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2 
        = ((0xa0000048U == vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr) 
           | (0xa000004cU == vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_9));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_9));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_9));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_9));
    if (vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2) {
        vlSelf->top__DOT__c_arbiter__DOT__delay_cnt 
            = vlSelf->top__DOT__m_clint__DOT__delayCnt;
        vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem = 0x80000000U;
        vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem = 0U;
    } else {
        vlSelf->top__DOT__c_arbiter__DOT__delay_cnt 
            = vlSelf->top__DOT__g_mem__DOT__delayCnt;
        vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem 
            = vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr;
        vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem 
            = ((0U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                ? 6U : ((1U == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                         ? ((0x103U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                             ? 1U : ((0x83U == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                      ? 3U : ((0x283U 
                                               == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                               ? 4U
                                               : ((0x203U 
                                                   == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 5U
                                                    : 0U)))))
                         : 0U));
    }
    vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint 
        = ((0xa0000048U == ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                             ? vlSelf->top__DOT__c_arbiter__DOT__axi_ar_addr
                             : 0x80000000U)) ? (IData)(vlSelf->top__DOT__m_clint__DOT__mem_data_Reg)
            : (IData)((vlSelf->top__DOT__m_clint__DOT__mem_data_Reg 
                       >> 0x20U)));
    Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__mem_data_read_TOP(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem, vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem, vlSelf->__Vfunc_top__DOT__g_mem__DOT__mem_data_read__1__Vfuncout);
    Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__addr_read_TOP(vlSelf->top__DOT__c_arbiter_io_axi_ar_addr_mem, vlSelf->__Vfunc_top__DOT__g_mem__DOT__addr_read__0__Vfuncout);
    vlSelf->top__DOT__g_mem__DOT__read_data = ((6U 
                                                == (IData)(vlSelf->top__DOT__c_arbiter_io_axi_ar_strb_mem))
                                                ? vlSelf->__Vfunc_top__DOT__g_mem__DOT__addr_read__0__Vfuncout
                                                : vlSelf->__Vfunc_top__DOT__g_mem__DOT__mem_data_read__1__Vfuncout);
    vlSelf->top__DOT__h_data_control_io_data_1 = ((1U 
                                                   == (IData)(vlSelf->top__DOT__d_idu_io_data_control))
                                                   ? vlSelf->top__DOT__f_gpr__DOT__pc_next_reg
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__d_idu_io_data_control))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__c_arbiter__DOT__state_reg))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)
                                                      ? vlSelf->top__DOT__c_arbiter_io_axi_r_data_clint
                                                      : vlSelf->top__DOT__g_mem__DOT__mem_data_Reg)
                                                     : 0U)
                                                    : vlSelf->top__DOT__c_arbiter_io_rs1_data));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_8));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_8));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_8));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_8));
    vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1 
        = (1U & ((vlSelf->top__DOT__h_data_control_io_data_1 
                  >> 0x1fU) ^ ((2U != (IData)(vlSelf->top__DOT__d_idu_io_data_control)) 
                               & (vlSelf->top__DOT__h_data_control__DOT___io_data_2_T 
                                  >> 0x1fU))));
    Vtop___024root____Vdpiimwrap_top__DOT__i_alu__DOT__csr_read_TOP(vlSelf->top__DOT__h_data_control_io_data_1, vlSelf->top__DOT__h_data_control_io_data_2, (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl), vlSelf->__Vfunc_top__DOT__i_alu__DOT__csr_read__2__Vfuncout);
    vlSelf->top__DOT__i_alu__DOT__csr_data = vlSelf->__Vfunc_top__DOT__i_alu__DOT__csr_read__2__Vfuncout;
    vlSelf->top__DOT__i_alu__DOT___out33_T_47 = ((0x1ffffffffULL 
                                                  & ((((((((1U 
                                                            & ((IData)(1U) 
                                                               << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                                            + (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2)))
                                                            : 0ULL) 
                                                          | ((2U 
                                                              & ((IData)(1U) 
                                                                 << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                                              - (QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_2)))
                                                              : 0ULL)) 
                                                         | ((4U 
                                                             & ((IData)(1U) 
                                                                << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                             ? (QData)((IData)(
                                                                               (vlSelf->top__DOT__h_data_control_io_data_1 
                                                                                < vlSelf->top__DOT__h_data_control_io_data_2)))
                                                             : 0ULL)) 
                                                        | ((8U 
                                                            & ((IData)(1U) 
                                                               << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                            ? (QData)((IData)(
                                                                              (vlSelf->top__DOT__h_data_control_io_data_1 
                                                                               | vlSelf->top__DOT__h_data_control_io_data_2)))
                                                            : 0ULL)) 
                                                       | ((0x10U 
                                                           & ((IData)(1U) 
                                                              << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                           ? (QData)((IData)(
                                                                             (vlSelf->top__DOT__h_data_control_io_data_1 
                                                                              ^ vlSelf->top__DOT__h_data_control_io_data_2)))
                                                           : 0ULL)) 
                                                      | ((0x20U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                          ? (QData)((IData)(
                                                                            VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__h_data_control_io_data_1, (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))))
                                                          : 0ULL)) 
                                                     | ((0x40U 
                                                         & ((IData)(1U) 
                                                            << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                         ? (QData)((IData)(
                                                                           (vlSelf->top__DOT__h_data_control_io_data_1 
                                                                            & vlSelf->top__DOT__h_data_control_io_data_2)))
                                                         : 0ULL))) 
                                                 | ((0x100U 
                                                     & ((IData)(1U) 
                                                        << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                     ? 
                                                    (0x7fffffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->top__DOT__h_data_control_io_data_1)) 
                                                        << (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0)))
                                                     : 0ULL));
    vlSelf->top__DOT__i_alu__DOT__out33 = ((vlSelf->top__DOT__i_alu__DOT___out33_T_47 
                                            | ((0x200U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                                ? (QData)((IData)(
                                                                  (vlSelf->top__DOT__h_data_control_io_data_1 
                                                                   >> (IData)(vlSelf->top__DOT__i_alu__DOT____VdfgTmp_h0a48505b__0))))
                                                : 0ULL)) 
                                           | ((0x400U 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)))
                                               ? (QData)((IData)(
                                                                 VL_LTS_III(32, vlSelf->top__DOT__h_data_control_io_data_1, vlSelf->top__DOT__h_data_control_io_data_2)))
                                               : 0ULL));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7));
    vlSelf->io_carry = (1U & (IData)((vlSelf->top__DOT__i_alu__DOT__out33 
                                      >> 0x20U)));
    vlSelf->top__DOT__f_gpr_io_wdata_rd = ((1U & ((0x1fU 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)) 
                                                      >> 0xbU)) 
                                                  | (0xfU 
                                                     & (((IData)(1U) 
                                                         << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)) 
                                                        >> 0xcU))))
                                            ? vlSelf->top__DOT__i_alu__DOT__csr_data
                                            : (IData)(vlSelf->top__DOT__i_alu__DOT__out33));
    vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T 
        = (1U & ((vlSelf->top__DOT__h_data_control_io_data_1 
                  >> 0x1fU) ^ (IData)((vlSelf->top__DOT__i_alu__DOT__out33 
                                       >> 0x1fU))));
    vlSelf->io_isoverflow = ((((IData)(1U) << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)) 
                              & ((~ (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1)) 
                                 & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T))) 
                             | (0x7fffU & ((((IData)(1U) 
                                             << (IData)(vlSelf->top__DOT__d_idu_io_ALU_ctrl)) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T) 
                                              & (IData)(vlSelf->top__DOT__i_alu__DOT___overflowAddBool_T_1)))));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_4));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_4));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_4));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_3));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_3));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_3));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_2));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_2));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_2));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_1));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_1));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_1));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0));
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0));
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0));
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0));
    vlSelf->top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0 
        = __Vdly__top__DOT__l_uart__DOT__canAccept_prng__DOT__state_0;
    vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0 
        = __Vdly__top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0;
    vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0 
        = __Vdly__top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0;
    vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0 
        = __Vdly__top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0;
    vlSelf->top__DOT__m_clint__DOT___startDelay_T = 
        ((IData)(vlSelf->top__DOT__m_clint__DOT__canAccept_prng__DOT__state_0) 
         & ((IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2) 
            & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid)));
    vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
           & (IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0));
    vlSelf->top__DOT__g_mem__DOT___startDelay_T = ((IData)(vlSelf->top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0) 
                                                   & ((~ (IData)(vlSelf->top__DOT__c_arbiter__DOT___delay_cnt_T_2)) 
                                                      & (IData)(vlSelf->top__DOT__c_arbiter__DOT__axi_ar_valid)));
    vlSelf->top__DOT__g_mem__DOT___validReg_T_4 = (
                                                   (~ 
                                                    ((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top__DOT__g_mem__DOT__delayCnt)))) 
                                                   & (IData)(vlSelf->top__DOT__g_mem__DOT__validReg));
    vlSelf->top__DOT__m_clint__DOT___validReg_T_3 = 
        ((~ ((IData)(vlSelf->top__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
             & (0U == (IData)(vlSelf->top__DOT__m_clint__DOT__delayCnt)))) 
         & (IData)(vlSelf->top__DOT__m_clint__DOT__validReg));
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
