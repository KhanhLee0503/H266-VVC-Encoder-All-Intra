// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#include "VTQ_DST7_DCT8_CORE_TB__pch.h"
#include "VTQ_DST7_DCT8_CORE_TB___024root.h"

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

void VTQ_DST7_DCT8_CORE_TB___024root___eval_initial(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial\n"); );
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__0 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__1 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h56f2315d__0 = (1U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h56f1c0ee__0 = (2U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h56f24e7b__0 = (3U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h56ecde8c__0 = (4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h56eceed9__0 = (5U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
}

VL_INLINE_OPT VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                           63);
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK = 
            (1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK)));
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h22c22758_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he5ee495b_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h42fb3b03_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he0c7f58c_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_hd5ee42d1_0;
extern const VlUnpacked<CData/*2:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5a5172de_0;

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___act_comb__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[0U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[1U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x10U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[2U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[3U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x30U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[0U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[2U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x10U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x30U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID));
    if ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE;
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0 
        = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
            & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable)) 
           | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA))))))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
        = ((((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode)
              ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA))))))) 
                                 >> 0x20U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[2U] 
        = (0xfU & (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode)
                     ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[1U] 
            = (0x1ffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[3U] 
            = (0x1ffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0));
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[1U] 
            = (0x1ffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0);
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[3U] 
            = (0x1ffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready 
        = ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready 
        = ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready 
        = (1U & ((~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                     >> 4U)) | ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                                & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0))));
    __Vtableidx1 = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size) 
                     << 3U) | (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                                << 2U) | ((((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                             ? ((1U 
                                                 & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                                 ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready)
                                                 : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready))
                                             : ((1U 
                                                 & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                                 ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready)
                                                 : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready))) 
                                           << 1U) | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h22c22758_0
        [__Vtableidx1];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he5ee495b_0
        [__Vtableidx1];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h42fb3b03_0
        [__Vtableidx1];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he0c7f58c_0
        [__Vtableidx1];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_hd5ee42d1_0
        [__Vtableidx1];
    __Vtableidx4 = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid) 
                     << 4U) | ((((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                                 & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0)) 
                                << 3U) | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5a5172de_0
        [__Vtableidx4];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 0U;
            } else if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready) 
                        & (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat)))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group)))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 6U;
            }
        } else if ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
            if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready)) 
                    & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid) 
                 & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group)))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 4U;
            }
        } else if ((7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
        if ((((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid) 
              & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready)) 
             & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group)))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid) 
                & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire) 
                    & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire) 
                 & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = 4U;
            }
        } else if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire) 
                    & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire) 
             & ((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                 ? (1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                 : ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                     ? (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                     : ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                        && (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))))))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state 
                = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode) 
                    & (3U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)))
                    ? 3U : 2U);
        }
    } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state 
            = ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                ? ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode)
                    ? 3U : 2U) : 1U);
    }
}

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [0U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [1U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [1U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [2U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [3U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [4U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [5U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [6U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [6U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][7U] 
        = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
                         [7U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [7U]));
}

void VTQ_DST7_DCT8_CORE_TB___024root___eval_act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_act\n"); );
    // Body
    if ((0xfaULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 = 0;
    IData/*31:0*/ __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc;
    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc = 0;
    IData/*31:0*/ __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx;
    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx = 0;
    IData/*31:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = 0;
    CData/*3:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v1 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v2 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v7 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v1 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v2 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v3 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v5 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v6 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v63 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v1 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v2 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v3 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v4 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v5 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v6 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v7 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v8 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v9 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v10 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v11 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v12 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v13 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v14 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v15 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v16 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v17 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v18 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v19 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v20 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v21 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v22 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v23 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v24 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v25 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v26 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v27 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v28 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v29 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v30 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v31 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v32 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v33 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v34 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v35 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v36 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v37 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v38 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v39 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v40 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v41 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v42 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v43 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v44 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v45 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v46 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v47 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v48 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v49 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v50 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v51 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v52 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v53 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v54 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v55 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v56 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v57 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v58 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v59 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v60 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v61 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v62 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v15 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7;
    __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v64;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v64 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v65;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v65 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v66;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v66 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v67;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v67 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v68;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v68 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v69;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v69 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v70;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v70 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v71;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v71 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v72;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v72 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v73;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v73 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v74;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v74 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v75;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v75 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v76;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v76 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v77;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v77 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v78;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v78 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v79;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v79 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v80;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v80 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v81;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v81 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v82;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v82 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v83;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v83 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v84;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v84 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v85;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v85 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v86;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v86 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v87;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v87 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v88;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v88 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v89;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v89 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v90;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v90 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v91;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v91 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v92;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v92 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v93;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v93 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v94;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v94 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v95;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v95 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v96;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v96 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v97;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v97 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v98;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v98 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v99;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v99 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v100;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v100 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v101;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v101 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v102;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v102 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v103;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v103 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v104;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v104 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v105;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v105 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v106;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v106 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v107;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v107 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v108;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v108 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v109;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v109 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v110;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v110 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v111;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v111 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v112;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v112 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v113;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v113 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v114;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v114 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v115;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v115 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v116;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v116 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v117;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v117 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v118;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v118 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v119;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v119 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v120;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v120 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v121;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v121 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v122;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v122 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v123;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v123 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v63 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v1 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v2 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v3 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v4 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v5 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v6 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v7 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v8 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v9 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v10 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v11 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v12 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v13 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v14 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v15 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v16 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v17 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v18 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v19 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v20 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v21 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v22 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v23 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v24 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v25 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v26 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v27 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v28 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v29 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v30 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v31 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v32 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v33 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v34 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v35 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v36 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v37 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v38 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v39 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v40 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v41 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v42 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v43 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v44 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v45 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v46 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v47 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v48 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v49 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v50 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v51 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v52 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v53 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v54 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v55 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v56 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v57 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v58 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v59 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v60 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v61 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v62 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v32;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v33;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v34;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v35;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v36;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v37;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v38;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v39;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v40;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v41;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v42;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v43;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v44;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v45;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v46;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v47;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v48;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v49;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v50;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v51;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v52;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v53;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v54;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v55;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v56;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v57;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v58;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v59;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v60;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v61;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v62;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v63;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v16;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v17;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v18;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v19;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v20;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v21;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v22;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v23;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v24;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v25;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v26;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v27;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v28;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v29;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v30;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v31;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v1;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v2;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v3;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v4;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v5;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v6;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v7;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v8;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v9;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v10;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v11;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v12;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v13;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v14;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v15;
    __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v15 = 0;
    std::string __Vtemp_9;
    // Body
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0 = 0U;
    __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4 = 0U;
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx = 4U;
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx = 4U;
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx = 4U;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid) {
            if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID)) 
                                    | (0U != ((((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
                                                 ^ 
                                                 vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[0U]) 
                                                | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
                                                   ^ 
                                                   vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[1U])) 
                                               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
                                                  ^ 
                                                  vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[2U])) 
                                              | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] 
                                                 ^ 
                                                 vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[3U])))) 
                                   | ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST) 
                                      != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last)))))) {
                if (VL_GTS_III(32, 5U, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__0 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__0;
                    }
                }
                VL_WRITEF("ERROR: output not stable during stall, cycle %0d\n",
                          32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle);
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                    = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
            }
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid 
            = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID) 
               & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY)));
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles 
                = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles);
        }
        if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY))) {
            if (VL_UNLIKELY(VL_LTES_III(32, 5U, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                VL_WRITEF("ERROR: unexpected extra output at cycle %0d\n",
                          32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle);
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                    = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
            } else {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U]);
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__unnamedblk1__DOT__lane_idx = 4U;
                if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[(7U 
                                                                 & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat))] 
                        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat))] 
                     != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat))])) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
                                      << 4U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
                                                >> 0x1cU)));
                if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[(7U 
                                                                 & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(1U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(1U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
                                      << 8U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
                                                >> 0x18U)));
                if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[(7U 
                                                                 & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(2U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(2U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] 
                                      << 0xcU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
                                                  >> 0x14U)));
                if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[(7U 
                                                                 & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(3U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(3U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                if (VL_UNLIKELY(((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST) 
                                 != (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat 
                                     == (VL_DIVS_III(32, 
                                                     ((4U 
                                                       >= 
                                                       (7U 
                                                        & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                                       ? 
                                                      vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                                      [
                                                      (7U 
                                                       & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                                       : 0U), (IData)(4U)) 
                                         - (IData)(1U)))))) {
                    VL_WRITEF("ERROR: unexpected LAST in testcase %0d beat %0d\n",
                              32,((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed),
                              32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat);
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__2 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[(7U 
                                                                          & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__2;
                    }
                }
                if (VL_UNLIKELY((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat 
                                 == (VL_DIVS_III(32, 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed))
                                                   ? 
                                                  vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                                  [
                                                  (7U 
                                                   & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)]
                                                   : 0U), (IData)(4U)) 
                                     - (IData)(1U))))) {
                    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc 
                        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed;
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat = 0U;
                    VL_WRITEF(" \n====================================================================\n");
                    __Vtemp_9 = ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                  ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name
                                 [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                  : std::string{""});
                    VL_WRITEF("TESTCASE %0d/5: %@\nN=%0d  TRANSFORM=%s\n====================================================================\n  INDEX        INPUT          GOLDEN            RTL        STATUS\n",
                              32,((IData)(1U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc),
                              -1,&(__Vtemp_9),32,((4U 
                                                   >= 
                                                   (7U 
                                                    & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                                   ? 
                                                  vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                                  [
                                                  (7U 
                                                   & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                                   : 0U),
                              40,(((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)) 
                                   && vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
                                   [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)])
                                   ? 0x4443542d38ULL
                                   : 0x4453542d37ULL));
                    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("    %02d   %11d     %11d    %11d        %s\n",
                                  32,__Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx,
                                  16,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  40,((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                       [((4U >= (7U 
                                                 & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                          ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                          : 0U)][(0x1fU 
                                                  & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)] 
                                       == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                       [((4U >= (7U 
                                                 & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                          ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                          : 0U)][(0x1fU 
                                                  & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)])
                                       ? 0x4f4bULL : 0x4552524f52ULL));
                        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(1U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF(" \nINPUT MATRIX (four values per row):\n");
                    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx),
                                  16,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  16,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  16,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  16,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF("GOLDEN COEFFICIENT MATRIX (four values per row):\n");
                    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx),
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF("RTL COEFFICIENT MATRIX (four values per row):\n");
                    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx),
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    if ((0U == ((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                 ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                 : 0U))) {
                        VL_WRITEF("TESTCASE %0d PASS\n",
                                  32,((IData)(1U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc));
                    } else {
                        VL_WRITEF("TESTCASE %0d FAIL (%0d errors)\n",
                                  32,((IData)(1U) + __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc),
                                  32,((4U >= (7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc))
                                       ? vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors
                                      [(7U & __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__print_full_result__0__tc)]
                                       : 0U));
                    }
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
                } else {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat 
                        = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat);
                }
            }
        }
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data[3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last = 0U;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle);
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY 
            = ((4U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress) 
               | VL_LTES_III(32, 4U, VL_MODDIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle, (IData)(7U))));
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY = 0U;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = 0U;
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
        if ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0 
                = (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0 = 1U;
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x10U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2 = 1U;
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x20U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4 = 1U;
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x30U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6 = 1U;
        } else if ((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 
                = (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 = 1U;
            __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1 
                = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group) 
                   << 2U);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x10U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 = 1U;
            __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3 
                = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group) 
                                           << 2U)));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x20U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 = 1U;
            __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5 
                = (0x1fU & ((IData)(2U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group) 
                                           << 2U)));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 
                = (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                      >> 0x30U)));
            __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 = 1U;
            __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7 
                = (0x1fU & ((IData)(3U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group) 
                                           << 2U)));
        }
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid))) {
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0 
            = (0x1ffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U]);
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v1 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                            << 0xfU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U] 
                                        >> 0x11U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v2 
            = (0x1ffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                           >> 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v3 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[2U] 
                            << 0xdU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                                        >> 0x13U)));
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire) {
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 
            = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U]);
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 = 1U;
        __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0 
            = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat) 
               << 2U);
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1 
            = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
                              << 4U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U] 
                                        >> 0x1cU)));
        __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1 
            = (0xfU & ((IData)(1U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat) 
                                      << 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2 
            = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
                              << 8U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
                                        >> 0x18U)));
        __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2 
            = (0xfU & ((IData)(2U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat) 
                                      << 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3 
            = (0xfffffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U] 
                              << 0xcU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
                                          >> 0x14U)));
        __Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3 
            = (0xfU & ((IData)(3U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat) 
                                      << 2U)));
    }
    if ((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk3__DOT__mcm_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
            [0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
            [1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
            [2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
            [3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [0U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [1U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [2U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [3U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [0U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [1U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [2U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [3U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
            [0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
            [1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
            [2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
            [3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3
                             [3U]));
    }
    if ((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx = 8U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [0U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [1U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [2U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [3U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [4U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [5U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [6U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [7U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                             [7U][3U]));
    }
    if ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx = 8U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx = 8U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v4 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v5 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v6 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v7 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [0U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v8 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v9 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v10 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v11 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v12 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v13 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v14 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v15 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [1U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v16 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v17 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v18 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v19 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v20 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v21 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v22 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v23 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [2U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v24 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v25 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v26 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v27 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v28 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v29 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v30 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v31 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [3U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v34 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v35 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v36 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v37 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v38 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v39 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [4U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v40 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v41 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v42 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v43 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v44 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v45 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v46 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v47 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [5U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v48 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v49 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v50 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v51 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v52 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v53 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v54 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v55 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [6U][7U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v56 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v57 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v58 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v59 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v60 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][4U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v61 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][5U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v62 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][6U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product
            [7U][7U];
    }
    if ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx = 8U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [0U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [1U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [2U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [3U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v16 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v17 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v18 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v19 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [4U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v20 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v21 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v22 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v23 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [5U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v24 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v25 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v26 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v27 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [6U][7U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v28 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v29 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v30 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][5U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v31 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route
                             [7U][7U]));
    }
    if ((5U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx = 8U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                             [7U][1U]));
    }
    if ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
            [0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0 = 1U;
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode) {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v1 
                = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
                                 [1U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v3 
                = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
                                 [3U]));
        } else {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v1 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
                   [1U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v3 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
                   [3U]);
        }
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext
            [2U];
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk4__DOT__mcm_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                          [0U], 3U));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [0U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [0U], 5U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v4 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                          [0U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v5 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                          [0U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v6 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7
                                           [0U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v7 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [0U], 6U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v8 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [0U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [0U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v9 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v10 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [0U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v11 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [0U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v12 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [0U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v13 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                           [0U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v14 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                          [0U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v15 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v16 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [1U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v17 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v18 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [1U], 5U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v19 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v20 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                          [1U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v21 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7
                                           [1U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v22 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [1U], 6U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v23 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [1U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [1U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v24 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v25 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [1U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v26 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [1U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v27 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [1U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v28 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                           [1U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v29 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v30 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v31 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [2U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v32 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v33 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [2U], 5U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v34 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v35 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                          [2U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v36 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7
                                           [2U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v37 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [2U], 6U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v38 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [2U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [2U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v39 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v40 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [2U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v41 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [2U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v42 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [2U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v43 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                           [2U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v44 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v45 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                          [3U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v46 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [3U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v47 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v48 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [3U], 5U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v49 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                          [3U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v50 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                                          [3U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v51 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7
                                           [3U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v52 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [3U], 6U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v53 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                           [3U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                                             [3U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v54 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v55 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [3U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v56 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [3U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v57 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                                           [3U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v58 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                           [3U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v59 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11
                                          [3U], 3U));
    }
    if (((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state)) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4 
            = (0x1ffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U]);
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v5 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                            << 0xfU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U] 
                                        >> 0x11U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v6 
            = (0x1ffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                           >> 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v7 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[2U] 
                            << 0xdU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                                        >> 0x13U)));
    }
    if (((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state)) 
         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0 
            = (0x1ffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U]);
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v1 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                            << 0xfU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[0U] 
                                        >> 0x11U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v2 
            = (0x1ffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                           >> 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v3 
            = (0x1ffffU & ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[2U] 
                            << 0xdU) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small[1U] 
                                        >> 0x13U)));
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__unnamedblk6__DOT__mcm_idx = 4U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0U][0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v4 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [1U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v5 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [1U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v6 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [1U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v7 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [1U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v8 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [2U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v9 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [2U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v10 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [2U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v11 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [2U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v12 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [3U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v13 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [3U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v14 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [3U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v15 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [3U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v16 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [4U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v17 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [4U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v18 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [4U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v19 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [4U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v20 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [5U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v21 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [5U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v22 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [5U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v23 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [5U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v24 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [6U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v25 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [6U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v26 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [6U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v27 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [6U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v28 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [7U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v29 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [7U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v30 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [7U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v31 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [7U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [8U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [8U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v34 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [8U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v35 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [8U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v36 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [9U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v37 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [9U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v38 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [9U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v39 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [9U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v40 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xaU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v41 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xaU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v42 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xaU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v43 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xaU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v44 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xbU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v45 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xbU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v46 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xbU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v47 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xbU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v48 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xcU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v49 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xcU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v50 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xcU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v51 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xcU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v52 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xdU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v53 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xdU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v54 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xdU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v55 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xdU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v56 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xeU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v57 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xeU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v58 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xeU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v59 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xeU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v60 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xfU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v61 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xfU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v62 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xfU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg
            [0xfU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0U][0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v4 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [1U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v5 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [1U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v6 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [1U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v7 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [1U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v8 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [2U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v9 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [2U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v10 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [2U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v11 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [2U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v12 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [3U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v13 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [3U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v14 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [3U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v15 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [3U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v16 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [4U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v17 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [4U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v18 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [4U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v19 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [4U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v20 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [5U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v21 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [5U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v22 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [5U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v23 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [5U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v24 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [6U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v25 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [6U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v26 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [6U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v27 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [6U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v28 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [7U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v29 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [7U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v30 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [7U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v31 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [7U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [8U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [8U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v34 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [8U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v35 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [8U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v36 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [9U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v37 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [9U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v38 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [9U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v39 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [9U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v40 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xaU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v41 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xaU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v42 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xaU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v43 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xaU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v44 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xbU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v45 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xbU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v46 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xbU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v47 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xbU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v48 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xcU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v49 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xcU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v50 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xcU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v51 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xcU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v52 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xdU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v53 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xdU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v54 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xdU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v55 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xdU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v56 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xeU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v57 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xeU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v58 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xeU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v59 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xeU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v60 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xfU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v61 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xfU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v62 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xfU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag
            [0xfU][3U];
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk10__DOT__mcm_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                          [0U], 2U));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
            [0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
            [0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [0U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v4 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v5 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                          [0U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v6 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [0U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v7 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [0U], 5U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v8 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 3U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v9 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v10 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [0U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v11 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [0U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v12 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                           [0U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v13 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7
                                          [0U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v14 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [0U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v15 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v16 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v17 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v18 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                          [0U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v19 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v20 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v21 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v22 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                          [0U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v23 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v24 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v25 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v26 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [0U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v27 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [0U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v28 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                          [0U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v29 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v30 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v31 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                          [1U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
            [1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
            [1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v34 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [1U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v35 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v36 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                          [1U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v37 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [1U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v38 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [1U], 5U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v39 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 3U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v40 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v41 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [1U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v42 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [1U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v43 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                           [1U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v44 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v45 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [1U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v46 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v47 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v48 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v49 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v50 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v51 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v52 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v53 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                          [1U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v54 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v55 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v56 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v57 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [1U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v58 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [1U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v59 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                          [1U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v60 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v61 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v62 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                          [2U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
            [2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v64 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
            [2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v65 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [2U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v66 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v67 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                          [2U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v68 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [2U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v69 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [2U], 5U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v70 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 3U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v71 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v72 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [2U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v73 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [2U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v74 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                           [2U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v75 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v76 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [2U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v77 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v78 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v79 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v80 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v81 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v82 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v83 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v84 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                          [2U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v85 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v86 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v87 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v88 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [2U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v89 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [2U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v90 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                          [2U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v91 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v92 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v93 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                          [3U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v94 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
            [3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v95 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
            [3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v96 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [3U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v97 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v98 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                          [3U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v99 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [3U], 1U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v100 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [3U], 5U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v101 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 3U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v102 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v103 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [3U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v104 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                           [3U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v105 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13
                                           [3U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v106 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7
                                          [3U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v107 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15
                                          [3U], 2U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v108 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v109 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v110 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v111 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                          [3U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v112 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v113 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v114 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             - VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v115 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                          [3U], 4U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v116 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v117 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 2U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v118 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v119 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5
                                           [3U], 4U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3
                                             [3U], 1U)));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v120 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [3U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v121 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                          [3U], 3U));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v122 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v123 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk9__DOT__mcm_idx = 4U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [0U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [0U], 2U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v1 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [1U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [1U], 2U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v2 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [2U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [2U], 2U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v3 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [3U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [3U], 2U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [0U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [1U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [2U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [3U], 3U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [0U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [1U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [2U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [3U], 2U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [0U], 1U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [1U], 1U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [2U], 1U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [3U], 1U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [0U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [1U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [2U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [3U], 3U) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
            [0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
            [1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
            [2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
            [3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [0U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [1U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [2U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                           [3U], 4U) 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [0U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [0U], 1U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v1 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [1U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [1U], 1U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v2 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [2U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [2U], 1U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v3 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                            [3U], 3U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                                              [3U], 1U)) 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x
                             [3U]));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_mode;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__unnamedblk8__DOT__mcm_idx = 4U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [0U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0U][0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [0U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [0U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [0U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [1U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [1U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [1U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [1U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [1U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [1U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [1U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [1U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [1U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [1U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [2U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [2U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [2U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [2U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [2U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [2U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [2U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [2U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [2U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [2U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [3U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [3U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [3U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [3U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [3U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [3U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [3U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [3U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [3U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [3U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v16 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [4U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [4U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [4U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v17 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [4U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [4U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v18 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [4U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [4U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [4U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v19 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [4U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [4U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v20 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [5U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [5U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [5U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v21 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [5U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [5U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v22 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [5U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [5U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [5U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v23 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [5U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [5U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v24 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [6U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [6U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [6U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v25 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [6U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [6U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v26 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [6U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [6U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [6U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v27 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [6U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [6U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v28 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [7U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [7U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [7U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v29 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [7U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [7U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v30 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [7U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [7U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [7U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v31 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [7U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [7U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [7U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v32 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [8U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [8U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [8U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v33 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [8U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [8U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v34 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [8U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [8U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [8U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v35 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [8U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [8U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [8U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v36 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [9U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [9U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [9U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v37 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [9U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [9U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v38 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [9U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [9U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [9U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v39 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [9U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                         [9U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [9U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v40 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xaU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xaU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xaU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v41 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xaU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xaU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v42 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xaU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xaU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xaU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v43 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xaU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xaU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xaU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v44 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xbU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xbU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xbU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v45 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xbU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xbU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v46 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xbU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xbU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xbU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v47 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xbU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xbU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xbU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v48 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xcU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xcU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xcU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v49 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xcU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xcU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v50 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xcU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xcU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xcU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v51 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xcU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xcU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xcU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v52 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xdU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xdU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xdU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v53 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xdU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xdU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v54 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xdU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xdU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xdU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v55 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xdU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xdU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xdU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v56 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xeU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xeU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xeU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v57 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xeU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xeU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v58 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xeU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xeU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xeU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v59 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xeU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xeU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xeU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v60 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xfU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xfU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xfU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v61 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xfU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xfU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xfU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v62 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xfU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xfU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xfU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v63 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg
                             [0xfU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                                           [0xfU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag
                             [0xfU][3U]));
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx = 4U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0U][0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v4 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [1U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v5 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [1U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v6 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [1U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v7 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [1U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v8 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [2U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v9 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [2U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v10 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [2U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v11 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [2U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v12 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [3U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v13 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [3U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v14 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [3U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v15 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [3U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v16 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [4U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v17 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [4U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v18 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [4U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v19 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [4U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v20 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [5U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v21 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [5U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v22 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [5U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v23 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [5U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v24 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [6U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v25 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [6U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v26 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [6U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v27 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [6U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v28 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [7U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v29 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [7U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v30 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [7U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v31 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [7U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [8U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [8U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v34 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [8U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v35 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [8U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v36 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [9U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v37 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [9U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v38 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [9U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v39 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [9U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v40 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xaU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v41 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xaU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v42 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xaU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v43 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xaU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v44 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xbU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v45 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xbU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v46 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xbU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v47 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xbU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v48 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xcU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v49 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xcU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v50 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xcU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v51 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xcU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v52 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xdU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v53 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xdU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v54 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xdU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v55 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xdU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v56 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xeU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v57 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xeU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v58 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xeU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v59 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xeU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v60 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xfU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v61 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xfU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v62 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xfU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg
            [0xfU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0U][0U];
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v1 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v3 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v4 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [1U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v5 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [1U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v6 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [1U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v7 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [1U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v8 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [2U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v9 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [2U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v10 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [2U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v11 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [2U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v12 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [3U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v13 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [3U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v14 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [3U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v15 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [3U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v16 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [4U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v17 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [4U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v18 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [4U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v19 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [4U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v20 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [5U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v21 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [5U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v22 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [5U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v23 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [5U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v24 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [6U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v25 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [6U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v26 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [6U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v27 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [6U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v28 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [7U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v29 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [7U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v30 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [7U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v31 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [7U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v32 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [8U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v33 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [8U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v34 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [8U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v35 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [8U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v36 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [9U][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v37 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [9U][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v38 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [9U][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v39 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [9U][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v40 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xaU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v41 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xaU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v42 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xaU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v43 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xaU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v44 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xbU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v45 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xbU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v46 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xbU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v47 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xbU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v48 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xcU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v49 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xcU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v50 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xcU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v51 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xcU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v52 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xdU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v53 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xdU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v54 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xdU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v55 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xdU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v56 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xeU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v57 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xeU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v58 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xeU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v59 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xeU][3U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v60 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xfU][0U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v61 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xfU][1U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v62 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xfU][2U];
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v63 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag
            [0xfU][3U];
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__unnamedblk14__DOT__mcm_idx = 4U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [0U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0U][0U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [0U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [0U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [0U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [1U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [1U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [1U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [1U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [1U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [1U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [1U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [1U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [1U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [1U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [2U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [2U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [2U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [2U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [2U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [2U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [2U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [2U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [2U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [2U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [3U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [3U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [3U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [3U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [3U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [3U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [3U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [3U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [3U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [3U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v16 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [4U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [4U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [4U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v17 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [4U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [4U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v18 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [4U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [4U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [4U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v19 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [4U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [4U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v20 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [5U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [5U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [5U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v21 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [5U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [5U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v22 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [5U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [5U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [5U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v23 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [5U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [5U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v24 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [6U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [6U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [6U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v25 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [6U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [6U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v26 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [6U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [6U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [6U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v27 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [6U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [6U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v28 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [7U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [7U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [7U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v29 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [7U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [7U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v30 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [7U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [7U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [7U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v31 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [7U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [7U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [7U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v32 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [8U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [8U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [8U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v33 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [8U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [8U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v34 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [8U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [8U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [8U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v35 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [8U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [8U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [8U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v36 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [9U][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [9U][0U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [9U][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v37 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [9U][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [9U][1U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v38 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [9U][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [9U][2U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [9U][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v39 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [9U][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                         [9U][3U]) : 
                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [9U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v40 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xaU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xaU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xaU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v41 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xaU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xaU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v42 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xaU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xaU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xaU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v43 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xaU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xaU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xaU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v44 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xbU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xbU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xbU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v45 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xbU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xbU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v46 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xbU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xbU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xbU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v47 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xbU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xbU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xbU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v48 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xcU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xcU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xcU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v49 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xcU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xcU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v50 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xcU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xcU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xcU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v51 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xcU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xcU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xcU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v52 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xdU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xdU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xdU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v53 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xdU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xdU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v54 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xdU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xdU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xdU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v55 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xdU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xdU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xdU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v56 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xeU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xeU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xeU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v57 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xeU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xeU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v58 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xeU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xeU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xeU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v59 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xeU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xeU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xeU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v60 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xfU][0U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xfU][0U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xfU][0U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v61 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xfU][1U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xfU][1U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xfU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v62 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xfU][2U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xfU][2U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xfU][2U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v63 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg
                             [0xfU][3U] ? (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                                           [0xfU][3U])
                              : vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag
                             [0xfU][3U]));
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx = 0x10U;
        if ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group))) {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v1 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [1U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v2 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [2U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v3 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [3U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v4 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [4U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v5 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [5U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v6 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [6U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v7 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [7U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v8 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [8U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v9 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [9U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v10 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xaU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v11 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xbU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v12 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xcU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v13 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xdU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v14 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xeU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v15 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                   [0xfU]);
        } else {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v1 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [1U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [1U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v2 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [2U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v3 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [3U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [3U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v4 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [4U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v5 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [5U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [5U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v6 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [6U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v7 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [7U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [7U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v8 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [8U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [8U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v9 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [9U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [9U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v10 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xaU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xaU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v11 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xbU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xbU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v12 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xcU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xcU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v13 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xdU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xdU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v14 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xeU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xeU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v15 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                 [0xfU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial
                                 [0xfU]));
        }
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0 = 1U;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk10__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [8U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [9U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xaU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xbU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xcU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xdU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xeU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xfU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                             [0xfU][1U]));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [1U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [2U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [3U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [4U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [5U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [6U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [7U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [7U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v16 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [8U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v17 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [8U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [8U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v18 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [9U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v19 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [9U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [9U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v20 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xaU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v21 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xaU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xaU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v22 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xbU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v23 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xbU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xbU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v24 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xcU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v25 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xcU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xcU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v26 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xdU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v27 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xdU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xdU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v28 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xeU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v29 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xeU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xeU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v30 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xfU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xfU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v31 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xfU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed
                             [0xfU][3U]));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_group;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk17__DOT__lane_idx = 0x10U;
        if ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group))) {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v1 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [1U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v2 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [2U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v3 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [3U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v4 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [4U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v5 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [5U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v6 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [6U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v7 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [7U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v8 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [8U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v9 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [9U]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v10 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xaU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v11 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xbU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v12 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xcU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v13 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xdU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v14 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xeU]);
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v15 
                = (0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                   [0xfU]);
        } else {
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v1 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [1U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [1U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v2 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [2U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v3 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [3U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [3U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v4 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [4U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [4U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v5 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [5U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [5U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v6 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [6U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [6U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v7 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [7U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [7U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v8 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [8U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [8U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v9 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [9U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [9U]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v10 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xaU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xaU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v11 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xbU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xbU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v12 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xcU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xcU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v13 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xdU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xdU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v14 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xeU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xeU]));
            __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v15 
                = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
                                 [0xfU] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial
                                 [0xfU]));
        }
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0 = 1U;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk16__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [8U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [9U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xaU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xbU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xcU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xdU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xeU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xfU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                             [0xfU][1U]));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group;
    }
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx = 0x10U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0U][1U]));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [1U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [1U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [1U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [1U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v4 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [2U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [2U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v5 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [2U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [2U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v6 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [3U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [3U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v7 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [3U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [3U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v8 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [4U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [4U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v9 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [4U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [4U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v10 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [5U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [5U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v11 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [5U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [5U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v12 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [6U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [6U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v13 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [6U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [6U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v14 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [7U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [7U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v15 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [7U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [7U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v16 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [8U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [8U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v17 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [8U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [8U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v18 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [9U][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [9U][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v19 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [9U][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [9U][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v20 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xaU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xaU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v21 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xaU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xaU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v22 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xbU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xbU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v23 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xbU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xbU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v24 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xcU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xcU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v25 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xcU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xcU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v26 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xdU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xdU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v27 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xdU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xdU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v28 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xeU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xeU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v29 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xeU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xeU][3U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v30 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xfU][0U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xfU][1U]));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v31 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xfU][2U] + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed
                             [0xfU][3U]));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_group;
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) 
         & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
            >> 3U))) {
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b));
        __Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0 = 1U;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v1 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b));
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v2 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d;
        __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b));
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result__v7;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad__v15;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v0;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v1;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v2;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v4;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v5;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v6;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[__Vdlyvdim0__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input__v7;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair__v31;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair__v31;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[0U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[1U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[2U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[3U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product__v59;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[8U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[8U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[8U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[8U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[9U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[9U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[9U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[9U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xaU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xaU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xaU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xaU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xbU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xbU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xbU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xbU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xcU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xcU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xcU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xcU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xdU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xdU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xdU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xdU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xeU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xeU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xeU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xeU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xfU][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xfU][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xfU][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[0xfU][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair__v31;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial__v15;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc__v15;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial__v15;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc__v15;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x10U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x11U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x12U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x13U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x14U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x15U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x16U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x17U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x18U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x19U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x1aU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x1bU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x1cU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x1dU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[0U][0x1eU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x10U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x11U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x12U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x13U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x14U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x15U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x16U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x17U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x18U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x19U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x1aU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x1bU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x1cU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x1dU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[1U][0x1eU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v63;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v64;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v65;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v66;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v67;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v68;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v69;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v70;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v71;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v72;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v73;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v74;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v75;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v76;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v77;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x10U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v78;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x11U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v79;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x12U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v80;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x13U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v81;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x14U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v82;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x15U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v83;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x16U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v84;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x17U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v85;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x18U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v86;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x19U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v87;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x1aU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v88;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x1bU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v89;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x1cU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v90;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x1dU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v91;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[2U][0x1eU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v92;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v93;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v94;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v95;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v96;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v97;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v98;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v99;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v100;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][8U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v101;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][9U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v102;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xaU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v103;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xbU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v104;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xcU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v105;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xdU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v106;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xeU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v107;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0xfU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v108;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x10U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v109;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x11U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v110;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x12U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v111;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x13U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v112;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x14U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v113;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x15U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v114;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x16U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v115;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x17U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v116;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x18U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v117;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x19U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v118;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x1aU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v119;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x1bU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v120;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x1cU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v121;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x1dU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v122;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[3U][0x1eU] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product__v123;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[0U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v7;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v8;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v9;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v10;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v11;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v12;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v13;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v14;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[1U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v15;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v16;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v17;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v18;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v19;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v20;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v21;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v22;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[2U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v23;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v24;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v25;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v26;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v27;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v28;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v29;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v30;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[3U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v31;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v32;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v33;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v34;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v35;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v36;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v37;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v38;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[4U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v39;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v40;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v41;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v42;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v43;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v44;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v45;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v46;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[5U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v47;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v48;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v49;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v50;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v51;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v52;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v53;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v54;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[6U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v55;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v56;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v57;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v58;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v59;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v60;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v61;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v62;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[7U][7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product__v63;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[0U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[1U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[2U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[3U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v3;
    }
    if (__Vdlyvset__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[4U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v4;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[5U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v5;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[6U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v6;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[7U] 
            = __Vdlyvval__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input__v7;
    }
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) 
         & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
            >> 2U))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0 
                             - vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][0U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [1U][2U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [2U][4U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [3U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][4U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [4U][7U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][5U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [5U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][6U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [6U][3U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[0U][7U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [7U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [1U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [2U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [3U][2U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][4U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [4U][0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][5U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [5U][4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][6U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [6U][7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[1U][7U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [7U][3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][2U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [1U][7U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [2U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][3U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [3U][3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][4U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [4U][6U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][5U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [5U][0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][6U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [6U][4U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[2U][7U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [7U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][3U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [1U][4U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][2U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [2U][2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][3U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [3U][5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][4U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [4U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][5U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [5U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][6U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [6U][0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[3U][7U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [7U][7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][4U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [1U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][2U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [2U][7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [3U][0U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][4U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [4U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][5U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [5U][3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][6U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [6U][2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[4U][7U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [7U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][1U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [1U][0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][2U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [2U][3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [3U][7U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][4U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [4U][2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][5U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [5U][1U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][6U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [6U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[5U][7U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [7U][4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][6U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][1U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [1U][3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [2U][0U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [3U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][4U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [4U][4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][5U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [5U][7U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][6U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [6U][5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[6U][7U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [7U][2U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [0U][7U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][1U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [1U][6U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [2U][5U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][3U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [3U][4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][4U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [4U][3U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][5U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [5U][2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][6U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
        [6U][1U];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[7U][7U] 
        = (0xfffffffU & (- vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product
                         [7U][0U]));
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [0U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [1U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [2U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [3U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [4U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [5U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [6U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [0U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [1U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [2U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [3U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[4U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [4U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[5U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [5U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[6U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [6U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[7U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__r_cycle;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 3U) 
                         - TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 2U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [0U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [1U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [1U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [2U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [3U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [4U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [5U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [6U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [6U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                         [7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                      [7U], 5U));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 2U)));
    if (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) 
         & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
            >> 1U))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd, 6U) 
                              + VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd, 3U)) 
                             + VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd, 1U)));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_x1;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0 
            = (0xfffffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0 
                             + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [1U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [6U]));
}
