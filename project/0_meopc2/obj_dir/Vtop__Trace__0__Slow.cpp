// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+135,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+139,"ALU_ctrl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+140,"rs1_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"rs2_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"ALU_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"ALU_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ysyx_25030077_top ");
    tracep->declBit(c+135,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+139,"ALU_ctrl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+140,"rs1_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"rs2_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"ALU_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"ALU_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_Pc_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"Pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"instruction_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"imm_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+5,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+6,"rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+7,"data_control",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+8,"pc_next_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+9,"is_break_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"ALU_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"ALU_data_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"ALU_data_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"is_unknown_instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBit(c+135,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"io_next_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_Pc_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+1,"instruction_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"instruction_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+3,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"io_imm_type",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+5,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+6,"io_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+138,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+7,"io_data_control",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+139,"io_ALU_ctrl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+8,"io_pc_next_type",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+9,"is_break_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"addi_Rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+16,"addi_Rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+17,"sltu_Rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+18,"isaddi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"isxori",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"isori",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"isandi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"issrai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"issrli",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"isslli",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"issra",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"issrl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"isbeq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"isbne",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"isadd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"isxor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"isand",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"isor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"issub",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"islui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"isauipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"isjal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"isjalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"issw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"isbge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"isblt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"isbltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"isbgeu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"issb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"issh",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"islbu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"islb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"islw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"islh",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"islhu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"issll",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"isslt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"issltu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"issltiu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"isslti",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"iscsrrw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"iscsrrs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"isebreak",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"isecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"ismret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+3,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"io_imm_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+137,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"Imm_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"Imm_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+62,"Imm_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+63,"Imm_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"Imm_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+65,"is_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"is_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"is_type3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"is_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"is_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"is_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+135,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+138,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+10,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"io_raddr_rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+140,"io_rdata_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"io_raddr_rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+141,"io_rdata_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"regs_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"regs_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,"regs_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,"regs_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,"regs_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,"regs_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,"regs_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,"regs_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,"regs_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,"regs_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,"regs_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,"regs_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,"regs_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,"regs_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,"regs_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,"regs_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,"regs_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"regs_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,"regs_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,"regs_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,"regs_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,"regs_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,"regs_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,"regs_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,"regs_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,"regs_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,"regs_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,"regs_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,"regs_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,"regs_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,"regs_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,"regs_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,"isReg0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+140,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"io_mem_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_pc_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"io_data_control",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+12,"io_data_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"io_data_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"control1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"control2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"control3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+12,"io_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"io_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+139,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+10,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+106,"csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"oneHot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declQuad(c+107,"addResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+109,"subResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBit(c+111,"sltiuResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"sltResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+113,"andResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"orResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"xorResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"sraiResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"srliResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+118,"sllResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+140,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_pc_next_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"io_pc_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"io_pc_next",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"io_is_unknown_instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+120,"ecall_dnpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"default_pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+122,"is_type1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"is_type2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"is_type4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"is_type5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"is_type6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"is_type7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"is_type8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"is_type9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"is_type10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"is_type11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"is_eql",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"is_more_equ",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"is_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"is_more_equ_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"is_less_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"beq_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+150,"bge_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"blt_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+152,"bltu_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"bgeu_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"bne_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i8 ");
    tracep->declBit(c+135,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_Pc_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+9,"is_break_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"is_unknown_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i9 ");
    tracep->declBus(c+3,"io_instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+140,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"imm_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"mem_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030077_top__DOT__i0__DOT__state),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030077_top__DOT__Pc_next),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030077_top__DOT__instruction_out),32);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25030077_top__DOT__imm_type),3);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25030077_top__DOT__rs1),5);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25030077_top__DOT__rs2),5);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25030077_top__DOT__data_control),3);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25030077_top__DOT__pc_next_type),4);
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25030077_top__DOT__is_break_out));
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25030077_top__DOT__ALU_result),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25030077_top__DOT__mem_data),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030077_top__DOT__ALU_data_1),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25030077_top__DOT__ALU_data_2),32);
    bufp->fullBit(oldp+14,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                       >> 7U))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+18,((0x13U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+19,((0x213U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+20,((0x313U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+21,((0x393U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+22,((0x4293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
    bufp->fullBit(oldp+23,((0x293U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
    bufp->fullBit(oldp+24,((0x93U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
    bufp->fullBit(oldp+25,((0x42b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
    bufp->fullBit(oldp+26,((0x2b3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___issrai_T_3))));
    bufp->fullBit(oldp+27,((0x63U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+28,((0xe3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+29,((0x33U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+30,((0x233U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+31,((0x3b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+32,((0x333U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+33,((0x8033U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+34,((0x37U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
    bufp->fullBit(oldp+35,((0x17U == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
    bufp->fullBit(oldp+36,((0x6fU == (0x7fU & vlSelf->ysyx_25030077_top__DOT__instruction_out))));
    bufp->fullBit(oldp+37,((0x67U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+38,((0x123U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+39,((0x2e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+40,((0x263U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+41,((0x363U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+42,((0x3e3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+43,((0x23U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+44,((0xa3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+45,((0x203U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+46,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+47,((0x103U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+48,((0x83U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+49,((0x283U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+50,((0xb3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+51,((0x133U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+52,((0x1b3U == vlSelf->ysyx_25030077_top__DOT__i2__DOT___isadd_T_3)));
    bufp->fullBit(oldp+53,((0x193U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+54,((0x113U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+55,((0xf3U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+56,((0x173U == (IData)(vlSelf->ysyx_25030077_top__DOT__i2__DOT___isaddi_T_2))));
    bufp->fullBit(oldp+57,((0x100073U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
    bufp->fullBit(oldp+58,((0x73U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
    bufp->fullBit(oldp+59,((0x30200073U == vlSelf->ysyx_25030077_top__DOT__instruction_out)));
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25030077_top__DOT__i3__DOT__Imm_type1),32);
    bufp->fullIData(oldp+61,((0xfffff000U & vlSelf->ysyx_25030077_top__DOT__instruction_out)),32);
    bufp->fullIData(oldp+62,(((((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+63,((0x1fU & (vlSelf->ysyx_25030077_top__DOT__instruction_out 
                                       >> 0x14U))),32);
    bufp->fullIData(oldp+64,((vlSelf->ysyx_25030077_top__DOT__instruction_out 
                              >> 0x14U)),32);
    bufp->fullBit(oldp+65,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullBit(oldp+66,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullBit(oldp+67,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullBit(oldp+68,((4U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullBit(oldp+69,((5U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullBit(oldp+70,((6U == (IData)(vlSelf->ysyx_25030077_top__DOT__imm_type))));
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_0),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_1),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_2),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_3),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_4),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_5),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_6),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_7),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_8),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_9),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_10),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_11),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_12),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_13),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_14),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_15),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_16),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_17),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_18),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_19),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_20),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_21),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_22),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_23),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_24),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_25),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_26),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_27),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_28),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_29),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_30),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030077_top__DOT__i4__DOT__regs_31),32);
    bufp->fullBit(oldp+103,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
    bufp->fullBit(oldp+104,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
    bufp->fullBit(oldp+105,((3U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))));
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__csr_data),32);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__addResult),33);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_25030077_top__DOT__i6__DOT__subResult),33);
    bufp->fullBit(oldp+111,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                             < vlSelf->ysyx_25030077_top__DOT__ALU_data_2)));
    bufp->fullBit(oldp+112,(VL_LTS_III(32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2)));
    bufp->fullIData(oldp+113,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                               & vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
    bufp->fullIData(oldp+114,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                               | vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
    bufp->fullIData(oldp+115,((vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                               ^ vlSelf->ysyx_25030077_top__DOT__ALU_data_2)),32);
    bufp->fullIData(oldp+116,(((0x1fU >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_25030077_top__DOT__ALU_data_1, vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                : (- (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                      >> 0x1fU)))),32);
    bufp->fullIData(oldp+117,(((0x1fU >= vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                ? (vlSelf->ysyx_25030077_top__DOT__ALU_data_1 
                                   >> vlSelf->ysyx_25030077_top__DOT__ALU_data_2)
                                : 0U)),32);
    bufp->fullQData(oldp+118,((0x7fffffffffffffffULL 
                               & ((QData)((IData)(vlSelf->ysyx_25030077_top__DOT__ALU_data_1)) 
                                  << ((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__data_control))
                                       ? 0U : (0x1fU 
                                               & vlSelf->ysyx_25030077_top__DOT__i5__DOT___io_data_2_T))))),63);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25030077_top__DOT__i7__DOT__ecall_dnpc),32);
    bufp->fullIData(oldp+121,(((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)),32);
    bufp->fullBit(oldp+122,((1U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+123,((2U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+124,((4U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+125,((5U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+126,((6U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+127,((7U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+128,((8U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+129,((9U == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+130,((0xaU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type))));
    bufp->fullBit(oldp+131,(((0xbU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)) 
                             | (0xcU == (IData)(vlSelf->ysyx_25030077_top__DOT__pc_next_type)))));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql));
    bufp->fullIData(oldp+133,(((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->fullIData(oldp+134,(((IData)(vlSelf->ysyx_25030077_top__DOT__i7__DOT__is_eql)
                                ? ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state)
                                : vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9)),32);
    bufp->fullBit(oldp+135,(vlSelf->clock));
    bufp->fullBit(oldp+136,(vlSelf->reset));
    bufp->fullIData(oldp+137,(vlSelf->imm),32);
    bufp->fullCData(oldp+138,(vlSelf->rd),5);
    bufp->fullCData(oldp+139,(vlSelf->ALU_ctrl),4);
    bufp->fullIData(oldp+140,(vlSelf->rs1_out),32);
    bufp->fullIData(oldp+141,(vlSelf->rs2_out),32);
    bufp->fullBit(oldp+142,(vlSelf->ALU_carry));
    bufp->fullBit(oldp+143,(vlSelf->ALU_overflow));
    bufp->fullBit(oldp+144,((0U == (IData)(vlSelf->rd))));
    bufp->fullSData(oldp+145,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ALU_ctrl)))),16);
    bufp->fullBit(oldp+146,(VL_GTES_III(32, vlSelf->rs1_out, vlSelf->rs2_out)));
    bufp->fullBit(oldp+147,(VL_LTS_III(32, vlSelf->rs1_out, vlSelf->rs2_out)));
    bufp->fullBit(oldp+148,((vlSelf->rs1_out >= vlSelf->rs2_out)));
    bufp->fullBit(oldp+149,((vlSelf->rs1_out < vlSelf->rs2_out)));
    bufp->fullIData(oldp+150,((VL_GTES_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->fullIData(oldp+151,((VL_LTS_III(32, vlSelf->rs1_out, vlSelf->rs2_out)
                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->fullIData(oldp+152,(((vlSelf->rs1_out < vlSelf->rs2_out)
                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
    bufp->fullIData(oldp+153,(((vlSelf->rs1_out >= vlSelf->rs2_out)
                                ? vlSelf->ysyx_25030077_top__DOT__i7__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelf->ysyx_25030077_top__DOT__i0__DOT__state))),32);
}
