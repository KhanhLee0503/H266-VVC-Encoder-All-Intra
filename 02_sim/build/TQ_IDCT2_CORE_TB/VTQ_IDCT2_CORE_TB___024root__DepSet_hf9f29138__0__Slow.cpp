// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_IDCT2_CORE_TB.h for the primary calling header

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "VTQ_IDCT2_CORE_TB___024root.h"

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_static(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_final(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_IDCT2_CORE_TB___024root___eval_phase__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_settle(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_IDCT2_CORE_TB.sv", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_IDCT2_CORE_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_base_2.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_8.w_ready)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0;
extern const VlUnpacked<CData/*4:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlWide<28>/*895:0*/ VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0;
extern const VlUnpacked<CData/*1:0*/, 256> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc34802d6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc513c410_0;

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___stl_sequent__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*27:0*/ TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0;
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<8>/*255:0*/ __Vtemp_75;
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data[3U] 
        = (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
           [3U] >> 0xcU);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[4U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[5U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data[6U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[4U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[5U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[6U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[7U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [9U] << 0x1cU) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
           [8U]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[8U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xaU] << 0x18U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [9U] >> 4U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[9U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xbU] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [0xaU] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[0xaU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xcU] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [0xbU] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[0xbU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xdU] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                               [0xcU] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[0xcU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xeU] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [0xdU] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data[0xdU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xfU] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [0xeU] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid) 
           & (1U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid) 
           & (2U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid) 
           & (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_data 
        = (((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_1)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_0)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_data 
        = (((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [0U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [0U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [1U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [1U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [2U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [2U], 1U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [3U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [3U], 1U)));
    vlSelf->__VdfgTmp_hfc67b1af__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(2U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_hfc6ba779__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_hffa8be9b__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[3U] = 0U;
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = ((0xf0000000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U]) 
                                                 | TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0);
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = ((0xfffffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x1cU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = ((0xff000000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 4U));
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = ((0xffffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = ((0xfff00000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 8U));
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = ((0xfffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[3U] = (0xffffU 
                                                 & (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16 
        = ((2U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(2U))) : 0U);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32 
        = ((3U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(3U))) : 0U);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [4U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[4U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [5U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[5U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [6U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[6U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
            [7U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [4U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[4U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [5U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[5U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [6U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[6U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [7U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[7U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [9U] << 0x1cU) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
           [8U]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[8U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xaU] << 0x18U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                [9U] >> 4U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[9U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xbU] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                [0xaU] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xaU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xcU] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                                [0xbU] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xbU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xdU] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                               [0xcU] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xcU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xeU] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                             [0xdU] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xdU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
            [0xfU] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output
                             [0xeU] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                     [0U]))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [3U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [2U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [4U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[4U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [5U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[5U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [6U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[6U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [7U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[7U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [9U] << 0x1cU) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
           [8U]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[8U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xaU] << 0x18U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                [9U] >> 4U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[9U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xbU] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                [0xaU] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xaU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xcU] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                [0xbU] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xbU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xdU] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                               [0xcU] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xcU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xeU] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                             [0xdU] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xdU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0xfU] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                             [0xeU] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xeU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x11U] << 0x1cU) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
           [0x10U]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xfU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x12U] << 0x18U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x11U] >> 4U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x10U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x13U] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x12U] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x11U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x14U] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x13U] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x12U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x15U] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                [0x14U] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x13U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x16U] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [0x15U] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x14U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x17U] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [0x16U] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x15U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x19U] << 0x1cU) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
           [0x18U]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x16U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1aU] << 0x18U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x19U] >> 4U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x17U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1bU] << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x1aU] >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x18U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1cU] << 0x10U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x1bU] >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x19U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1dU] << 0xcU) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                                [0x1cU] >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1aU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1eU] << 8U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [0x1dU] >> 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1bU] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
            [0x1fU] << 4U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output
                              [0x1eU] >> 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_1)) 
                    << 0x1cU) | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_0))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[1U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_2 
            << 0x18U) | (IData)(((((QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_1)) 
                                   << 0x1cU) | (QData)((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_0))) 
                                 >> 0x20U)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[2U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_3 
            << 0x14U) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_2 
                         >> 8U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[3U] 
        = (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_3 
           >> 0xcU);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake 
        = (((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
            | (1U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) 
           & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA_VALID));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8 
        = ((1U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(1U))) : 0U);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
    if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
        [1U]) {
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
            [1U]) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][0U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]));
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & 0U);
        }
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [1U][6U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [2U][0U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [1U][0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][3U]));
    }
    __Vtableidx2 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx2];
    __Vtableidx4 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx4];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx4];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx4];
    __Vtableidx6 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] = 0U;
    if ((2U & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xeU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xcU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][7U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][9U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0xdU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][4U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][4U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0xcU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][5U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][9U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][7U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][2U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][9U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][9U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xbU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xaU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][8U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xcU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][9U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xcU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][4U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][9U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xbU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xdU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][3U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][8U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][3U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xbU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xdU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xcU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][1U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xcU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][1U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][7U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][2U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][9U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][9U]));
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
        }
    } else if ((1U & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][8U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][3U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xbU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][7U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][1U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xaU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xcU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xcU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xbU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xdU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][8U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xeU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][6U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xdU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xbU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][6U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][0xdU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xcU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xeU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xbU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xcU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][5U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][8U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xbU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][2U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xbU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][3U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][6U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xaU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][7U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xcU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xdU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][4U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][6U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][4U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][9U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xaU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xeU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
    }
    __Vtableidx1 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx1];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready = 0U;
    __Vtemp_69[1U] = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]) 
                       | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                          [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                          >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                  ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0xdU) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0xbU) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                     [
                                                                     (0x1fU 
                                                                      & ((IData)(9U) 
                                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                     << 0x10U) 
                                                                    | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(7U) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))))) 
                                        << 0x10U));
    __Vtemp_69[2U] = (((IData)((((QData)((IData)(((
                                                   vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(0xdU) 
                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                   << 0x10U) 
                                                  | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(9U) 
                                                                   << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                               << 0x10U) 
                                                              | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))))) 
                       >> 0x10U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0xdU) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0xbU) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))])))) 
                                             >> 0x20U)) 
                                    << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[0U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
            << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[1U] 
        = __Vtemp_69[1U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[2U] 
        = __Vtemp_69[2U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))])))) 
                                  >> 0x20U)) >> 0x10U));
    __Vtemp_75[5U] = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [(0x1fU & ((IData)(0x15U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
                       | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                          [(0x1fU & ((IData)(0x13U) 
                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                          >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                  ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x1dU) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x1bU) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                     [
                                                                     (0x1fU 
                                                                      & ((IData)(0x19U) 
                                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                     << 0x10U) 
                                                                    | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x17U) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))))) 
                                        << 0x10U));
    __Vtemp_75[6U] = (((IData)((((QData)((IData)(((
                                                   vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(0x1dU) 
                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                   << 0x10U) 
                                                  | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0x19U) 
                                                                   << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                               << 0x10U) 
                                                              | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(0x17U) 
                                                                  << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))))) 
                       >> 0x10U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x1dU) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x1bU) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))])))) 
                                             >> 0x20U)) 
                                    << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[0U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
            << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[1U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(7U) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[2U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(9U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(7U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xbU) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[3U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(0xdU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(0xbU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xfU) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[4U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(0x11U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0x13U) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[5U] 
        = __Vtemp_75[5U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[6U] 
        = __Vtemp_75[6U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[7U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(0x1fU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))])))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[1U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[2U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[3U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[4U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[5U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[6U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[7U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[8U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[9U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xaU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xbU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xcU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xdU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xeU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xeU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xfU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xfU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x10U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x10U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x11U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x11U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x12U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x12U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x13U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x13U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x14U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x14U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x15U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x15U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x16U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x16U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x17U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x17U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x18U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x18U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x19U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x19U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1aU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x1aU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1bU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x1bU];
    vlSelf->__VdfgTmp_hc44095ae__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(7U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc4c6668f__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc4ff97d1__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc42c8e73__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID = (4U 
                                                   == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_LAST = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID) 
                                                  & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
                                                     == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid 
        = ((- (IData)((2U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) 
           & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent)) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required)));
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready 
                = (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid;
        }
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
            = ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid)
                : (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid));
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_READY) 
           & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    __Vtableidx5 = (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                     << 7U) | ((0x40U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & ((3U 
                                                   == 
                                                   vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                                   [4U]) 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc34802d6_0
        [__Vtableidx5];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready = 0U;
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[5U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[9U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xaU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xbU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xdU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xeU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xeU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xfU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xfU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x10U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x10U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x11U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x11U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x12U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x12U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x13U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x13U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x14U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x14U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x15U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x15U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x16U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x16U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x17U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x17U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x18U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x18U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x19U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x19U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1aU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1aU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1bU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1bU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready;
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[5U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[9U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xaU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xbU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xdU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready 
                = (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
        }
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[1U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[3U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[4U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[5U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[6U];
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[1U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
            = ((0xffff0000U & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U]) 
               | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[3U]);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    __Vtableidx3 = (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                     << 6U) | ((0x20U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                                                  [4U] 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc513c410_0
        [__Vtableidx3];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready = 0U;
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready;
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready 
            = (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready 
        = ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready)
            : ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready)
                : (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___stl_comb__TOP__3(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___stl_comb__TOP__3\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
           & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
               << 4U) | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                          << 3U) | ((4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                           << 2U)) 
                                    | ((2U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready)))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake) 
                    & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
                       == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid) 
                 & (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) {
                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 4U;
            }
        } else if ((0x1fU == (0x1fU & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent) 
                                        | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire)) 
                                       | (~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required)))))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) 
             & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat) 
                == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
            = ((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE))
                ? 2U : 1U);
    }
}

void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf);
void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1(VTQ_IDCT2_CORE_TB___024root* vlSelf);
void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2(VTQ_IDCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_stl(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xfULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___stl_comb__TOP__3(vlSelf);
    }
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_triggers__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_IDCT2_CORE_TB___024root___eval_phase__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_IDCT2_CORE_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_IDCT2_CORE_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__act(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_base_2.w_ready)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge TQ_IDCT2_CORE_TB.I_CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge TQ_IDCT2_CORE_TB.I_CLK or negedge TQ_IDCT2_CORE_TB.I_RESETN)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] (32'h1 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] (32'h2 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] (32'h3 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] (32'h4 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] (32'h5 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] (32'h6 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] (32'h7 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([changed] (32'h8 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([changed] (32'h9 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([changed] (32'ha == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([changed] (32'hb == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([changed] (32'hc == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([changed] (32'hd == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([changed] (32'he == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([changed] (32'hf == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([changed] (32'h10 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([changed] (32'h11 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([changed] (32'h12 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([changed] (32'h13 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([changed] (32'h14 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__nba(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_base_2.w_ready)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] TQ_IDCT2_CORE_TB.u_dut.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge TQ_IDCT2_CORE_TB.I_CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge TQ_IDCT2_CORE_TB.I_CLK or negedge TQ_IDCT2_CORE_TB.I_RESETN)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] (32'h1 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] (32'h2 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] (32'h3 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] (32'h4 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] (32'h5 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] (32'h6 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] (32'h7 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([changed] (32'h8 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([changed] (32'h9 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([changed] (32'ha == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([changed] (32'hb == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([changed] (32'hc == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([changed] (32'hd == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([changed] (32'he == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([changed] (32'hf == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([changed] (32'h10 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([changed] (32'h11 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([changed] (32'h12 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([changed] (32'h13 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([changed] (32'h14 == TQ_IDCT2_CORE_TB.r_completed))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___ctor_var_reset(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_LAST = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__r_matrix32[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__r_coeff[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__r_golden[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_output_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_last_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_expected_size = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_received_sample_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__w_received = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_was_stalled = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__tc_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk7__DOT__coeff_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk8__DOT__coeff_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__row_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk11__DOT__tc_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_hd44320af__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_hf6f2e938__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__1 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__2 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__3 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__4 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h4fc669f0__5 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT____Vlvbound_h057480b9__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent = VL_RAND_RESET_I(5);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required = VL_RAND_RESET_I(5);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid = VL_RAND_RESET_I(5);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire = VL_RAND_RESET_I(5);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(896, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[__Vi0] = VL_RAND_RESET_I(28);
    }
    VL_RAND_RESET_W(128, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input);
    VL_RAND_RESET_W(256, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_data = VL_RAND_RESET_Q(56);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_data = VL_RAND_RESET_Q(56);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(448, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(448, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(896, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8 = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16 = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32 = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx = VL_RAND_RESET_I(32);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_sum = VL_RAND_RESET_I(17);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_difference = VL_RAND_RESET_I(17);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready = VL_RAND_RESET_I(3);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid = VL_RAND_RESET_I(5);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 15; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 = VL_RAND_RESET_I(2);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_2 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__VdfgTmp_hfc67b1af__0 = 0;
    vlSelf->__VdfgTmp_hfc6ba779__0 = 0;
    vlSelf->__VdfgTmp_hffa8be9b__0 = 0;
    vlSelf->__VdfgTmp_hc44095ae__0 = 0;
    vlSelf->__VdfgTmp_hc4c6668f__0 = 0;
    vlSelf->__VdfgTmp_hc4ff97d1__0 = 0;
    vlSelf->__VdfgTmp_hc42c8e73__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 = VL_RAND_RESET_I(5);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2244658c__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h224474db__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h224682b0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2247127f__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2247230e__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h224732dd__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h226f4d02__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2246ceb1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2246e1a4__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2246f0d3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h226f0b83__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h226d7db4__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h226dad21__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h226d9cd2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h22a29c75__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h22a04366__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h22a05357__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h229fe2c8__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h229ff1f3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h229f8264__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
