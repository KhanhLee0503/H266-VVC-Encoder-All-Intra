// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#include "VTQ_DST7_DCT8_CORE_TB__pch.h"
#include "VTQ_DST7_DCT8_CORE_TB___024root.h"

extern const VlUnpacked<CData/*4:0*/, 4> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h56052800_0;
extern const VlUnpacked<CData/*1:0*/, 4> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h281138fc_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h7bcf9e17_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he9cb56c3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5b8e888a_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h2defcb7d_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h22c22758_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he5ee495b_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h42fb3b03_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he0c7f58c_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_hd5ee42d1_0;
extern const VlUnpacked<CData/*2:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5a5172de_0;

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__1(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__1\n"); );
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
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[3U] = 0U;
    if (((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
         & (4U > (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
            [(0xcU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat) 
                      << 2U))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U] 
            = ((0xf0000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U]) 
               | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0);
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
            [(0xfU & ((IData)(1U) + (0xcU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat) 
                                             << 2U))))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U] 
            = ((0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x1cU));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U] 
            = ((0xff000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 4U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
            [(0xfU & ((IData)(2U) + (0xcU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat) 
                                             << 2U))))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U] 
            = ((0xffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x18U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U] 
            = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 8U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc
            [(0xfU & ((IData)(3U) + (0xcU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat) 
                                             << 2U))))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U] 
            = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x14U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[3U] 
            = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                          >> 0xcU));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[0U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input
        [((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group) 
          << 2U)];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[1U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input
        [(0x1fU & ((IData)(1U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group) 
                                  << 2U)))];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[2U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input
        [(0x1fU & ((IData)(2U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group) 
                                  << 2U)))];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[3U] 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input
        [(0x1fU & ((IData)(3U) + ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group) 
                                  << 2U)))];
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid = 0U;
    __Vtableidx2 = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h56052800_0
        [__Vtableidx2];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h281138fc_0
        [__Vtableidx2];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3U] = 0U;
    if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xfU];
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
                [0xbU];
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [7U];
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input
            [3U];
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready = 0U;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] 
                    = ((0xf0000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U]) 
                       | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0);
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] 
                    = ((0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x1cU));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] 
                    = ((0xff000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 4U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] 
                    = ((0xffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x18U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] 
                    = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 8U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] 
                    = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x14U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] 
                    = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                                  >> 0xcU));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 1U;
            } else {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] 
                    = ((0xf0000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U]) 
                       | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0);
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] 
                    = ((0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x1cU));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] 
                    = ((0xff000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 4U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] 
                    = ((0xffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x18U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] 
                    = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 8U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result
                    [3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] 
                    = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x14U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] 
                    = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                                  >> 0xcU));
            }
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 0U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid 
            = (1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state) 
                     >> 1U));
        if ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state) 
                      >> 1U)))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid = 0U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready 
            = (1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state) 
                        >> 1U)));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready 
        = ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
           | (1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)));
    __Vtableidx3 = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h7bcf9e17_0
        [__Vtableidx3];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he9cb56c3_0
        [__Vtableidx3];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5b8e888a_0
        [__Vtableidx3];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h2defcb7d_0
        [__Vtableidx3];
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
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [4U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [4U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [4U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [4U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [5U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [5U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [5U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [5U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [6U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [6U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [6U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [6U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [7U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [7U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [7U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [7U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [8U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [8U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [8U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [8U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [9U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [9U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [9U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [9U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xaU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xaU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xaU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xaU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xbU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xbU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xbU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xbU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xcU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xcU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xcU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xcU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xdU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xdU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xdU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xdU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xeU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xeU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xeU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xeU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xfU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xfU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xfU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg
            [0xfU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [4U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [4U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [4U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [4U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [5U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [5U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [5U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [5U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [6U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [6U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [6U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [6U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [7U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [7U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [7U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [7U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [8U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [8U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [8U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [8U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [9U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [9U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [9U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [9U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xaU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xaU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xaU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xaU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xbU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xbU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xbU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xbU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xcU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xcU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xcU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xcU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xdU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xdU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xdU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xdU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xeU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xeU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xeU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xeU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xfU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xfU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xfU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag
            [0xfU][3U];
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [4U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [4U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [4U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [4U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [5U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [5U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [5U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [5U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [6U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [6U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [6U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [6U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [7U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [7U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [7U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [7U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [8U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [8U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [8U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [8U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [9U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [9U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [9U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [9U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xaU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xaU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xaU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xaU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xbU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xbU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xbU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xbU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xcU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xcU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xcU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xcU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xdU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xdU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xdU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xdU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xeU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xeU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xeU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xeU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xfU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xfU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xfU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg
            [0xfU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [4U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [4U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [4U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [4U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [5U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [5U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [5U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [5U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [6U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [6U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [6U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [6U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [7U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [7U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [7U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [7U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [8U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [8U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [8U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [8U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [9U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [9U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [9U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [9U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xaU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xaU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xaU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xaU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xbU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xbU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xbU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xbU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xcU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xcU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xcU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xcU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xdU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xdU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xdU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xdU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xeU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xeU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xeU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xeU][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xfU][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xfU][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xfU][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag
            [0xfU][3U];
    }
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] = 0U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] = 0U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] = 0U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] = 0U;
            } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat))) {
                if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat))) {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                    [0xdU])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                [0xcU]))));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] 
                        = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                            [0xeU] << 0x18U) | (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                          [0xdU])) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                           [0xcU]))) 
                                                        >> 0x20U)));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                        = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                           | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                              [0xeU] >> 8U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                        = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                           | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                              [0xfU] << 0x14U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] 
                        = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                      [0xfU] >> 0xcU));
                } else {
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                    [9U])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                [8U]))));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] 
                        = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                            [0xaU] << 0x18U) | (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                          [9U])) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                           [8U]))) 
                                                        >> 0x20U)));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                        = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                           | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                              [0xaU] >> 8U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                        = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                           | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                              [0xbU] << 0x14U));
                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] 
                        = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                      [0xbU] >> 0xcU));
                }
            } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] 
                    = (IData)((((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                [5U])) 
                                << 0x1cU) | (QData)((IData)(
                                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                            [4U]))));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] 
                    = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                        [6U] << 0x18U) | (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                    [5U])) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                     [4U]))) 
                                                  >> 0x20U)));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                    = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                          [6U] >> 8U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                    = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                          [7U] << 0x14U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] 
                    = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                  [7U] >> 0xcU));
            } else {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] 
                    = (IData)((((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                [1U])) 
                                << 0x1cU) | (QData)((IData)(
                                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                            [0U]))));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] 
                    = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                        [2U] << 0x18U) | (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                    [1U])) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                                                     [0U]))) 
                                                  >> 0x20U)));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                    = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                          [2U] >> 8U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] 
                    = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U]) 
                       | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                          [3U] << 0x14U));
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] 
                    = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc
                                  [3U] >> 0xcU));
            }
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] = 0U;
        }
    }
    if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output[3U];
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U];
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U];
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                        [1U])) << 0x1cU) 
                       | (QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                         [0U]))));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U] 
            = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                            [1U])) 
                                            << 0x1cU) 
                                           | (QData)((IData)(
                                                             vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                             [0U]))) 
                                          >> 0x20U)));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U] 
            = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                [3U] << 0x14U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                  [2U] >> 8U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U] 
            = (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
               [3U] >> 0xcU);
    }
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last 
            = ((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) 
                                  && (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat))));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last 
        = (1U & ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                  ? ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                      ? ((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                         & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))
                      : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last))
                  : ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                      ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last)
                      : ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                         >> 4U))));
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid 
            = ((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && (1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid 
        = (1U & ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                  ? ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                      ? (4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))
                      : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid))
                  : ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                      ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid)
                      : ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                         >> 4U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[0U] 
        = ((0xfff0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
                                            [0U] >> 0xfU)))) 
                          << 0x10U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
           [0U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[1U] 
        = ((0xfff0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
                                            [1U] >> 0xfU)))) 
                          << 0x10U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
           [1U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[2U] 
        = ((0xfff0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
                                            [2U] >> 0xfU)))) 
                          << 0x10U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
           [2U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[3U] 
        = ((0xfff0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
                                            [3U] >> 0xfU)))) 
                          << 0x10U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample
           [3U]);
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index 
        = (0x1fU & (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length) 
                     - (IData)(1U)) - ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat) 
                                       << 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat) 
           == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [0U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [1U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [2U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [3U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [0U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [1U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [2U]);
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample
           [3U]);
    if ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable)))) {
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx = 4U;
        }
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0 
        = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
            & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable)) 
           | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable));
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST = 0U;
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last;
    } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer
            [(0xfU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
            = ((0xf0000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U]) 
               | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0);
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer
            [(0xfU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index) 
                      - (IData)(1U)))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
            = ((0xfffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                  << 0x1cU));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
            = ((0xff000000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                  >> 4U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer
            [(0xfU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index) 
                      - (IData)(2U)))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
            = ((0xffffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                  << 0x18U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
            = ((0xfff00000U & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                  >> 8U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer
            [(0xfU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index) 
                      - (IData)(3U)))];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
            = ((0xfffffU & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U]) 
               | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                  << 0x14U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] 
            = (0xffffU & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 
                          >> 0xcU));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0, 1U) 
                         + TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0));
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7
                         [7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [0U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [1U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [2U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [3U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [4U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [5U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [6U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) + 
                         vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                         [7U]));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[0U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[1U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[2U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[3U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[4U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[5U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[6U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[7U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID));
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = 0U;
            }
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = 0U;
        }
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = 1U;
    }
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

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
void VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_DST7_DCT8_CORE_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TQ_DST7_DCT8_CORE_TB.u_dut.u_dst7_mcm_8.w_product)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TQ_DST7_DCT8_CORE_TB.I_CLK or negedge TQ_DST7_DCT8_CORE_TB.I_RESETN)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] (32'h1 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] (32'h2 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] (32'h3 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] (32'h4 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] (32'h5 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__nba(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TQ_DST7_DCT8_CORE_TB.u_dut.u_dst7_mcm_8.w_product)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TQ_DST7_DCT8_CORE_TB.I_CLK or negedge TQ_DST7_DCT8_CORE_TB.I_RESETN)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] (32'h1 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] (32'h2 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] (32'h3 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] (32'h4 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] (32'h5 == TQ_DST7_DCT8_CORE_TB.r_completed))\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___ctor_var_reset(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = VL_RAND_RESET_Q(64);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__0 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__2 = VL_RAND_RESET_I(32);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length = VL_RAND_RESET_I(5);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[__Vi0] = VL_RAND_RESET_I(17);
    }
    VL_RAND_RESET_W(68, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0 = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0 = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0 = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_x1 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 = VL_RAND_RESET_I(28);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 15; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group = VL_RAND_RESET_I(2);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk3__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk4__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__unnamedblk6__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__unnamedblk8__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk10__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 31; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_mode = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode = VL_RAND_RESET_I(1);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk9__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk10__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__unnamedblk14__DOT__mcm_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk16__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk17__DOT__lane_idx = 0;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0 = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__0[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__1[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h56f2315d__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h56f1c0ee__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h56f24e7b__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h56ecde8c__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h56eceed9__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
