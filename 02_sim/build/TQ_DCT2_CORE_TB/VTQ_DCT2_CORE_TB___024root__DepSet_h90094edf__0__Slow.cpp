// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DCT2_CORE_TB.h for the primary calling header

#include "VTQ_DCT2_CORE_TB__pch.h"
#include "VTQ_DCT2_CORE_TB___024root.h"

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_static(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_final(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__stl(VTQ_DCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_DCT2_CORE_TB___024root___eval_phase__stl(VTQ_DCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_settle(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_settle\n"); );
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
            VTQ_DCT2_CORE_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_DCT2_CORE_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__stl(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_base_2.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_8.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_4.w_ready)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlUnpacked<CData/*4:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTQ_DCT2_CORE_TB__ConstPool__TABLE_he1a2e337_0;
extern const VlUnpacked<CData/*1:0*/, 64> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h85c5f1cc_0;

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___stl_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [1U] << 0x10U) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[1U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [2U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [1U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [3U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[2U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [4U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [3U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [5U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[3U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [6U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [5U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [7U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[4U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [8U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [7U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [9U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[5U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xaU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [9U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                           [0xbU] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[6U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xcU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xbU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0xdU] 
                                             << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[7U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xeU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xdU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0xfU] 
                                             << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[8U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x10U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0xfU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                              [0x11U] 
                                              << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[9U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x12U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x11U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x13U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xaU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x14U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x13U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x15U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xbU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x16U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x15U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x17U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xcU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x18U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x17U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x19U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xdU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x1aU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x19U] >> 0x10U)) | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                           [0x1eU] 
                                                                           << 0x10U) 
                                                                          | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                          [0x1dU]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                            [0x1cU] 
                                                                            << 0x10U) 
                                                                           | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                           [0x1bU]))))) 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                        [0x1eU] << 0x10U) 
                                       | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                       [0x1dU]))) << 0x20U) 
                     | (QData)((IData)(((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [0x1cU] << 0x10U) 
                                        | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                        [0x1bU]))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [0x1eU] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [0x1dU]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [0x1cU] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [0x1bU])))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xfU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [0x1fU] << 0x10U) | ((IData)(((((QData)((IData)(
                                                            ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [0x1eU] 
                                                              << 0x10U) 
                                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                             [0x1dU]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [0x1cU] 
                                                               << 0x10U) 
                                                              | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [0x1bU])))) 
                                          >> 0x20U)) 
                                 >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1fU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1fU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1eU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1eU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1dU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1dU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1cU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1cU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1bU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1bU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1aU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1aU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x19U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x19U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x18U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x18U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x17U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x17U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x16U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x16U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x15U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x15U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x14U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x14U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x13U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x13U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x12U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x12U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x11U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x11U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x10U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x10U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
        = ((0x100000U & ((IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x13U)) << 0x14U)) 
           | (0xfffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1 
        = ((0x100000U & ((IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x27U)) << 0x14U)) 
           | (0xfffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x14U))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[3U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[4U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[5U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[6U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[7U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [9U] << 0x1cU) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
           [8U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[8U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xaU] << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [9U] >> 4U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[9U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xbU] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [0xaU] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xaU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xcU] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [0xbU] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xbU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xdU] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                               [0xcU] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xcU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xeU] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [0xdU] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xdU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xfU] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [0xeU] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[3U] 
        = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
           [3U] >> 0xcU);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
        = (((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
        = (((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [0U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [0U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [1U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [1U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [2U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [2U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [3U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [3U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] = 0U;
    if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_hae8a7367__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [7U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [7U]));
        vlSelf->__VdfgTmp_h2a84b06a__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [6U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [6U]));
        vlSelf->__VdfgTmp_h02f6e96c__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [5U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [5U]));
        vlSelf->__VdfgTmp_hcce9ec7a__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [4U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [4U]));
        vlSelf->__VdfgTmp_h25c57c71__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [3U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [3U]));
        vlSelf->__VdfgTmp_h40a3c2dd__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [2U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [2U]));
        vlSelf->__VdfgTmp_hdf848912__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [1U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [1U]));
        vlSelf->__VdfgTmp_h63e39fe5__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [0U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0U]));
    } else {
        vlSelf->__VdfgTmp_hae8a7367__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[4U] 
                                              << 2U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                                >> 0x1eU)));
        vlSelf->__VdfgTmp_h2a84b06a__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                              << 0x14U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                                >> 0xcU)));
        vlSelf->__VdfgTmp_h02f6e96c__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                              << 6U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                                >> 0x1aU)));
        vlSelf->__VdfgTmp_hcce9ec7a__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                              << 0x18U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                                >> 8U)));
        vlSelf->__VdfgTmp_h25c57c71__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                              << 0xaU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                                >> 0x16U)));
        vlSelf->__VdfgTmp_h40a3c2dd__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                              << 0x1cU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                                >> 4U)));
        vlSelf->__VdfgTmp_hdf848912__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                              << 0xeU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[0U] 
                                                >> 0x12U)));
        vlSelf->__VdfgTmp_h63e39fe5__0 = (0x3ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[0U]);
    }
    if ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_hd7981b1a__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [3U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [3U]));
        vlSelf->__VdfgTmp_h38140bf3__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [2U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [2U]));
        vlSelf->__VdfgTmp_he313587d__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [1U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [1U]));
        vlSelf->__VdfgTmp_h0826cdfe__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [0U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0U]));
    } else {
        vlSelf->__VdfgTmp_hd7981b1a__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[2U] 
                                              << 7U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                                >> 0x19U)));
        vlSelf->__VdfgTmp_h38140bf3__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                              << 0x1aU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                                >> 6U)));
        vlSelf->__VdfgTmp_he313587d__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                              << 0xdU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[0U] 
                                                >> 0x13U)));
        vlSelf->__VdfgTmp_h0826cdfe__0 = (0x7ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[0U]);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [1U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [1U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [2U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [2U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [3U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [3U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [4U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [4U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [5U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [5U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [6U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [6U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [7U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [7U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [8U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [8U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [9U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [9U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xaU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xaU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xbU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xbU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xcU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xcU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xdU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xdU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xeU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xeU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xfU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xfU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY = 0U;
    if (((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid) 
                       << 2U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid) 
                                  << 1U) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
        [1U]) {
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [1U]) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & 0U);
        }
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [1U][6U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [2U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [1U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][3U]));
    }
    __Vtableidx1 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx1];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx1];
    __Vtableidx3 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx3];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx3];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx3];
    __Vtableidx5 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx5];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx5];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx5];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] = 0U;
    if ((2U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0xdU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][5U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][2U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xaU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xcU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xbU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xdU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][3U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][8U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][3U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xbU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xcU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][2U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
        }
    } else if ((1U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xbU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][8U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][6U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][0xdU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xcU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][8U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xbU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xcU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_hae8a7367__0 
                        << 1U)) | vlSelf->__VdfgTmp_hae8a7367__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_h2a84b06a__0 
                        << 1U)) | vlSelf->__VdfgTmp_h2a84b06a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_h02f6e96c__0 
                        << 1U)) | vlSelf->__VdfgTmp_h02f6e96c__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_hcce9ec7a__0 
                        << 1U)) | vlSelf->__VdfgTmp_hcce9ec7a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h25c57c71__0 
                        << 1U)) | vlSelf->__VdfgTmp_h25c57c71__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h40a3c2dd__0 
                        << 1U)) | vlSelf->__VdfgTmp_h40a3c2dd__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_hdf848912__0 
                        << 1U)) | vlSelf->__VdfgTmp_hdf848912__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h63e39fe5__0 
                        << 1U)) | vlSelf->__VdfgTmp_h63e39fe5__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x80000U & (vlSelf->__VdfgTmp_hd7981b1a__0 
                        << 1U)) | vlSelf->__VdfgTmp_hd7981b1a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x80000U & (vlSelf->__VdfgTmp_h38140bf3__0 
                        << 1U)) | vlSelf->__VdfgTmp_h38140bf3__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x80000U & (vlSelf->__VdfgTmp_he313587d__0 
                        << 1U)) | vlSelf->__VdfgTmp_he313587d__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x80000U & (vlSelf->__VdfgTmp_h0826cdfe__0 
                        << 1U)) | vlSelf->__VdfgTmp_h0826cdfe__0);
    if ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_hc08cf5ad__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h1d6eba1b__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hd7bdaf7f__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h82fffea4__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hb6cc2408__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h86e84127__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hc9305433__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h394abbe9__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hc6366976__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h2803f5e2__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h658ce4b7__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hb25b76ee__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hcff819dd__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h8590e32c__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h31e5f47b__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h312cbc05__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first);
    } else {
        vlSelf->__VdfgTmp_hc08cf5ad__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[0U]);
        vlSelf->__VdfgTmp_h1d6eba1b__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                              << 0xfU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[0U] 
                                                >> 0x11U)));
        vlSelf->__VdfgTmp_hd7bdaf7f__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                              << 0x1eU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                                >> 2U)));
        vlSelf->__VdfgTmp_h82fffea4__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                              << 0xdU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                                >> 0x13U)));
        vlSelf->__VdfgTmp_hb6cc2408__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                              << 0x1cU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                                >> 4U)));
        vlSelf->__VdfgTmp_h86e84127__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                              << 0xbU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                                >> 0x15U)));
        vlSelf->__VdfgTmp_hc9305433__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                              << 0x1aU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                                >> 6U)));
        vlSelf->__VdfgTmp_h394abbe9__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                              << 9U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                                >> 0x17U)));
        vlSelf->__VdfgTmp_hc6366976__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                              << 0x18U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                                >> 8U)));
        vlSelf->__VdfgTmp_h2803f5e2__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                              << 7U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                                >> 0x19U)));
        vlSelf->__VdfgTmp_h658ce4b7__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                              << 0x16U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                                >> 0xaU)));
        vlSelf->__VdfgTmp_hb25b76ee__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                              << 5U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                                >> 0x1bU)));
        vlSelf->__VdfgTmp_hcff819dd__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                              << 0x14U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                                >> 0xcU)));
        vlSelf->__VdfgTmp_h8590e32c__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                              << 3U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                                >> 0x1dU)));
        vlSelf->__VdfgTmp_h31e5f47b__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                              << 0x12U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                                >> 0xeU)));
        vlSelf->__VdfgTmp_h312cbc05__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[8U] 
                                              << 1U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                                >> 0x1fU)));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake 
        = ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID));
    if ((7U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk7__DOT__lane_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 
            ((0xf0000000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U]) 
             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 
            ((0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x1cU));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 
            ((0xff000000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                >> 4U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 
            ((0xffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x18U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 
            ((0xfff00000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                >> 8U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 
            ((0xfffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x14U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] = 
            (0xffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                        >> 0xcU));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake 
        = ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY) 
           & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST = 0U;
    if ((7U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST = 
            ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
             == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat));
    }
    __Vtableidx2 = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY) 
                     << 6U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID) 
                                << 5U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx) 
                                           << 3U) | 
                                          ((0x3ffffffcU 
                                            & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid) 
                                                >> 2U) 
                                               & ((3U 
                                                   == 
                                                   vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                                                   [4U]) 
                                                  << 2U))) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_he1a2e337_0
        [__Vtableidx2];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID) 
                       << 2U) | ((2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                        >> 3U)) | (1U 
                                                   & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                                                      >> 2U)))));
    __Vtableidx4 = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY) 
                     << 5U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID) 
                                << 4U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx) 
                                           << 3U) | 
                                          ((0x3ffffffcU 
                                            & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid) 
                                                >> 2U) 
                                               & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
                                                  [4U] 
                                                  << 2U))) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h85c5f1cc_0
        [__Vtableidx4];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc08cf5ad__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc08cf5ad__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h1d6eba1b__0 
                        << 1U)) | vlSelf->__VdfgTmp_h1d6eba1b__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hd7bdaf7f__0 
                        << 1U)) | vlSelf->__VdfgTmp_hd7bdaf7f__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h82fffea4__0 
                        << 1U)) | vlSelf->__VdfgTmp_h82fffea4__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hb6cc2408__0 
                        << 1U)) | vlSelf->__VdfgTmp_hb6cc2408__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h86e84127__0 
                        << 1U)) | vlSelf->__VdfgTmp_h86e84127__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc9305433__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc9305433__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h394abbe9__0 
                        << 1U)) | vlSelf->__VdfgTmp_h394abbe9__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc6366976__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc6366976__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h2803f5e2__0 
                        << 1U)) | vlSelf->__VdfgTmp_h2803f5e2__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h658ce4b7__0 
                        << 1U)) | vlSelf->__VdfgTmp_h658ce4b7__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hb25b76ee__0 
                        << 1U)) | vlSelf->__VdfgTmp_hb25b76ee__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hcff819dd__0 
                        << 1U)) | vlSelf->__VdfgTmp_hcff819dd__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h8590e32c__0 
                        << 1U)) | vlSelf->__VdfgTmp_h8590e32c__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h31e5f47b__0 
                        << 1U)) | vlSelf->__VdfgTmp_h31e5f47b__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h312cbc05__0 
                        << 1U)) | vlSelf->__VdfgTmp_h312cbc05__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY) 
                       << 2U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY) 
                                  << 1U) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY))));
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                         >> 3U));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                         >> 3U));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                         >> 2U));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                         >> 2U));
        }
    } else if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
            = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                     >> 1U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
            = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                     >> 1U));
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
            = (1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
            = (1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready));
    }
}

