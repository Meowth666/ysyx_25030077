// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"

void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__pc_read_data_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &pc_read_data__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__reg_read_addr_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_addr__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__reg_read_data_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_data__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control__DOT__reg_read_rs1_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs1__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control__DOT__reg_read_rs2_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &reg_read_rs2__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__dnpc_read_data_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ &dnpc_read_data__Vfuncrtn);

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(795);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__b_ifu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.b_ifu", "b_ifu", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__f_gpr.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.f_gpr", "f_gpr", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__h_data_control.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.h_data_control", "h_data_control", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__j_pc_next.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.j_pc_next", "j_pc_next", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__cpu__cpu__b_ifu.exportInsert(__Vfinal, "pc_read_data", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__pc_read_data_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__f_gpr.exportInsert(__Vfinal, "reg_read_addr", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__reg_read_addr_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__f_gpr.exportInsert(__Vfinal, "reg_read_data", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__reg_read_data_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__h_data_control.exportInsert(__Vfinal, "reg_read_rs1", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control__DOT__reg_read_rs1_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__h_data_control.exportInsert(__Vfinal, "reg_read_rs2", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control__DOT__reg_read_rs2_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__j_pc_next.exportInsert(__Vfinal, "dnpc_read_data", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__dnpc_read_data_TOP));
    }
}
