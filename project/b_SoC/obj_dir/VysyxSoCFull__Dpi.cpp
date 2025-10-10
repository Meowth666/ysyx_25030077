// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VysyxSoCFull::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull.h"

#ifndef VL_DPIDECL_dnpc_read_data_
#define VL_DPIDECL_dnpc_read_data_
int dnpc_read_data() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1634:16
    return VysyxSoCFull::dnpc_read_data();
}
#endif

#ifndef VL_DPIDECL_pc_read_data_
#define VL_DPIDECL_pc_read_data_
int pc_read_data() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:111:16
    return VysyxSoCFull::pc_read_data();
}
#endif

#ifndef VL_DPIDECL_reg_read_addr_
#define VL_DPIDECL_reg_read_addr_
int reg_read_addr() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:867:16
    return VysyxSoCFull::reg_read_addr();
}
#endif

#ifndef VL_DPIDECL_reg_read_data_
#define VL_DPIDECL_reg_read_data_
int reg_read_data() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:872:16
    return VysyxSoCFull::reg_read_data();
}
#endif

#ifndef VL_DPIDECL_reg_read_rs1_
#define VL_DPIDECL_reg_read_rs1_
int reg_read_rs1() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1556:16
    return VysyxSoCFull::reg_read_rs1();
}
#endif

#ifndef VL_DPIDECL_reg_read_rs2_
#define VL_DPIDECL_reg_read_rs2_
int reg_read_rs2() {
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1561:16
    return VysyxSoCFull::reg_read_rs2();
}
#endif