void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_stl(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xdULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xfULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_triggers__stl(VTQ_DCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_DCT2_CORE_TB___024root___eval_phase__stl(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_DCT2_CORE_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_DCT2_CORE_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__act(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_base_2.w_ready)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_8.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_4.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge TQ_DCT2_CORE_TB.I_CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge TQ_DCT2_CORE_TB.I_CLK or negedge TQ_DCT2_CORE_TB.I_RESETN)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] (32'h1 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] (32'h2 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] (32'h3 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] (32'h4 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] (32'h5 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__nba(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_base_2.w_ready)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_8.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] TQ_DCT2_CORE_TB.u_dut.u_tq_dct2_odd_mcm_4.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge TQ_DCT2_CORE_TB.I_CLK)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge TQ_DCT2_CORE_TB.I_CLK or negedge TQ_DCT2_CORE_TB.I_RESETN)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] (32'h1 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] (32'h2 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] (32'h3 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] (32'h4 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] (32'h5 == TQ_DCT2_CORE_TB.r_completed))\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___ctor_var_reset(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA);
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data);
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = VL_RAND_RESET_Q(64);
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__2 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done = VL_RAND_RESET_I(5);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches = VL_RAND_RESET_I(5);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[__Vi0] = VL_RAND_RESET_I(28);
    }
    VL_RAND_RESET_W(272, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32);
    VL_RAND_RESET_W(272, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32);
    VL_RAND_RESET_W(144, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16);
    VL_RAND_RESET_W(144, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16);
    VL_RAND_RESET_W(76, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8);
    VL_RAND_RESET_W(76, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(512, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready = VL_RAND_RESET_I(4);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid = VL_RAND_RESET_I(4);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready = VL_RAND_RESET_I(4);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(448, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output);
    VL_RAND_RESET_W(224, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output);
    VL_RAND_RESET_W(112, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output = VL_RAND_RESET_Q(56);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output = VL_RAND_RESET_Q(56);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk4__DOT__coeff_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk5__DOT__coeff_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk6__DOT__coeff_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk7__DOT__lane_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data);
    VL_RAND_RESET_W(272, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last = VL_RAND_RESET_I(17);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data);
    VL_RAND_RESET_W(144, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last = VL_RAND_RESET_I(18);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(76, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data);
    VL_RAND_RESET_W(76, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last = VL_RAND_RESET_I(19);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_even_data = VL_RAND_RESET_Q(40);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_odd_data = VL_RAND_RESET_Q(40);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first = VL_RAND_RESET_I(20);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last = VL_RAND_RESET_I(20);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first = VL_RAND_RESET_I(20);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last = VL_RAND_RESET_I(20);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 15; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx = 0;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 = VL_RAND_RESET_I(1);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid = VL_RAND_RESET_I(5);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid = VL_RAND_RESET_I(3);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready = VL_RAND_RESET_I(2);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 = VL_RAND_RESET_I(21);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1 = VL_RAND_RESET_I(21);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum = VL_RAND_RESET_I(21);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference = VL_RAND_RESET_I(21);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1 = VL_RAND_RESET_I(28);
    vlSelf->__VdfgTmp_h312cbc05__0 = 0;
    vlSelf->__VdfgTmp_h31e5f47b__0 = 0;
    vlSelf->__VdfgTmp_h8590e32c__0 = 0;
    vlSelf->__VdfgTmp_hcff819dd__0 = 0;
    vlSelf->__VdfgTmp_hb25b76ee__0 = 0;
    vlSelf->__VdfgTmp_h658ce4b7__0 = 0;
    vlSelf->__VdfgTmp_h2803f5e2__0 = 0;
    vlSelf->__VdfgTmp_hc6366976__0 = 0;
    vlSelf->__VdfgTmp_h394abbe9__0 = 0;
    vlSelf->__VdfgTmp_hc9305433__0 = 0;
    vlSelf->__VdfgTmp_h86e84127__0 = 0;
    vlSelf->__VdfgTmp_hb6cc2408__0 = 0;
    vlSelf->__VdfgTmp_h82fffea4__0 = 0;
    vlSelf->__VdfgTmp_hd7bdaf7f__0 = 0;
    vlSelf->__VdfgTmp_h1d6eba1b__0 = 0;
    vlSelf->__VdfgTmp_hc08cf5ad__0 = 0;
    vlSelf->__VdfgTmp_hae8a7367__0 = 0;
    vlSelf->__VdfgTmp_h2a84b06a__0 = 0;
    vlSelf->__VdfgTmp_h02f6e96c__0 = 0;
    vlSelf->__VdfgTmp_hcce9ec7a__0 = 0;
    vlSelf->__VdfgTmp_h25c57c71__0 = 0;
    vlSelf->__VdfgTmp_h40a3c2dd__0 = 0;
    vlSelf->__VdfgTmp_hdf848912__0 = 0;
    vlSelf->__VdfgTmp_h63e39fe5__0 = 0;
    vlSelf->__VdfgTmp_hd7981b1a__0 = 0;
    vlSelf->__VdfgTmp_h38140bf3__0 = 0;
    vlSelf->__VdfgTmp_he313587d__0 = 0;
    vlSelf->__VdfgTmp_h0826cdfe__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__0 = VL_RAND_RESET_I(3);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1aa68384__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1aa69393__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1aa724a8__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1aa5b4b7__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1aa74506__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
