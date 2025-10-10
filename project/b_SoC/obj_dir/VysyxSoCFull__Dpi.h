// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1634:16
    extern int dnpc_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:111:16
    extern int pc_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:867:16
    extern int reg_read_addr();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:872:16
    extern int reg_read_data();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1556:16
    extern int reg_read_rs1();
    // DPI export at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1561:16
    extern int reg_read_rs2();

    // DPI IMPORTS
    // DPI import at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1578:37
    extern svBitVecVal csr_read(const svBitVecVal* rs1, const svBitVecVal* imm, const svBitVecVal* sw);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/project/b_SoC/vsrc/ysyx_25030077.v:1637:37
    extern svBitVecVal ecall_read(const svBitVecVal* pc, const svBitVecVal* type_p);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5706:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
