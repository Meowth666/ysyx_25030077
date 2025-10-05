// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__b_ifu__DOT__pc_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &pc_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__b_ifu__DOT__pc_read_data_TOP\n"); );
    // Init
    // Body
    pc_read_data__Vfuncrtn = vlSymsp->TOP.top__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
        [0U];
}

void Vtop___024root____Vdpiexp_top__DOT__f_gpr__DOT__reg_read_addr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__f_gpr__DOT__reg_read_addr_TOP\n"); );
    // Init
    // Body
    reg_read_addr__Vfuncrtn = vlSymsp->TOP.top__DOT__d_idu_io_rd;
}

void Vtop___024root____Vdpiexp_top__DOT__f_gpr__DOT__reg_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__f_gpr__DOT__reg_read_data_TOP\n"); );
    // Init
    // Body
    reg_read_data__Vfuncrtn = vlSymsp->TOP.top__DOT__f_gpr_io_wdata_rd;
}

extern "C" svBitVecVal mem_data_read(const svBitVecVal* mask, const svBitVecVal* addr_in);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__mem_data_read_TOP(IData/*31:0*/ mask, IData/*31:0*/ addr_in, IData/*31:0*/ &mem_data_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__mem_data_read_TOP\n"); );
    // Body
    svBitVecVal mask__Vcvt[1];
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) VL_SET_SVBV_I(32, mask__Vcvt + 1 * mask__Vidx, mask);
    svBitVecVal addr_in__Vcvt[1];
    for (size_t addr_in__Vidx = 0; addr_in__Vidx < 1; ++addr_in__Vidx) VL_SET_SVBV_I(32, addr_in__Vcvt + 1 * addr_in__Vidx, addr_in);
    svBitVecVal mem_data_read__Vfuncrtn__Vcvt[1];
    mem_data_read__Vfuncrtn__Vcvt[0] = mem_data_read(mask__Vcvt, addr_in__Vcvt);
    mem_data_read__Vfuncrtn = VL_SET_I_SVBV(mem_data_read__Vfuncrtn__Vcvt);
}

extern "C" svBitVecVal addr_read(const svBitVecVal* addr_in);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__addr_read_TOP(IData/*31:0*/ addr_in, IData/*31:0*/ &addr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__g_mem__DOT__addr_read_TOP\n"); );
    // Body
    svBitVecVal addr_in__Vcvt[1];
    for (size_t addr_in__Vidx = 0; addr_in__Vidx < 1; ++addr_in__Vidx) VL_SET_SVBV_I(32, addr_in__Vcvt + 1 * addr_in__Vidx, addr_in);
    svBitVecVal addr_read__Vfuncrtn__Vcvt[1];
    addr_read__Vfuncrtn__Vcvt[0] = addr_read(addr_in__Vcvt);
    addr_read__Vfuncrtn = VL_SET_I_SVBV(addr_read__Vfuncrtn__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__g_mem__DOT__wmask_read_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &wmask_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__g_mem__DOT__wmask_read_TOP\n"); );
    // Init
    // Body
    wmask_read__Vfuncrtn = ((0xa00003f8U == vlSymsp->TOP.top__DOT__c_arbiter__DOT__axi_aw_addr)
                             ? 0U : ((1U == (IData)(vlSymsp->TOP.top__DOT__c_arbiter__DOT__state_reg))
                                      ? ((0x123U == (IData)(vlSymsp->TOP.top__DOT__d_idu__DOT___isaddi_T_2))
                                          ? 1U : ((0x23U 
                                                   == (IData)(vlSymsp->TOP.top__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 3U
                                                   : 
                                                  ((0xa3U 
                                                    == (IData)(vlSymsp->TOP.top__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 2U
                                                    : 0U)))
                                      : 0U));
}

void Vtop___024root____Vdpiexp_top__DOT__g_mem__DOT__valid_read_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &valid_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__g_mem__DOT__valid_read_TOP\n"); );
    // Init
    // Body
    valid_read__Vfuncrtn = ((IData)(vlSymsp->TOP.top__DOT__g_mem__DOT__canAccept_prng__DOT__state_0) 
                            & ((0xa00003f8U != vlSymsp->TOP.top__DOT__c_arbiter__DOT__axi_aw_addr) 
                               & (IData)(vlSymsp->TOP.top__DOT__c_arbiter__DOT__axi_aw_valid)));
}

void Vtop___024root____Vdpiexp_top__DOT__h_data_control__DOT__reg_read_rs1_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__h_data_control__DOT__reg_read_rs1_TOP\n"); );
    // Init
    // Body
    reg_read_rs1__Vfuncrtn = vlSymsp->TOP.top__DOT__c_arbiter_io_rs1_data;
}

void Vtop___024root____Vdpiexp_top__DOT__h_data_control__DOT__reg_read_rs2_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__h_data_control__DOT__reg_read_rs2_TOP\n"); );
    // Init
    // Body
    reg_read_rs2__Vfuncrtn = vlSymsp->TOP.top__DOT__f_gpr_io_rdata_rs2;
}

extern "C" svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__i_alu__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__i_alu__DOT__csr_read_TOP\n"); );
    // Body
    svBitVecVal rs1__Vcvt[1];
    for (size_t rs1__Vidx = 0; rs1__Vidx < 1; ++rs1__Vidx) VL_SET_SVBV_I(32, rs1__Vcvt + 1 * rs1__Vidx, rs1);
    svBitVecVal imm__Vcvt[1];
    for (size_t imm__Vidx = 0; imm__Vidx < 1; ++imm__Vidx) VL_SET_SVBV_I(32, imm__Vcvt + 1 * imm__Vidx, imm);
    svBitVecVal sw__Vcvt[1];
    for (size_t sw__Vidx = 0; sw__Vidx < 1; ++sw__Vidx) VL_SET_SVBV_I(4, sw__Vcvt + 1 * sw__Vidx, sw);
    svBitVecVal csr_read__Vfuncrtn__Vcvt[1];
    csr_read__Vfuncrtn__Vcvt[0] = csr_read(rs1__Vcvt, imm__Vcvt, sw__Vcvt);
    csr_read__Vfuncrtn = VL_SET_I_SVBV(csr_read__Vfuncrtn__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__j_pc_next__DOT__dnpc_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &dnpc_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__j_pc_next__DOT__dnpc_read_data_TOP\n"); );
    // Init
    // Body
    dnpc_read_data__Vfuncrtn = vlSymsp->TOP.top__DOT__f_gpr_io_pc_next;
}

extern "C" svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__j_pc_next__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__j_pc_next__DOT__ecall_read_TOP\n"); );
    // Body
    svBitVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    svBitVecVal type_p__Vcvt[1];
    for (size_t type_p__Vidx = 0; type_p__Vidx < 1; ++type_p__Vidx) VL_SET_SVBV_I(4, type_p__Vcvt + 1 * type_p__Vidx, type_p);
    svBitVecVal ecall_read__Vfuncrtn__Vcvt[1];
    ecall_read__Vfuncrtn__Vcvt[0] = ecall_read(pc__Vcvt, type_p__Vcvt);
    ecall_read__Vfuncrtn = VL_SET_I_SVBV(ecall_read__Vfuncrtn__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
