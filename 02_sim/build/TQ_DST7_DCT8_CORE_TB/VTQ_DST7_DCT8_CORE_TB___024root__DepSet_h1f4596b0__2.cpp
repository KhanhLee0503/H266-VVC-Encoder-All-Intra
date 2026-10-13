// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#include "VTQ_DST7_DCT8_CORE_TB__pch.h"
#include "VTQ_DST7_DCT8_CORE_TB___024root.h"

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__2(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group;
    }
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
    if ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
    }
}

extern const VlUnpacked<CData/*4:0*/, 4> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h56052800_0;
extern const VlUnpacked<CData/*1:0*/, 4> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h281138fc_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h7bcf9e17_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he9cb56c3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5b8e888a_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h2defcb7d_0;

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__3(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h998c785a__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 = 0;
    IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0;
    TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat = 0;
    CData/*1:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat = 0;
    CData/*1:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat = 0;
    CData/*1:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group = 0;
    CData/*1:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat = 0;
    CData/*2:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group = 0;
    CData/*2:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group = 0;
    CData/*2:0*/ __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat = 0;
    // Body
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid));
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid 
                = ((0x1eU & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                             << 1U)) | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid));
        }
        if ((((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
              & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid)) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group = 1U;
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group = 0U;
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat = 0U;
        } else if ((((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid)) 
                    & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
            if ((7U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group))) {
                __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group)));
            }
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group;
        if (((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state)) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group = 0U;
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat = 0U;
        } else if (((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state)) 
                    & (3U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group)))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group)));
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group;
        if ((((6U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state)) 
              & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready)) 
             & (3U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat)))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat)));
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat;
        if (((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
             & (7U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group)))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group)));
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
        if ((((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
              & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready)) 
             & (7U != (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)));
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat;
        if (((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire))) {
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat = 0U;
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat = 1U;
            __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat = 0U;
        } else {
            if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire) {
                __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat)));
            }
            if (((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                 & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire))) {
                __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat)));
            }
            if ((((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                  & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire)) 
                 & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat)))) {
                __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat)));
            }
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid = 0U;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat 
            = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat;
        __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat = 0U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat 
        = __Vdly__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat;
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
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        if (((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE;
        }
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size = 0U;
    }
    __Vtableidx2 = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h56052800_0
        [__Vtableidx2];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat 
        = VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h281138fc_0
        [__Vtableidx2];
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN)
            ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state)
            : 0U);
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state)))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx = 4U;
            }
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx = 4U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 1U;
            }
        } else {
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
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid = 0U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready 
            = (1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state) 
                        >> 1U)));
    }
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index 
        = (0x1fU & (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length) 
                     - (IData)(1U)) - ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat) 
                                       << 2U)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat) 
           == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat));
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
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        if ((((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
              & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid)) 
             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state;
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state = 0U;
    }
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid));
    if ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable)))) {
        if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx = 4U;
        }
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) 
           && (2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)));
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state;
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state = 0U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready = 0U;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last 
            = ((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))) 
                                  && (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat))));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid 
            = ((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && (1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state))));
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
    if (((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
         & (4U > (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx = 4U;
    }
    if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last 
                = (1U & ((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                         & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat))));
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid 
                = (1U & (4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)));
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last 
                = (1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last));
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid 
                = (1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid));
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last 
            = (1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid 
            = (1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid));
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last 
            = (1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid 
            = (1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                     >> 4U));
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready 
        = ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
           | (1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID = 0U;
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid;
    } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID = 1U;
    }
}

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__0\n"); );
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
}

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__2(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__2\n"); );
    // Body
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] = 0U;
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
        }
    } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output[3U] = 0U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output[3U] = 0U;
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
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] = 0U;
    if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA[3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data[3U];
    } else if (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable) {
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
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h22c22758_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he5ee495b_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h42fb3b03_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_he0c7f58c_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_hd5ee42d1_0;
extern const VlUnpacked<CData/*2:0*/, 32> VTQ_DST7_DCT8_CORE_TB__ConstPool__TABLE_h5a5172de_0;

VL_INLINE_OPT void VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__3(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if ((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE;
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0 
        = (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
            & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable)) 
           | (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire 
        = ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID));
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

void VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
void VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__1(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
void VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

void VTQ_DST7_DCT8_CORE_TB___024root___eval_nba(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__1(vlSelf);
        VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0xfaULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfeULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DST7_DCT8_CORE_TB___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
}

void VTQ_DST7_DCT8_CORE_TB___024root___timing_resume(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2b4e4f02__0.resume("@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcec6656b__0.resume("@([changed] (32'h1 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcec6f57c__0.resume("@([changed] (32'h2 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcec5890d__0.resume("@([changed] (32'h3 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcedb191e__0.resume("@([changed] (32'h4 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcedb28f7__0.resume("@([changed] (32'h5 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_DST7_DCT8_CORE_TB___024root___timing_commit(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2b4e4f02__0.commit("@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcec6656b__0.commit("@([changed] (32'h1 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcec6f57c__0.commit("@([changed] (32'h2 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcec5890d__0.commit("@([changed] (32'h3 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcedb191e__0.commit("@([changed] (32'h4 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcedb28f7__0.commit("@([changed] (32'h5 == TQ_DST7_DCT8_CORE_TB.r_completed))");
    }
}

void VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
void VTQ_DST7_DCT8_CORE_TB___024root___eval_act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

bool VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__act(vlSelf);
    VTQ_DST7_DCT8_CORE_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_DST7_DCT8_CORE_TB___024root___timing_resume(vlSelf);
        VTQ_DST7_DCT8_CORE_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__nba(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_DST7_DCT8_CORE_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__nba(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_DST7_DCT8_CORE_TB___024root___eval(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_DST7_DCT8_CORE_TB___024root___eval_debug_assertions(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
