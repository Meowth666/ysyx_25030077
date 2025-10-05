// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


int Vtop::pc_read_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::pc_read_data\n"); );
    // Init
    IData/*31:0*/ pc_read_data__Vfuncrtn__Vcvt;
    pc_read_data__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("pc_read_data");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_pc_read_data_t __Vcb = (Vtop__Vcb_pc_read_data_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), pc_read_data__Vfuncrtn__Vcvt);
    int pc_read_data__Vfuncrtn;
    for (size_t pc_read_data__Vfuncrtn__Vidx = 0; pc_read_data__Vfuncrtn__Vidx < 1; ++pc_read_data__Vfuncrtn__Vidx) pc_read_data__Vfuncrtn = pc_read_data__Vfuncrtn__Vcvt;
    return pc_read_data__Vfuncrtn;
}

int Vtop::reg_read_addr() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::reg_read_addr\n"); );
    // Init
    IData/*31:0*/ reg_read_addr__Vfuncrtn__Vcvt;
    reg_read_addr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_reg_read_addr_t __Vcb = (Vtop__Vcb_reg_read_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), reg_read_addr__Vfuncrtn__Vcvt);
    int reg_read_addr__Vfuncrtn;
    for (size_t reg_read_addr__Vfuncrtn__Vidx = 0; reg_read_addr__Vfuncrtn__Vidx < 1; ++reg_read_addr__Vfuncrtn__Vidx) reg_read_addr__Vfuncrtn = reg_read_addr__Vfuncrtn__Vcvt;
    return reg_read_addr__Vfuncrtn;
}

int Vtop::reg_read_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::reg_read_data\n"); );
    // Init
    IData/*31:0*/ reg_read_data__Vfuncrtn__Vcvt;
    reg_read_data__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_data");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_reg_read_data_t __Vcb = (Vtop__Vcb_reg_read_data_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), reg_read_data__Vfuncrtn__Vcvt);
    int reg_read_data__Vfuncrtn;
    for (size_t reg_read_data__Vfuncrtn__Vidx = 0; reg_read_data__Vfuncrtn__Vidx < 1; ++reg_read_data__Vfuncrtn__Vidx) reg_read_data__Vfuncrtn = reg_read_data__Vfuncrtn__Vcvt;
    return reg_read_data__Vfuncrtn;
}

int Vtop::reg_read_rs1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::reg_read_rs1\n"); );
    // Init
    IData/*31:0*/ reg_read_rs1__Vfuncrtn__Vcvt;
    reg_read_rs1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_rs1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_reg_read_rs1_t __Vcb = (Vtop__Vcb_reg_read_rs1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), reg_read_rs1__Vfuncrtn__Vcvt);
    int reg_read_rs1__Vfuncrtn;
    for (size_t reg_read_rs1__Vfuncrtn__Vidx = 0; reg_read_rs1__Vfuncrtn__Vidx < 1; ++reg_read_rs1__Vfuncrtn__Vidx) reg_read_rs1__Vfuncrtn = reg_read_rs1__Vfuncrtn__Vcvt;
    return reg_read_rs1__Vfuncrtn;
}

int Vtop::reg_read_rs2() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::reg_read_rs2\n"); );
    // Init
    IData/*31:0*/ reg_read_rs2__Vfuncrtn__Vcvt;
    reg_read_rs2__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("reg_read_rs2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_reg_read_rs2_t __Vcb = (Vtop__Vcb_reg_read_rs2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), reg_read_rs2__Vfuncrtn__Vcvt);
    int reg_read_rs2__Vfuncrtn;
    for (size_t reg_read_rs2__Vfuncrtn__Vidx = 0; reg_read_rs2__Vfuncrtn__Vidx < 1; ++reg_read_rs2__Vfuncrtn__Vidx) reg_read_rs2__Vfuncrtn = reg_read_rs2__Vfuncrtn__Vcvt;
    return reg_read_rs2__Vfuncrtn;
}

int Vtop::dnpc_read_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::dnpc_read_data\n"); );
    // Init
    IData/*31:0*/ dnpc_read_data__Vfuncrtn__Vcvt;
    dnpc_read_data__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("dnpc_read_data");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_dnpc_read_data_t __Vcb = (Vtop__Vcb_dnpc_read_data_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), dnpc_read_data__Vfuncrtn__Vcvt);
    int dnpc_read_data__Vfuncrtn;
    for (size_t dnpc_read_data__Vfuncrtn__Vidx = 0; dnpc_read_data__Vfuncrtn__Vidx < 1; ++dnpc_read_data__Vfuncrtn__Vidx) dnpc_read_data__Vfuncrtn = dnpc_read_data__Vfuncrtn__Vcvt;
    return dnpc_read_data__Vfuncrtn;
}
