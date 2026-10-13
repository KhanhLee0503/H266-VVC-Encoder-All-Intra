// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB__Syms.h"

extern const VlUnpacked<CData/*4:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlUnpacked<CData/*2:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlWide<28>/*895:0*/ VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0;
extern const VlUnpacked<CData/*1:0*/, 256> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc34802d6_0;
extern const VlUnpacked<CData/*2:0*/, 32> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h5a5172de_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc513c410_0;

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1\n"); );
    // Init
    CData/*0:0*/ u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0;
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_8;
    // Body
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
    if ((2U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xaU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xcU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][7U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][2U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][9U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][9U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
        }
    } else if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][8U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xeU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xbU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][6U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][4U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][4U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][9U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xeU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][2U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                      >> 1U)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready 
            = (1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                        >> 1U)));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
    __Vtableidx1 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_required = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx1];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
           | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
    vlSelf->__PVT__w_mts_output_valid = (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state));
    vlSelf->__PVT__w_mts_output_last = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                        & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                           == (0xfU 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                                  - (IData)(1U)))));
    __Vtableidx2 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_last_beat = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx2];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready 
        = ((((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
             | (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
            | (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
           & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
              < (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)))));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                         & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat))));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                        [1U])) << 0x1cU) 
                       | (QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                         [0U]))));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                            [1U])) 
                                            << 0x1cU) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                             [0U]))) 
                                          >> 0x20U)));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [3U] << 0x14U) | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                  [2U] >> 8U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
               [3U] >> 0xcU);
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready = 0U;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [0U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [1U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [2U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [3U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [4U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [5U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [6U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [3U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[4U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [4U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[5U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [5U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[6U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [6U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[7U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->__PVT__w_mts_output_ready = 0U;
    vlSelf->__PVT__w_dct2_output_ready = 0U;
    __Vtemp_2[1U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                       [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]) 
                      | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                         [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0xdU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0xbU) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(9U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(7U) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                                       << 0x10U));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                  << 0x10U) 
                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0xbU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(9U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                              << 0x10U) 
                                                             | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(7U) 
                                                                 << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0xdU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                << 0x10U) 
                                                               | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0xbU) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(9U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[2U] 
        = __Vtemp_2[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                  >> 0x20U)) >> 0x10U));
    __Vtemp_8[5U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                       [(0x1fU & ((IData)(0x15U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
                      | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                         [(0x1fU & ((IData)(0x13U) 
                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x1dU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x1bU) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x19U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x17U) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                                       << 0x10U));
    __Vtemp_8[6U] = (((IData)((((QData)((IData)(((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                  << 0x10U) 
                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(0x19U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                              << 0x10U) 
                                                             | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(0x17U) 
                                                                 << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x1dU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                << 0x10U) 
                                                               | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0x1bU) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x19U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x17U) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[1U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(7U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[2U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(9U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xbU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[3U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0xdU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xbU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xfU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[4U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0x11U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0x13U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[5U] 
        = __Vtemp_8[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[6U] 
        = __Vtemp_8[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0x1fU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[3U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[4U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[7U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[8U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[9U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xaU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xbU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xcU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xdU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xeU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xfU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x10U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x11U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x12U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x13U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x14U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x15U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x16U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x17U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x18U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x19U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1aU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1bU];
    vlSelf->__VdfgTmp_hac367811__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafacefe0__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafd47e8e__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_haf857428__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [3U]);
    vlSelf->O_DATA[0U] = 0U;
    vlSelf->O_DATA[1U] = 0U;
    vlSelf->O_DATA[2U] = 0U;
    vlSelf->O_DATA[3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid 
        = ((- (IData)((2U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)))) 
           & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_sent)) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_required)));
    vlSelf->__PVT__w_dct2_output_valid = (4U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    vlSelf->__PVT__w_dct2_output_last = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                         & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat) 
                                            == (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_last_beat)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready 
        = (1U & ((~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U)) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready)));
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready 
                = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
        }
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [0U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [1U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [2U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [3U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [4U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [5U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [6U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [7U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 2U)));
    vlSelf->__PVT__w_active_size = ((0U == (IData)(vlSelf->__PVT__r_current_state))
                                     ? (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size)
                                     : (IData)(vlSelf->__PVT__r_transform_size));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))
            ? (IData)(vlSelf->__PVT__w_active_size)
            : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size));
    vlSelf->__PVT__w_active_type = ((0U == (IData)(vlSelf->__PVT__r_current_state))
                                     ? (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type)
                                     : (IData)(vlSelf->__PVT__r_transform_type));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))
            ? (2U == (IData)(vlSelf->__PVT__w_active_type))
            : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode));
    vlSelf->__VdfgTmp_hc516f753__0 = ((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                      | (2U == (IData)(vlSelf->__PVT__w_active_type)));
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U != (IData)(vlSelf->__PVT__r_transform_type))) {
            if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                 || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
                vlSelf->__PVT__w_mts_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready;
            }
        }
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire 
        = ((IData)(vlSelf->__PVT__w_mts_output_ready) 
           & (IData)(vlSelf->__PVT__w_mts_output_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_fire 
        = ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready) 
           & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0));
    vlSelf->O_DATA_LAST = 0U;
    vlSelf->O_DATA_VALID = 0U;
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U == (IData)(vlSelf->__PVT__r_transform_type))) {
            vlSelf->__PVT__w_dct2_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready;
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_dct2_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_dct2_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_dct2_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_dct2_output_data[3U];
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_dct2_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_dct2_output_valid;
        } else if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                    || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_mts_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_mts_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_mts_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_mts_output_data[3U];
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_mts_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_mts_output_valid;
        } else {
            vlSelf->O_DATA[0U] = 0U;
            vlSelf->O_DATA[1U] = 0U;
            vlSelf->O_DATA[2U] = 0U;
            vlSelf->O_DATA[3U] = 0U;
        }
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_output_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_output_ready) 
           & (IData)(vlSelf->__PVT__w_dct2_output_valid));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->__PVT__w_mts_input_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 1U;
    }
    if (((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready 
            = ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                ? ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                        & (4U <= (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))) 
                       | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready))
                : ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready)
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready)));
        vlSelf->__PVT__w_mts_input_ready = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA))))))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[1U] 
        = ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
              ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA))))))) 
                                 >> 0x20U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[2U] 
        = (0xfU & (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                     ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0));
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0);
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0);
    }
    vlSelf->__PVT__w_input_enable = (((0U == (IData)(vlSelf->__PVT__r_current_state)) 
                                      | (1U == (IData)(vlSelf->__PVT__r_current_state))) 
                                     & (((IData)(vlSelf->__PVT__r_input_beat_count) 
                                         < (0xfU & 
                                            ((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__w_active_size)))) 
                                        & ((0U == (IData)(vlSelf->__PVT__w_active_type)) 
                                           | (IData)(vlSelf->__VdfgTmp_hc516f753__0))));
    vlSelf->__PVT__w_output_fire = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready) 
                                    & (IData)(vlSelf->O_DATA_VALID));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->I_DATA_READY = 0U;
    if (vlSelf->__PVT__w_input_enable) {
        vlSelf->I_DATA_READY = ((0U == (IData)(vlSelf->__PVT__w_active_type))
                                 ? (IData)(vlSelf->__PVT__w_dct2_input_ready)
                                 : (((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                     || (2U == (IData)(vlSelf->__PVT__w_active_type))) 
                                    && (IData)(vlSelf->__PVT__w_mts_input_ready)));
        vlSelf->__VdfgTmp_h1c9e6317__0 = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid;
    } else {
        vlSelf->__VdfgTmp_h1c9e6317__0 = 0U;
    }
    __Vtableidx5 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                     << 7U) | ((0x40U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & ((3U 
                                                   == 
                                                   vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                                   [4U]) 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc34802d6_0
        [__Vtableidx5];
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready = 0U;
    vlSelf->__PVT__w_input_fire = ((IData)(vlSelf->I_DATA_READY) 
                                   & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid));
    vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_input_ready) 
           & ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
              & (0U == (IData)(vlSelf->__PVT__w_active_type))));
    vlSelf->__PVT__w_mts_input_valid = ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
                                        & (IData)(vlSelf->__VdfgTmp_hc516f753__0));
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xdU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xfU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x10U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x11U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x12U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x13U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x14U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x15U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x16U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x17U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x18U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x19U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1aU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1bU];
            vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready;
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xdU];
            vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready 
                = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[3U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[4U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[5U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[6U];
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = ((0xffff0000U & vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U]) 
               | vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[3U]);
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready)));
    vlSelf->__PVT__w_next_state = vlSelf->__PVT__r_current_state;
    if ((0U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (vlSelf->__PVT__w_input_fire) {
            vlSelf->__PVT__w_next_state = ((1U == (0xfU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__w_active_size))))
                                            ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_input_fire) & 
             ((0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__r_input_beat_count))) 
              == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__w_active_size)))))) {
            vlSelf->__PVT__w_next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_output_fire) 
             & (IData)(vlSelf->O_DATA_LAST))) {
            vlSelf->__PVT__w_next_state = 0U;
        }
    } else {
        vlSelf->__PVT__w_next_state = 0U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & (IData)(vlSelf->__PVT__w_mts_input_ready));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)) 
              & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                 | ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                    & (4U > (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))))));
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
              | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats 
        = (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire) 
                 & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                    == (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                - (IData)(1U)))))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 0U;
            }
        } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
                    == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) 
             & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat) 
                == (0xfU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats) 
                            - (IData)(1U)))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
            = ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats))
                ? 2U : 1U);
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready)) 
                    & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready)) 
             & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
                & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 1U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    __Vtableidx7 = (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid) 
                     << 4U) | (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready) 
                                << 3U) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h5a5172de_0
        [__Vtableidx7];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready) 
                        & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 6U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 1U;
    }
    __Vtableidx3 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                     << 6U) | ((0x20U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                                                  [4U] 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc513c410_0
        [__Vtableidx3];
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready = 0U;
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready;
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready 
        = ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
            ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
            : ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
                : (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__w_base_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd4_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1\n"); );
    // Init
    CData/*0:0*/ u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0;
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 = 0;
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*1:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*4:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_8;
    // Body
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
    if ((2U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xaU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][7U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][2U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][9U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][9U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
        }
    } else if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][8U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xeU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xbU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][6U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][4U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][9U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xeU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][2U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
    }
    __Vtableidx8 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_required = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx8];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                      >> 1U)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready 
            = (1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                        >> 1U)));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
    vlSelf->__PVT__w_mts_output_valid = (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state));
    vlSelf->__PVT__w_mts_output_last = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                        & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                           == (0xfU 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                                  - (IData)(1U)))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
           | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
    __Vtableidx9 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_last_beat = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx9];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready 
        = ((((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
             | (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
            | (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
           & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
              < (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)))));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                         & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat))));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                        [1U])) << 0x1cU) 
                       | (QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                         [0U]))));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                            [1U])) 
                                            << 0x1cU) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                             [0U]))) 
                                          >> 0x20U)));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [3U] << 0x14U) | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                  [2U] >> 8U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
               [3U] >> 0xcU);
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready = 0U;
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [0U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [1U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [2U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [3U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [4U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [5U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [6U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [3U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[4U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [4U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [4U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[5U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [5U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [5U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[6U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [6U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [6U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[7U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
                                            [7U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input
           [7U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[0U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[1U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x10U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[2U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x20U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[3U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x30U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[0U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[2U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x20U))));
    vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x10U))));
    vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x30U))));
    vlSelf->__PVT__w_mts_output_ready = 0U;
    vlSelf->__PVT__w_dct2_output_ready = 0U;
    __Vtemp_2[1U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                       [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]) 
                      | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                         [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0xdU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0xbU) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(9U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(7U) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                                       << 0x10U));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                  << 0x10U) 
                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0xbU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(9U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                              << 0x10U) 
                                                             | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(7U) 
                                                                 << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0xdU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                << 0x10U) 
                                                               | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0xbU) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(9U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[2U] 
        = __Vtemp_2[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                  >> 0x20U)) >> 0x10U));
    __Vtemp_8[5U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                       [(0x1fU & ((IData)(0x15U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
                      | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                         [(0x1fU & ((IData)(0x13U) 
                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x1dU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x1bU) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x19U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x17U) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                                       << 0x10U));
    __Vtemp_8[6U] = (((IData)((((QData)((IData)(((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                  << 0x10U) 
                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(0x19U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                              << 0x10U) 
                                                             | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(0x17U) 
                                                                 << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x1dU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                << 0x10U) 
                                                               | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0x1bU) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x19U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x17U) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[1U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(7U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[2U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(9U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xbU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[3U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0xdU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xbU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xfU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[4U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0x11U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0x13U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[5U] 
        = __Vtemp_8[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[6U] 
        = __Vtemp_8[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0x1fU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[3U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[4U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[7U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[8U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[9U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xaU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xbU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xcU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xdU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xeU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xfU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x10U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x11U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x12U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x13U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x14U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x15U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x16U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x17U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x18U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x19U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1aU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1bU];
    vlSelf->__VdfgTmp_hac367811__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafacefe0__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafd47e8e__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_haf857428__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [3U]);
    vlSelf->O_DATA[0U] = 0U;
    vlSelf->O_DATA[1U] = 0U;
    vlSelf->O_DATA[2U] = 0U;
    vlSelf->O_DATA[3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid 
        = ((- (IData)((2U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)))) 
           & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_sent)) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_required)));
    vlSelf->__PVT__w_dct2_output_valid = (4U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    vlSelf->__PVT__w_dct2_output_last = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                         & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat) 
                                            == (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_last_beat)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready 
        = (1U & ((~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U)) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready)));
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready 
                = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
        }
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h16729da6__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h7d0dca57__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h30f2767f__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h769c81be__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hcf17751c__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_hd001c403__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h1620cedb__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 3U) 
                         - u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[7U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0, 2U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____VdfgTmp_h2ab35d56__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [0U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [1U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [2U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [3U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [4U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [5U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [6U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 2U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][1U] 
        = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                      [7U], 5U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 2U)));
    vlSelf->__PVT__w_active_size = ((0U == (IData)(vlSelf->__PVT__r_current_state))
                                     ? (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size)
                                     : (IData)(vlSelf->__PVT__r_transform_size));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))
            ? (IData)(vlSelf->__PVT__w_active_size)
            : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size));
    vlSelf->__PVT__w_active_type = ((0U == (IData)(vlSelf->__PVT__r_current_state))
                                     ? (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type)
                                     : (IData)(vlSelf->__PVT__r_transform_type));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))
            ? (2U == (IData)(vlSelf->__PVT__w_active_type))
            : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode));
    vlSelf->__VdfgTmp_hc516f753__0 = ((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                      | (2U == (IData)(vlSelf->__PVT__w_active_type)));
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U != (IData)(vlSelf->__PVT__r_transform_type))) {
            if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                 || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
                vlSelf->__PVT__w_mts_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready;
            }
        }
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire 
        = ((IData)(vlSelf->__PVT__w_mts_output_ready) 
           & (IData)(vlSelf->__PVT__w_mts_output_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_fire 
        = ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready) 
           & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0));
    vlSelf->O_DATA_LAST = 0U;
    vlSelf->O_DATA_VALID = 0U;
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U == (IData)(vlSelf->__PVT__r_transform_type))) {
            vlSelf->__PVT__w_dct2_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready;
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_dct2_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_dct2_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_dct2_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_dct2_output_data[3U];
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_dct2_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_dct2_output_valid;
        } else if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                    || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_mts_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_mts_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_mts_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_mts_output_data[3U];
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_mts_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_mts_output_valid;
        } else {
            vlSelf->O_DATA[0U] = 0U;
            vlSelf->O_DATA[1U] = 0U;
            vlSelf->O_DATA[2U] = 0U;
            vlSelf->O_DATA[3U] = 0U;
        }
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_output_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_output_ready) 
           & (IData)(vlSelf->__PVT__w_dct2_output_valid));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][4U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 6U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][6U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) + 
                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                         [7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[0U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [0U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [0U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[1U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [1U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [1U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[2U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [2U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [2U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[3U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [3U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [3U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[4U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [4U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [4U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[5U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [5U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [5U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[6U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [6U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [6U], 1U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product[7U][5U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5
                                       [7U], 4U) - 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext
                                       [7U], 1U)));
    vlSelf->__PVT__w_mts_input_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 1U;
    }
    if (((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready 
            = ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                ? ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                        & (4U <= (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))) 
                       | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready))
                : ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready)
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready)));
        vlSelf->__PVT__w_mts_input_ready = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data))))))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[1U] 
        = ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
              ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data))))))) 
                                 >> 0x20U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[2U] 
        = (0xfU & (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                     ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0));
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0);
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0);
    }
    vlSelf->__PVT__w_input_enable = (((0U == (IData)(vlSelf->__PVT__r_current_state)) 
                                      | (1U == (IData)(vlSelf->__PVT__r_current_state))) 
                                     & (((IData)(vlSelf->__PVT__r_input_beat_count) 
                                         < (0xfU & 
                                            ((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__w_active_size)))) 
                                        & ((0U == (IData)(vlSelf->__PVT__w_active_type)) 
                                           | (IData)(vlSelf->__VdfgTmp_hc516f753__0))));
    vlSelf->__PVT__w_output_fire = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready) 
                                    & (IData)(vlSelf->O_DATA_VALID));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->I_DATA_READY = 0U;
    if (vlSelf->__PVT__w_input_enable) {
        vlSelf->I_DATA_READY = ((0U == (IData)(vlSelf->__PVT__w_active_type))
                                 ? (IData)(vlSelf->__PVT__w_dct2_input_ready)
                                 : (((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                     || (2U == (IData)(vlSelf->__PVT__w_active_type))) 
                                    && (IData)(vlSelf->__PVT__w_mts_input_ready)));
        vlSelf->__VdfgTmp_h1c9e6317__0 = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid;
    } else {
        vlSelf->__VdfgTmp_h1c9e6317__0 = 0U;
    }
    __Vtableidx12 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                      << 7U) | ((0x40U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                          << 2U)) | 
                                (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx) 
                                  << 4U) | ((0x7ffffff8U 
                                             & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                                                 >> 1U) 
                                                & ((3U 
                                                    == 
                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                                    [4U]) 
                                                   << 3U))) 
                                            | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc34802d6_0
        [__Vtableidx12];
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready = 0U;
    vlSelf->__PVT__w_input_fire = ((IData)(vlSelf->I_DATA_READY) 
                                   & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid));
    vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_input_ready) 
           & ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
              & (0U == (IData)(vlSelf->__PVT__w_active_type))));
    vlSelf->__PVT__w_mts_input_valid = ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
                                        & (IData)(vlSelf->__VdfgTmp_hc516f753__0));
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xdU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xfU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x10U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x11U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x12U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x13U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x14U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x15U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x16U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x17U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x18U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x19U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1aU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1bU];
            vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready;
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xdU];
            vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready 
                = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[3U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[4U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[5U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[6U];
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = ((0xffff0000U & vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U]) 
               | vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[3U]);
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready)));
    vlSelf->__PVT__w_next_state = vlSelf->__PVT__r_current_state;
    if ((0U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (vlSelf->__PVT__w_input_fire) {
            vlSelf->__PVT__w_next_state = ((1U == (0xfU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__w_active_size))))
                                            ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_input_fire) & 
             ((0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__r_input_beat_count))) 
              == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__w_active_size)))))) {
            vlSelf->__PVT__w_next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_output_fire) 
             & (IData)(vlSelf->O_DATA_LAST))) {
            vlSelf->__PVT__w_next_state = 0U;
        }
    } else {
        vlSelf->__PVT__w_next_state = 0U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & (IData)(vlSelf->__PVT__w_mts_input_ready));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)) 
              & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                 | ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                    & (4U > (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))))));
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
              | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats 
        = (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire) 
                 & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                    == (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                - (IData)(1U)))))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 0U;
            }
        } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
                    == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) 
             & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat) 
                == (0xfU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats) 
                            - (IData)(1U)))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
            = ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats))
                ? 2U : 1U);
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready)) 
                    & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready)) 
             & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
                & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 1U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    __Vtableidx14 = (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid) 
                      << 4U) | (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready) 
                                 << 3U) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h5a5172de_0
        [__Vtableidx14];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready) 
                        & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 6U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 1U;
    }
    __Vtableidx10 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                      << 6U) | ((0x20U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                          << 2U)) | 
                                (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx) 
                                  << 4U) | ((0x7ffffff8U 
                                             & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                                                 >> 1U) 
                                                & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                                                   [4U] 
                                                   << 3U))) 
                                            | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc513c410_0
        [__Vtableidx10];
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready = 0U;
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready;
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready 
        = ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
            ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
            : ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
                : (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__w_base_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd4_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
}
