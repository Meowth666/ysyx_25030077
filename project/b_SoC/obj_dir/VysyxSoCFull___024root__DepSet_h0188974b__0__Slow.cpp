// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf);
VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_static__TOP(vlSelf);
    VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static__TOP\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/meowth/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5552, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h6395c309_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h0c66fcd6_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h008dd838_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h0edf0ddd_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = (((vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata 
             << 0x18U) | (0xff0000U & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U))) | (
                                                   (0xff00U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata 
                                                       >> 8U)) 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 0x18U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_3 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___io_axi_ar_addr_T_2 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_14 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ_reset 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__validReg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___validReg_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__validReg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.__Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_h6395c309_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx5 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h0c66fcd6_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.__Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h008dd838_0
        [vlSelfRef.__Vtableidx7][0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h008dd838_0
        [vlSelfRef.__Vtableidx7][1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h008dd838_0
        [vlSelfRef.__Vtableidx7][2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                                & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                    & ((- (IData)(
                                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                      >> 0xdU)))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                         >> 0xdU)))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_h8f7dbce9_0_0 
        = ((0x80U & ((~ (0U != (0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                     << 7U)) | (0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h0edf0ddd_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    if ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hcfbced4b_0_0 
            = ((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hcfbced4b_0_0 = 8U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg 
           + ((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                 >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
              | (((0x1000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                              >> 0x13U)) | (0x800U 
                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                               << 4U))) 
                 | ((0x7e0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                               >> 0x14U)) | (0x1eU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                >> 7U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wdata 
        = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1] 
                   >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wstrb 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__e_imm__DOT__Imm_type1 
        = ((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
            >> 0x14U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_awaddr 
        = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1] 
                   >> 0xbU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_araddr 
        = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1] 
                   >> 0xbU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2 
        = ((0x380U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                      >> 5U)) | (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset = 
        (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_h8f7dbce9_0_0) 
                        - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.externalPins_uart_tx = (IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                               >> 4U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0xcU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x11U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len = 0U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0xcU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x11U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x39U))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h98a21ba3_0_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x39U))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hef2bfb69_0_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_r_valid_lsu 
        = ((0x103U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2)) 
           | ((0x83U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2)) 
              | ((0x283U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2)) 
                 | ((0x203U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2)) 
                    | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3 
        = ((0x1fc00U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3 
        = ((0xfc00U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                       >> 0x10U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    if ((0x13U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x213U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 4U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x313U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x393U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 6U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0xf3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0xbU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 6U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x173U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0xcU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 6U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x4293U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 5U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x293U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 9U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x93U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 8U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x193U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 2U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x113U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0xaU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 7U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else {
        if ((0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 2U;
        } else if ((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 2U;
        } else if ((0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 3U;
        } else if ((0x67U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 3U;
        } else {
            if ((0x123U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 4U;
            } else if ((0x23U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 4U;
            } else if ((0xa3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 4U;
            } else if ((0x103U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x83U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x283U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x203U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
            } else if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 1U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl 
                    = ((0x33U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                        ? 0U : ((0x3b3U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                 ? 6U : ((0xb3U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                          ? 8U : ((0x42b3U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                   ? 5U
                                                   : 
                                                  ((0x2b3U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                    ? 9U
                                                    : 
                                                   ((0x233U 
                                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 4U
                                                     : 
                                                    ((0x333U 
                                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 3U
                                                      : 
                                                     ((0x8033U 
                                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 1U
                                                       : 
                                                      ((0x63U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x2e3U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 0U
                                                         : 
                                                        ((0x263U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 0U
                                                          : 
                                                         ((0x363U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x3e3U 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0xe3U 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0x133U 
                                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 0xaU
                                                              : 
                                                             ((0x1b3U 
                                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 2U
                                                               : 0U))))))))))))))));
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = 0U;
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd 
                = (0x1fU & ((0x103U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                >> 7U) : ((0x83U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                              >> 7U)
                                           : ((0x283U 
                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U)
                                               : ((0x203U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 7U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 7U)
                                                    : 
                                                   ((0x33U 
                                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 7U)
                                                     : 
                                                    ((0x3b3U 
                                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 7U)
                                                      : 
                                                     ((0xb3U 
                                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 7U)
                                                       : 
                                                      ((0x42b3U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 7U)
                                                        : 
                                                       ((0x2b3U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 7U)
                                                         : 
                                                        ((0x233U 
                                                          == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 7U)
                                                          : 
                                                         ((0x333U 
                                                           == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 7U)
                                                           : 
                                                          ((0x8033U 
                                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 7U)
                                                            : 
                                                           ((0x1b3U 
                                                             == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 7U)
                                                             : 
                                                            ((0x133U 
                                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 7U)
                                                              : 0U))))))))))))))));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 
            = (0x1fU & ((0x67U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                            >> 0xfU) : ((0x123U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                            >> 0xfU)
                                         : ((0x23U 
                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0xfU)
                                             : ((0xa3U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                 >> 0xfU)
                                                 : 
                                                ((0x103U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0xfU)
                                                  : 
                                                 ((0x83U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x283U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x203U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0xfU)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x33U 
                                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x3b3U 
                                                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0xfU)
                                                        : 
                                                       ((0xb3U 
                                                         == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 0xfU)
                                                         : 
                                                        ((0x42b3U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0xfU)
                                                          : 
                                                         ((0x2b3U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0xfU)
                                                           : 
                                                          ((0x233U 
                                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 0xfU)
                                                            : 
                                                           ((0x333U 
                                                             == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 0xfU)
                                                             : 
                                                            ((0x8033U 
                                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 0xfU)
                                                              : 
                                                             ((0x63U 
                                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 0xfU)
                                                               : 
                                                              ((0x2e3U 
                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 0xfU)
                                                                : 
                                                               ((0x263U 
                                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                 >> 0xfU)
                                                                 : 
                                                                ((0x363U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 
                                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                  >> 0xfU)
                                                                  : 
                                                                 ((0x3e3U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 
                                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                   >> 0xfU)
                                                                   : 
                                                                  ((0xe3U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 
                                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                    >> 0xfU)
                                                                    : 
                                                                   ((0x1b3U 
                                                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                     ? 
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                     >> 0xfU)
                                                                     : 
                                                                    ((0x133U 
                                                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                      ? 
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                      >> 0xfU)
                                                                      : 0U))))))))))))))))))))))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))
            ? 1U : ((0x67U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                     ? 2U : ((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))
                              ? 0U : ((0x37U == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))
                                       ? 0U : ((0x13U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 0U
                                                : (
                                                   (0x213U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 0U
                                                    : 
                                                   ((0x313U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 0U
                                                     : 
                                                    ((0x393U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 0U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 0U
                                                       : 
                                                      ((0x173U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x4293U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                         ? 0U
                                                         : 
                                                        ((0x293U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                          ? 0U
                                                          : 
                                                         ((0x93U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                           ? 0U
                                                           : 
                                                          ((0x123U 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0xa3U 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg)
                                                               ? 4U
                                                               : 
                                                              ((0x73U 
                                                                == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg)
                                                                ? 0xbU
                                                                : 
                                                               ((0x30200073U 
                                                                 == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg)
                                                                 ? 0xcU
                                                                 : 
                                                                ((0x103U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x83U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x283U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x203U 
                                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                     ? 0U
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x33U 
                                                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                       ? 0U
                                                                       : 
                                                                      ((0x3b3U 
                                                                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                        ? 0U
                                                                        : 
                                                                       ((0xb3U 
                                                                         == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                         ? 0U
                                                                         : 
                                                                        ((0x42b3U 
                                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x2b3U 
                                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x233U 
                                                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                            ? 0U
                                                                            : 
                                                                           ((0x333U 
                                                                             == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                             ? 0U
                                                                             : 
                                                                            ((0x8033U 
                                                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                              ? 0U
                                                                              : 
                                                                             ((0x63U 
                                                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                               ? 6U
                                                                               : 
                                                                              ((0x2e3U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                ? 7U
                                                                                : 
                                                                               ((0x263U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x363U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x3e3U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0xe3U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x1b3U 
                                                                                == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x133U 
                                                                                == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x193U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x113U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 3U))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control 
        = ((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))
            ? 1U : ((0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg))
                     ? 1U : ((0x67U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                              ? 1U : ((0x123U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                       ? 0U : ((0x23U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 0U
                                                : (
                                                   (0xa3U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 0U
                                                    : 
                                                   ((0x103U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 2U
                                                     : 
                                                    ((0x83U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 2U
                                                      : 
                                                     ((0x283U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 2U
                                                       : 
                                                      ((0x203U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 2U
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 3U
                                                          : 
                                                         ((0x3b3U 
                                                           == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                           ? 3U
                                                           : 
                                                          ((0xb3U 
                                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 3U
                                                            : 
                                                           ((0x42b3U 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0x2b3U 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0x233U 
                                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 3U
                                                               : 
                                                              ((0x333U 
                                                                == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 3U
                                                                : 
                                                               ((0x8033U 
                                                                 == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                 ? 3U
                                                                 : 
                                                                ((0x63U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x2e3U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x263U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x363U 
                                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x3e3U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                      ? 0U
                                                                      : 
                                                                     ((0xe3U 
                                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x133U 
                                                                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                        ? 3U
                                                                        : 
                                                                       ((0x1b3U 
                                                                         == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                         ? 3U
                                                                         : 0U)))))))))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2 
        = (0x1fU & ((0x123U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U) : ((0x23U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                      ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                         >> 0x14U) : 
                                     ((0xa3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                          >> 0x14U)
                                       : ((0x33U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                              >> 0x14U)
                                           : ((0x3b3U 
                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x14U)
                                               : ((0xb3U 
                                                   == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x42b3U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0x14U)
                                                    : 
                                                   ((0x2b3U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x233U 
                                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)
                                                      : 
                                                     ((0x333U 
                                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x8033U 
                                                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x63U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x2e3U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x263U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0x14U)
                                                           : 
                                                          ((0x363U 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 0x14U)
                                                            : 
                                                           ((0x3e3U 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 0x14U)
                                                             : 
                                                            ((0xe3U 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 0x14U)
                                                              : 
                                                             ((0x1b3U 
                                                               == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 0x14U)
                                                               : 
                                                              ((0x133U 
                                                                == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 0x14U)
                                                                : 0U))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_strb 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg))
            ? ((0x123U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                ? 1U : ((0x23U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                         ? 3U : ((0xa3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2))
                                  ? 2U : 0U))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_strb)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0xeU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0xeU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_read_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type), vlSelfRef.__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_dnpc 
        = vlSelfRef.__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___GEN_94 
        = ((0x1eU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_30
            : ((0x1dU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_29
                : ((0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_28
                    : ((0x1bU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_27
                        : ((0x1aU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_26
                            : ((0x19U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_25
                                : ((0x18U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_24
                                    : ((0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_23
                                        : ((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_22
                                            : ((0x15U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd))
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_1
                                                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_0))))))))))))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data 
        = ((0x1fU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_31
            : ((0x1eU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_30
                : ((0x1dU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_29
                    : ((0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_28
                        : ((0x1bU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_27
                            : ((0x1aU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_26
                                : ((0x19U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_25
                                    : ((0x18U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_24
                                        : ((0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_23
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_22
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_12
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_11
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_10
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_9
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_8
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_7
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_6
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_5
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_4
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_3
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_2
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2))
                                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_1
                                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_0)))))))))))))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_data 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_imm 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__e_imm__DOT__Imm_type1
            : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
                ? (0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg)
                : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
                    ? 4U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
                             ? ((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                   >> 0x1fU) ? 0xfffffU
                                   : 0U) << 0xcU) | 
                                ((0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                             >> 7U))))
                             : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
                                 ? (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                             >> 0x14U))
                                 : ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type))
                                     ? VL_SHIFTR_III(32,32,32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg, 0x14U)
                                     : 0U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
        = ((0x1fU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_31
            : ((0x1eU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_30
                : ((0x1dU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_29
                    : ((0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_28
                        : ((0x1bU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_27
                            : ((0x1aU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_26
                                : ((0x19U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_25
                                    : ((0x18U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_24
                                        : ((0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_23
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_22
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_12
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_11
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_10
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_9
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_8
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_7
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_6
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_5
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_4
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_3
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_2
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1))
                                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_1
                                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_0)))))))))))))))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_10 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_gpr_r_valid 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control))
            ? 0U : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control))
                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data
                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_imm));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__is_eql 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
           == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT____VdfgRegularize_hf53335a2_0_0 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
           + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_imm);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_addr 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT____VdfgRegularize_hf53335a2_0_0
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x19U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wdata
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___validReg_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_gpr_r_valid));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_valid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__maybe_full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
            [0U];
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_valid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT____VdfgRegularize_hf53335a2_0_0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x19U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr_io_pc_next 
        = (((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type)) 
            | (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type)))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_dnpc
            : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg 
                   + (((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                          >> 0x1fU) ? 0x7ffU : 0U) 
                        << 0x15U) | (0x100000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0xbU))) 
                      | (((0xff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg) 
                          | (0x800U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                       >> 9U))) | (0x7feU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)))))
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                    ? (0xfffffffeU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
                                      + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__e_imm__DOT__Imm_type1))
                    : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg
                        : ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__is_eql)
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg))
                            : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__is_eql)
                                    ? ((IData)(4U) 
                                       + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg)
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9)
                                : ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                                    ? (VL_GTES_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data)
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg))
                                    : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                                        ? ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
                                            >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9
                                            : ((IData)(4U) 
                                               + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg))
                                        : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                                            ? (VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9
                                                : ((IData)(4U) 
                                                   + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg))
                                            : ((0xaU 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type))
                                                ? (
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data 
                                                    < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data)
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg))
                                                : ((IData)(4U) 
                                                   + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wstrb)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_awaddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_araddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 0x18U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))
                     : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hc3fc90ff_0_1 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                     ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                         ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                             ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                   << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                     << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U))) 
                                | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                     << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                             : 0U)) : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                        ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)
                                            ? ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == (((0x20U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1aU)) | ((0x10U & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0x19U)) 
                                           | (8U & 
                                              ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)) 
                                               << 3U)))) 
                  | ((4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0xeU)) | (3U & (2U ^ 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                >> 0xcU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == (((0x20U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1aU)) | ((0x10U & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0x19U)) 
                                           | (8U & 
                                              ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)) 
                                               << 3U)))) 
                  | ((4U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                >> 0x10U)) << 2U)) 
                     | (3U & (1U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0xcU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (0U == ((4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                         >> 0x1dU)) | (3U & (2U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == (((0x20U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                              >> 0x1aU)) | ((0x10U 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                >> 0x19U)) 
                                            | (8U & 
                                               ((~ 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                  >> 0x1cU)) 
                                                << 3U)))) 
                   | ((4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0xeU)) | (3U & (1U 
                                                ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xcU)))))) 
           | (0U == ((4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0x1dU)) | (3U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 
        = (0U == ((4U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                       >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == ((4U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == (((0x20U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0x1aU)) | ((0x10U & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 0x19U)) 
                                           | (8U & 
                                              ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0x1cU)) 
                                               << 3U)))) 
                  | ((4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                            >> 0xeU)) | (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                               >> 0xcU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h98a21ba3_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h139e88fa_0_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hef2bfb69_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w
                     : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                          >> 1U) & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                        >> 2U) & (1U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                          >> 0x10U)
                                       : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                            >> 3U) 
                                           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                              >> 0x18U)
                                           : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                >> 2U) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                  >> 0x10U)
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgRegularize_he9af95ff_0_0 
        = (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h139e88fa_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? (1U & (0x38U >> (7U & ((IData)(7U) 
                                             - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                    : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                           >> 0x14U) : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 0x10U)
                                         : ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0xcU)
                                             : ((0xbU 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 4U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                    >> 4U)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                      >> 4U)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                         >> 0x10U)
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x1cU)
                                                          : 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x18U))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgRegularize_he9af95ff_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgRegularize_he9af95ff_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                             ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [3U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U)) 
                                                | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U]))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                        ? 
                                                       (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                        : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h5651c58d_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]
                   : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_b_id 
        = (0xfU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                        >> 2U) : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                                         : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_id 
        = (0xfU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                     ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                >> 0x23U)) : 0U) | 
                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                      : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1])) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                        >> 3U)) : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                                                  >> 0x18U)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | (0xff0000U 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                                                       >> 0x10U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                     << 0x10U))) 
                                              | ((0xff00U 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                           : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == (((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                           >> 0x1cU)) | (4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                               >> 0x1bU))) 
                   | ((2U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                 >> 0x1cU)) << 1U)) 
                      | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                               >> 0x18U))))) | ((0U 
                                                 == 
                                                 ((8U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                      >> 0x1cU)) 
                                                  | ((6U 
                                                      & (4U 
                                                         ^ 
                                                         (0x1eU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                             >> 0x1bU)))) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                            >> 0x18U)))))) 
                                                | ((0U 
                                                    == 
                                                    ((4U 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                         >> 0x1dU)) 
                                                     | (3U 
                                                        & (~ 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                            >> 0x1cU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((8U 
                                                         & ((~ 
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                              >> 0x1fU)) 
                                                            << 3U)) 
                                                        | ((6U 
                                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                               >> 0x1bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                                 >> 0x18U))))) 
                                                      | (0U 
                                                         == 
                                                         ((4U 
                                                           & ((~ 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                                >> 0x1fU)) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (2U 
                                                                ^ 
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                                 >> 0x1cU)))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1cU)) | ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                   >> 0x18U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == (((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                             >> 0x1bU)) | (0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1aU))))) 
                  | ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                            >> 0x17U)) | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                >> 0xcU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == (((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                           >> 0x1cU)) | (4U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU))) 
                   | ((2U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                 >> 0x1cU)) << 1U)) 
                      | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                               >> 0x18U))))) | ((0U 
                                                 == 
                                                 ((8U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1cU)) 
                                                  | ((6U 
                                                      & (4U 
                                                         ^ 
                                                         (0x1eU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                             >> 0x1bU)))) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                            >> 0x18U)))))) 
                                                | ((0U 
                                                    == 
                                                    ((4U 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                         >> 0x1dU)) 
                                                     | (3U 
                                                        & (~ 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                            >> 0x1cU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((8U 
                                                         & ((~ 
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                              >> 0x1fU)) 
                                                            << 3U)) 
                                                        | ((6U 
                                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                               >> 0x1bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                                 >> 0x18U))))) 
                                                      | (0U 
                                                         == 
                                                         ((4U 
                                                           & ((~ 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                                >> 0x1fU)) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (2U 
                                                                ^ 
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                                 >> 0x1cU)))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1cU)) | ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                       | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x18U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0) 
               & (0xcU == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
              << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0) 
                         & (8U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                        << 2U)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0) 
                                     & (4U == (0x1cU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                    << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))) 
           & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & (0xebU >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((0xeU > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h5651c58d_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h5651c58d_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                      << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                  << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                  << 0xcU))) 
                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                        << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                    << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                    << 8U)))) 
                  | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                        << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                  << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                << 4U))) 
                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                          << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                    << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_b_id)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_h016413a0_0_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg
            : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control))
                ? ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg))
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_data
                    : 0U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == (((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0x1bU)) 
                                | (0xcU & (8U ^ (0x3cU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x1aU))))) 
                               | ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 0x17U)) 
                                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xcU))))) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_hf18be32c_0_0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready) 
            & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hc3fc90ff_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hc3fc90ff_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0)));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_read_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl), vlSelfRef.__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_read__0__Vfuncout);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_data 
        = vlSelfRef.__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_read__0__Vfuncout;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__2__rdata);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__2__rdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h98a21ba3_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                    >> 0xaU))) & ((0x1fffU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xcU)) 
                                                  == 
                                                  vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                                  [
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                      >> 0xaU))]))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w))) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                              [(3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 2U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                                              [(3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_hf18be32c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_hf18be32c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr_io_wdata_rd 
        = ((1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)) 
                   >> 0xbU) | (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)) 
                               >> 0xcU))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_data
            : ((((IData)((0x1ffffffffULL & ((((((((1U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                   ? 
                                                  ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1)) 
                                                   + (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                   : 0ULL) 
                                                 | ((2U 
                                                     & ((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                     ? 
                                                    ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1)) 
                                                     - (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                     : 0ULL)) 
                                                | ((4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                    ? (QData)((IData)(
                                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
                                                                       < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                    : 0ULL)) 
                                               | ((8U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
                                                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                   : 0ULL)) 
                                              | ((0x10U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
                                                                     ^ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                  : 0ULL)) 
                                             | ((0x20U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                 ? (QData)((IData)(
                                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2))))
                                                 : 0ULL)) 
                                            | ((0x40U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                ? (QData)((IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                                                : 0ULL)))) 
                 | (IData)(((0x100U & ((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                             ? (0x7fffffffffffffffULL 
                                & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1)) 
                                   << (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                             : 0ULL))) | (IData)(((0x200U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 
                                                                      >> 
                                                                      (0x1fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2))))
                                                   : 0ULL))) 
               | (IData)(((0x400U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl)))
                           ? (QData)((IData)(VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2)))
                           : 0ULL))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h2a465b85_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                     >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h2a465b85_0_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h2a465b85_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h139e88fa_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hef2bfb69_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid)));
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VysyxSoCFull___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ysyxSoCFull.flash.reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ysyxSoCFull.flash.reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vm_traceActivitySetAll\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->externalPins_gpio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 822586098003852132ull);
    vlSelf->externalPins_gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9685265187411425855ull);
    vlSelf->externalPins_gpio_seg_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6033921801942580967ull);
    vlSelf->externalPins_gpio_seg_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15543389452754430714ull);
    vlSelf->externalPins_gpio_seg_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8772214742636758696ull);
    vlSelf->externalPins_gpio_seg_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5024408221642847872ull);
    vlSelf->externalPins_gpio_seg_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10457141804080140056ull);
    vlSelf->externalPins_gpio_seg_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1959206588904405241ull);
    vlSelf->externalPins_gpio_seg_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16552903033054095957ull);
    vlSelf->externalPins_gpio_seg_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3744180331418777232ull);
    vlSelf->externalPins_ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322331395874519872ull);
    vlSelf->externalPins_ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568837990582422912ull);
    vlSelf->externalPins_vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669989510370052666ull);
    vlSelf->externalPins_vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16026913326201140098ull);
    vlSelf->externalPins_vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9009997286950620541ull);
    vlSelf->externalPins_vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 399868960241165010ull);
    vlSelf->externalPins_vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497527002255972198ull);
    vlSelf->externalPins_vga_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074553774880755048ull);
    vlSelf->externalPins_uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676035079867404527ull);
    vlSelf->externalPins_uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041353987071012103ull);
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14915140927265012661ull);
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16041349806902964228ull);
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8248944707576643516ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13610780874099937537ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4548189990944411054ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9078613124367799379ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12961237128407069427ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10125176276072589511ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4741224938267990243ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6649611255217927795ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1967328018359904520ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7443754582554341790ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12279004985102008196ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7272969324386721012ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17764581687294166180ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18420138009703660780ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849816025895429066ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 896371121956204118ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206628865734012467ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6359756530605182780ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14271049114171626692ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14810925635431801338ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6454394922436568044ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12796353362393025245ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787434090952454215ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 855439592352009461ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9555744520473128401ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 278753863746920536ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14419166760005638791ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5125385737475970409ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10168551254647644173ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3377827047337027182ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 994198827684736325ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17143702493738544640ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16073683613167817271ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4938314804412624777ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11307033004398475784ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12201354375147640365ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17814909152348589265ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498756765392745465ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3431187711007798702ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13714092015705937161ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13093111756788580230ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 47572146136276529ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12768213748704337480ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17513258456127236788ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4051072758425750376ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17864021041516430986ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7805680498968162251ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11235830746091790923ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658560054950520942ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17526560437144829447ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3393430837340798129ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7250057794169710030ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14137180353453477927ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12371602776306043420ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16732132195185580362ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341213997786711994ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16434398046952724194ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3563269164052098949ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2963681955443858240ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6571225419854383562ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1288107315050288894ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12240990893444507741ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13638478115982632082ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4780554314408729930ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068839557577668729ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7375590329779646819ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14724223174483737368ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13365416516706237967ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3157822541154815162ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 56004505433094541ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8875302074141444722ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414864843633969938ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7009079521616304954ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14966372076807508571ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7681931878369164071ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12800062370758272776ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8958504584001429984ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 497969256170367778ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11702659150648301561ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10472374230962728364ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9115639860274268277ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6065777461101299096ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15598386132408594413ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809688067661814664ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952977231017448812ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12590224131652011709ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731192841328853676ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4571767201349482969ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8028095035274583396ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18119668895697990782ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11175712096223920713ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18110534315408998334ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13688728157819931128ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096185075748232421ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5810034107770025606ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16151472106623279573ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7269173802120516662ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8179168145486005160ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1332667195550139830ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8040804325610015456ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13093033782096936808ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8461168094338543612ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16032416069342402221ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16509753485907091183ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 648926207962781432ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15623641971559167843ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2405344046855053905ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14185718108802565441ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15336572752780060700ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8209290309648911765ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15721774493740574775ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7607244324919951844ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1290877814580431955ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15597345488070768758ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10988397908843124608ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3663558912002106282ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2332723522796138009ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3736831915008860905ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5773816443186309972ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9512982202774680720ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1395877360582464357ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144818772886752652ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559831953913311544ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11976317364726092140ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2566675401769774664ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6492156901240734739ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11030473605928244638ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2933452989383600671ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4762239313447921227ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4614261658284015947ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 878837033538196186ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_h016413a0_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5163222763280667081ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10481579300927041085ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12805328318810317667ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16337067301405289343ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004194971991385135ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16187979707699926995ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299548960911003045ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4232904608125852855ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3175503528187380234ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12819272751840872001ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16455864003978930588ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6543179261506565856ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18271895797093669114ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2461390086628368856ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16965956625064718686ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8452366080609895425ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5921579036726220608ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982112740212251292ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11033579665373110908ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3201094416214050859ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14204863322856636356ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12712220376860483060ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_ar_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8775522276933627455ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379650903012624367ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_aw_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9777566260307835002ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17689368803893240600ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_w_strb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1308999631068891691ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 184636778632841727ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7967856738370280707ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_r_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5295578203432095242ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_axi_b_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4643765946448027299ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_gpr_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14246296214528895858ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter_io_r_valid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576748381277342243ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_imm_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 306523518496275394ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7963390790668883610ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17530166746961307733ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4808327703961577919ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_data_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15752000758175250964ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_ALU_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14565955706559398904ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu_io_pc_next_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1133283674244477758ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr_io_pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8395171448814215308ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr_io_wdata_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15629873917373964756ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1077964768320221283ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__h_data_control_io_data_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9231863201777072667ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 252199219274109986ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9561843124994650024ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2149549127018425384ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1647779005478176879ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ifu__DOT__reqQ__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 157959348878256722ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10524996013694294439ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__inst_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6073252030898088663ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT__axi_r_valid_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12051299807339163962ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___io_axi_ar_addr_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908025618838439164ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18193852525129236009ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217695376267645171ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT___state_reg_T_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768502084987454849ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_arbiter__DOT____VdfgRegularize_hf53335a2_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14426677470313656424ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isaddi_T_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2647753249417701698ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___issrai_T_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 591022852106449730ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_idu__DOT___isadd_T_3 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10911821204296977256ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__e_imm__DOT__Imm_type1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 957597160272801464ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15812958581302881861ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6436351013171358833ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8021361470364389675ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12958503669265848570ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11510957550606047003ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2363208973064894606ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11433345478642893339ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1153742169932184324ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13352487973199584270ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14593185169075156864ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17945194075178723876ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2561909960643788015ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17534585904311117032ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11529743585408457570ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2872814137036998632ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7990526116851541471ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4126662722826417480ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11775498423286921456ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8301430293244699166ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15497884559096107137ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6636072744440609212ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1885925524870824183ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10810840314858902093ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16092527733707680949ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2029037582726368606ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11656993429454726837ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14225102644949432494ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12145564319663128823ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10685885176392558500ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 892361812130846310ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10321389082778125665ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__regs_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16413836199872986120ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__validReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13951117938715638997ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__pc_next_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1504115889972502359ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___validReg_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16563837155485341635ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___validReg_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12420969583989422140ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT___GEN_94 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11454310267945657241ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13768039522073106791ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17876787602476604414ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17294918833028139067ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3185781830312275748ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16241900160381228964ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 122226011051788049ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13845660975113599978ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13153956903734839221ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17262704984138084379ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7848779024638773149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10264466123361137909ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3709387358719452363ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3807368835817199297ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1136741416145744761ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6232122512128673062ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__f_gpr__DOT__canAccept_prng__DOT__state_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550957945843539050ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9795219999560692362ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11083329975489861418ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__is_eql = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5959276512855286121ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT___beq_result_T_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 894541581051402797ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13033788369348416214ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8279002765177992667ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7973439793380921464ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3362576136301983541ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1912853507946674515ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9507622762509010920ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h5651c58d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5878691972862113204ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6153696150659865098ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5530670873624331498ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14201087729536647987ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17323297035857021908ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17690719309857141838ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15339423818509910380ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11285925296045053434ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14749552838317982293ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12655196037858776900ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8732786913569568560ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9355521832045061075ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6705106052159450443ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7493971878465669807ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10665451999161420952ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13208739948451518739ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1145907930845772097ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17672646866167387832ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169369890338703026ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17373617661358857822ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10983570921507086028ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8253446057236586104ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10439245026068175157ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7457431983991315740ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17187868845537761281ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778052153580971496ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17917614808734438971ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2641008589538751275ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14659581357365432134ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538218751129900335ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7453293004723842948ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8775209984235383839ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14342166985709694695ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8940918119002111214ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3665987324401635720ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2776405653801186379ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928091978527949490ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4281819867109055574ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1836193077957445915ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11813167559299303961ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3626970473377094371ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6674652973689871446ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9541831527773978489ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4185094383506597132ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8511903596994009500ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8473025268673578701ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14446316492644025341ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1118822777244092971ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16470061601165309754ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2381039654876505304ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14338241211315891204ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9727344697408106173ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11458769218026488005ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10593862783627646880ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17349491014520320085ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1611144502219292720ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14345104015778104614ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18236990204397344097ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7493313165419341159ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10380478955991827723ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12944793020093695717ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5787280186173497290ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2146493117715401311ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15251661017082981836ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14553422579080262176ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17028440313414499677ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1117985299481279656ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 482858176396234175ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2269518751635370848ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554458977464810636ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864716428554147029ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8764233849012002196ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15318288073648484374ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 534170400302337685ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7455463468009510810ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2153307702317635053ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hcfbced4b_0_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17550398892290693864ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hc3fc90ff_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12680238686733550101ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12476174969597178607ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11501164486325110194ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16561138246924530598ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9468723375841145174ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12381818776593276926ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064824482015334682ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14327020401644712149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3818294239447060436ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16168802811320391467ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 478673034439399405ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9972701330377597748ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 43259111172218762ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 974184958911585825ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9091393075887522309ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658168277680740547ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3984450089550346766ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16893356267843195775ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11785561798729695387ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2627948134730931247ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16984052279829859911ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15075649537047318184ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14769286046758185397ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3789046327258029182ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11137629607909256086ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7061453467131867394ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1941642814924739217ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4907915486490751867ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3924149449539338734ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13220556670541824608ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13072600843106414663ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8686219324710793784ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15082704290709390012ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2193327194983548797ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17838488385023262118ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14751037929490091283ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3155311545715598004ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11602408269555448954ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16516502906386107766ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8837657942591094989ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7521576593112293536ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5052958945420467149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10146572693825252799ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11294260370500128182ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432564884743437327ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11005261029888736768ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_hdef393af_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368503693754841054ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1367625807643397836ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8605728188667870799ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13509402527250772927ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data, __VscopeHash, 17278553613131039683ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8772571089858375386ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116086162323690953ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11740984196580702095ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_h8f7dbce9_0_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14565027459147076583ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14736975195518996060ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10377783667152134421ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3386499528997051580ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3346611869214732324ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13736702783227914753ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17356707039984019340ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3191660424530509245ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8063658789279659159ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3808933796636141765ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6528847827508238895ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2502917634964292846ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2116062979467418514ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17523336715519275811ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484655608634025366ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8356068318424794631ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13785755944115522121ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5960865879193134621ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17253544059281812818ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1260725831936186139ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3595917063795483023ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3728745208268460717ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6751150934577673507ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4499632688041916027ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7760555552932490357ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1071068425158391792ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2669505924986820078ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11807885664835712253ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18017074532696778390ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5511592380438660153ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7275749973376791515ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 568807207841617066ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11925275915761126297ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14243174360738975175ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14569567773991113973ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17213899357160430720ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 66307941513230219ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4963255098507059111ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14865427144599758239ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10489875270873961122ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8560830168860449112ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16873440264297938281ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33991726042273841ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13689437425735478176ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9555232347489993527ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12303495971325238862ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12902394236120031931ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10291327083474522834ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6062771928979939495ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9595522036254927838ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4129376720569866110ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16303456661684086253ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17082945119523483295ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h2a465b85_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3586882145736023157ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6036034935544830753ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15056080941481313147ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15670990516452919327ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10104572337671523266ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgRegularize_he9af95ff_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14810744876953633481ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9535174473369175506ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17563513400677972088ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17228729983561817144ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12126873430529600006ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12163761937634974984ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6771740513057168348ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16732836667419132973ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8817919511065199373ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16147725637783723125ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5718123315922473265ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16339167255829253784ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8965760918858270384ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4144299899298413701ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4033816684294930258ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 464758421526384035ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16098577404790854232ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3628490615301720039ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2998294971638130439ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10677900197843663922ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9777891236045659102ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8184342107691414962ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1956962936881721000ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18180423376343194893ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1863262013626352191ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6412846451270623376ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1050128208826602308ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14948197762106228218ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14712603425215600627ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13778383419817129102ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 528127469714009128ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state, __VscopeHash, 11601741937848350572ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7263427075030815277ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8433769756664898341ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10892357228916027692ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8726893160937246967ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7128790682315347798ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16067286699586370302ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9491947882527805221ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3791354793786761150ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5080548494099529668ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10496386610152015955ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17436714118711976155ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6825433896928963705ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7975367515673679555ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11548824351307182687ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15151539166025916944ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075392233139529144ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7886858366499624039ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_hf18be32c_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10425238596756317501ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8632482416944636233ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6726583798002886215ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12416438354632734201ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12675032579103769583ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12710321734809245420ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16244808809453798842ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4376321334907704000ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2316403613468570500ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 2652917725139400228ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15281228468016162149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825561633586710291ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17880321092911995021ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5615161233632299422ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7145376775419453457ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340970570240343218ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17102324944162505165ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5581725123832642133ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7254984941087541192ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8686742387985617990ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9696019808017137207ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 418428587195041337ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17976604087452365482ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16908741203856312398ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11984697406394800110ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1791804236965222415ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 943978527286462146ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12145220461120863578ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 621289029776550455ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16708078665376039902ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9489622568908862319ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162640810978848758ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17982346235819131305ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2455706705334533739ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 424568039132672619ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2595094446126496301ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 14425616114583694185ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13416878199306188899ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8665925955835396613ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16101046672715166808ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10526824291839120251ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10088567452756636071ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619103631091414311ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10229814413562060567ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6969817308685277923ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 10894132174482412848ull);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10755103752482187952ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134799649385233891ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h98a21ba3_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1496250976855617162ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hef2bfb69_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6716179750078468544ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8076757242044314214ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16198904743514466742ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15261367935497290190ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6097042340218912032ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2738293311249286685ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14271633201472055136ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16999249238387603597ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712853154569624149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15322446553463340074ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248311369336544599ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16359502953650563720ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5785801899456928683ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7991993517517369064ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17452490129356309881ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3461343268720312676ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15277613309274360573ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6946210293201835736ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16999790934874935149ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4608482822920603238ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10442289728662565390ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10202219938598222126ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8178837797331780226ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384263350170966163ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13754694726408823825ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10761301952073060338ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 371798103160985293ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8596816167796887459ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7969201618872346928ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7563127506997254872ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5955674513696043875ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16465517520571729795ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17667688535912347168ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15616955784693355710ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2180798896762393762ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11819281162459773860ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3412886975011021090ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2745820256445673167ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14969912104061044894ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3813144117930383465ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15313587335560628642ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9260129330526288187ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9956386555150023897ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11319927188707320045ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700272867496882963ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6183402491817642452ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14907320257041681228ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13193746100981066799ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4986444123485331572ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881720454462029497ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1589047402548987540ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2444259552385550249ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14262984448804542433ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11003202383242570590ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8019337627331635901ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13849531693481755489ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13223658432476059907ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11285914241973962086ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930730459260385474ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15958883183185058338ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8515506517929503651ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15895384078339337190ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17145806876645184681ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10925048597968181738ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13127396282403624855ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13995082818411592427ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15572525773013094474ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10186481768561147234ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13685302732259273372ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17166711664528696678ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7606511478687251255ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14789342457351973492ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9278644013836672210ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9655202825839048911ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713574787284135315ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13510344451121908867ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2086232172158200445ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17947909754779224691ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 996934884088306129ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8976187442261036071ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13133319329624001320ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6381632589603188342ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2591210832703080990ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11618714411732807153ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2211640841968613702ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12102281611322962477ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676422380508599851ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3986704775639950053ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10607534450742932765ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11742790783796005207ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15567314341134400525ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2823749005866528415ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12218051876211465700ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4501690222474438027ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15270441139616113495ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5594818903844048049ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 474304548937760829ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8251428172788884005ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5867826959397107883ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9381690491323650475ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 97005479217570933ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3649101648202276512ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11297501478158147527ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5154522179882238331ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14888896635431681537ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13661697457885540322ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5915090114041899223ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798999443889538896ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9459038586495243481ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15542700342855186397ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16435028876688328495ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8712663282529751201ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7360008086363047623ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16814296688433370843ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4877015608147221626ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11490298706128300437ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2118707061108318368ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17395294159565511601ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15215047972737394540ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866411791488458752ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2888875471521775748ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9229707768643507535ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15680746355552981575ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16374824073091740521ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4012948504910005448ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4081615454256539482ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4638630650017423651ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16850704772280778460ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2796234607592205536ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7669382489140552598ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9586828415941674609ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10619911289949099286ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3690387208074310618ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7853175045006935692ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11058555587138430237ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7480381384825071400ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7669083816086776955ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6550612089092578068ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18035774429547443422ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 956271236628173188ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13305943945210561563ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12760629258909643778ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1719989758232034068ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10204519895180143631ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646273568433711656ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4657075997584659165ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13884024187217992644ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5752343594439897180ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15573271744375574075ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14268319143931549795ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13157792080245545557ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h139e88fa_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7113228349121787944ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 1893180819166824069ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5418242657753185667ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626205411806016371ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13249463036524201774ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 3093557550915173853ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14140667545716772982ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14993774064465549779ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17586411119208927238ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 16729030285495855283ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760111308631639201ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 212985090883021140ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1110134662837967312ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9297023586732672790ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8897139393654856891ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16945134823306666026ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507702638711109632ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535396186600731252ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16340634007397010891ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907800008613875625ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6918688234092363979ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4997435195951905650ull);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17340847184222205885ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2023172170560656281ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11145101228473679300ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 861013569433835070ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14971135916162499522ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5005021231873763630ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12029787562695414567ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5334940939256473900ull);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17904273667337670683ull);
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_alu__DOT__csr_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout = 0;
    vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__2__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18346147990313135308ull);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10438535185804432350ull);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7648193489583869890ull);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14731528648019993795ull);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11276448121929529636ull);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3338486587721849246ull);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16384272918436134077ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5263443023933740679ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
