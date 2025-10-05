// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i0__DOT__pc_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &pc_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i0__DOT__pc_read_data_TOP\n"); );
    // Init
    // Body
    pc_read_data__Vfuncrtn = vlSymsp->TOP.ysyx_25030077_top__DOT__i0__DOT__state;
}

extern "C" svBitVecVal addr_read(const svBitVecVal* pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i1__DOT__addr_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ &addr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i1__DOT__addr_read_TOP\n"); );
    // Body
    svBitVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    svBitVecVal addr_read__Vfuncrtn__Vcvt[1];
    addr_read__Vfuncrtn__Vcvt[0] = addr_read(pc__Vcvt);
    addr_read__Vfuncrtn = VL_SET_I_SVBV(addr_read__Vfuncrtn__Vcvt);
}

extern "C" svBit is_break(const svBitVecVal* instruction_in);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i2__DOT__is_break_TOP(IData/*31:0*/ instruction_in, CData/*0:0*/ &is_break__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i2__DOT__is_break_TOP\n"); );
    // Body
    svBitVecVal instruction_in__Vcvt[1];
    for (size_t instruction_in__Vidx = 0; instruction_in__Vidx < 1; ++instruction_in__Vidx) VL_SET_SVBV_I(32, instruction_in__Vcvt + 1 * instruction_in__Vidx, instruction_in);
    svBit is_break__Vfuncrtn__Vcvt;
    is_break__Vfuncrtn__Vcvt = is_break(instruction_in__Vcvt);
    is_break__Vfuncrtn = (1U & is_break__Vfuncrtn__Vcvt);
}

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i4__DOT__reg_read_addr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i4__DOT__reg_read_addr_TOP\n"); );
    // Init
    // Body
    reg_read_addr__Vfuncrtn = vlSymsp->TOP.rd;
}

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i4__DOT__reg_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i4__DOT__reg_read_data_TOP\n"); );
    // Init
    // Body
    reg_read_data__Vfuncrtn = vlSymsp->TOP.ysyx_25030077_top__DOT__ALU_result;
}

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i5__DOT__reg_read_rs1_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i5__DOT__reg_read_rs1_TOP\n"); );
    // Init
    // Body
    reg_read_rs1__Vfuncrtn = vlSymsp->TOP.rs1_out;
}

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i5__DOT__reg_read_rs2_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i5__DOT__reg_read_rs2_TOP\n"); );
    // Init
    // Body
    reg_read_rs2__Vfuncrtn = vlSymsp->TOP.rs2_out;
}

extern "C" svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i6__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i6__DOT__csr_read_TOP\n"); );
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

void Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i7__DOT__dnpc_read_data_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &dnpc_read_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_ysyx_25030077_top__DOT__i7__DOT__dnpc_read_data_TOP\n"); );
    // Init
    // Body
    dnpc_read_data__Vfuncrtn = vlSymsp->TOP.ysyx_25030077_top__DOT__Pc_next;
}

extern "C" svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i7__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i7__DOT__ecall_read_TOP\n"); );
    // Body
    svBitVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    svBitVecVal type_p__Vcvt[1];
    for (size_t type_p__Vidx = 0; type_p__Vidx < 1; ++type_p__Vidx) VL_SET_SVBV_I(4, type_p__Vcvt + 1 * type_p__Vidx, type_p);
    svBitVecVal ecall_read__Vfuncrtn__Vcvt[1];
    ecall_read__Vfuncrtn__Vcvt[0] = ecall_read(pc__Vcvt, type_p__Vcvt);
    ecall_read__Vfuncrtn = VL_SET_I_SVBV(ecall_read__Vfuncrtn__Vcvt);
}

extern "C" svBitVecVal mem_data_read(const svBitVecVal* instruction_in, const svBitVecVal* rs1_data_in, const svBitVecVal* rs2_data_in, const svBitVecVal* imm_data_in);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i9__DOT__mem_data_read_TOP(IData/*31:0*/ instruction_in, IData/*31:0*/ rs1_data_in, IData/*31:0*/ rs2_data_in, IData/*31:0*/ imm_data_in, IData/*31:0*/ &mem_data_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_ysyx_25030077_top__DOT__i9__DOT__mem_data_read_TOP\n"); );
    // Body
    svBitVecVal instruction_in__Vcvt[1];
    for (size_t instruction_in__Vidx = 0; instruction_in__Vidx < 1; ++instruction_in__Vidx) VL_SET_SVBV_I(32, instruction_in__Vcvt + 1 * instruction_in__Vidx, instruction_in);
    svBitVecVal rs1_data_in__Vcvt[1];
    for (size_t rs1_data_in__Vidx = 0; rs1_data_in__Vidx < 1; ++rs1_data_in__Vidx) VL_SET_SVBV_I(32, rs1_data_in__Vcvt + 1 * rs1_data_in__Vidx, rs1_data_in);
    svBitVecVal rs2_data_in__Vcvt[1];
    for (size_t rs2_data_in__Vidx = 0; rs2_data_in__Vidx < 1; ++rs2_data_in__Vidx) VL_SET_SVBV_I(32, rs2_data_in__Vcvt + 1 * rs2_data_in__Vidx, rs2_data_in);
    svBitVecVal imm_data_in__Vcvt[1];
    for (size_t imm_data_in__Vidx = 0; imm_data_in__Vidx < 1; ++imm_data_in__Vidx) VL_SET_SVBV_I(32, imm_data_in__Vcvt + 1 * imm_data_in__Vidx, imm_data_in);
    svBitVecVal mem_data_read__Vfuncrtn__Vcvt[1];
    mem_data_read__Vfuncrtn__Vcvt[0] = mem_data_read(instruction_in__Vcvt, rs1_data_in__Vcvt, rs2_data_in__Vcvt, imm_data_in__Vcvt);
    mem_data_read__Vfuncrtn = VL_SET_I_SVBV(mem_data_read__Vfuncrtn__Vcvt);
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
