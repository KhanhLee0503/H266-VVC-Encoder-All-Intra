// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial\n"); );
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP(vlSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk__0 
        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n__0 
        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           97);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk 
            = (1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk)));
    }
}

VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__2(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__3(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__4(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

VL_INLINE_OPT VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
    co_await VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__2(vlSelf);
    co_await VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__3(vlSelf);
    co_await VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__4(vlSelf);
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___act_comb__TOP__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready 
        = (1U & ((~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready)));
    if ((0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp))) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
    } else {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready 
        = ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear)) 
              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n)));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept 
        = ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
           & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready));
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_act(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp))) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
    } else {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[1U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[3U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[5U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[7U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[0U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[2U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[4U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                     >> 0x10U));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[6U] 
        = (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU]);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
                     >> 0x10U));
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n) {
        if (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear) {
            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid = 0U;
        } else if (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready) {
            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid;
        }
    } else {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid = 0U;
    }
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[1U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[2U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[3U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[4U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[5U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[6U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[7U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[8U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[9U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xaU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xbU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xcU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xdU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xeU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xfU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x10U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x11U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x12U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x13U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x14U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x15U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x16U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x17U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x18U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x19U] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1aU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1bU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1cU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1dU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1eU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1fU] 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))))))));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
            = (((QData)((IData)((0xfffU & ((0x800U 
                                            & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                            ? (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                            : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))))) 
                << 0x24U) | (((QData)((IData)((0xfffU 
                                               & ((0x800U 
                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                   ? 
                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))))) 
                              << 0x18U) | (QData)((IData)(
                                                          ((0xfff000U 
                                                            & (((0x800U 
                                                                 & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                 ? 
                                                                (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                 : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len)) 
                                                               << 0xcU)) 
                                                           | (0xfffU 
                                                              & ((0x800U 
                                                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                  ? 
                                                                 (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                  : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))))))));
    }
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready 
        = (1U & ((~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready)));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready 
        = ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear)) 
              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n)));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept 
        = ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
           & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready));
}

VL_INLINE_OPT void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__2(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension 
        = (0xfffU & ((((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
                                  >> 0x10U)) - (0x3ffU 
                                                & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U])) 
                      - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                                   >> 0x10U))) + (0x3ffU 
                                                  & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension 
        = (0xfffU & ((((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]) 
                       - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
                                    >> 0x10U))) - (0x3ffU 
                                                   & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U])) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                >> 0x10U)) - (0x3ffU 
                                              & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]) 
                     - (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near 
        = (0xfffU & (((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U]) 
                      - VL_SHIFTL_III(12,12,32, (0x3ffU 
                                                 & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
                                                    >> 0x10U)), 1U)) 
                     + (0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near 
        = (0xfffU & (((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
                                 >> 0x10U)) - VL_SHIFTL_III(12,12,32, 
                                                            (0x3ffU 
                                                             & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U]), 1U)) 
                     + (0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
                                  >> 0x10U))));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len 
        = (0xfffU & ((0x3ffU & (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
                                >> 0x10U)) - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0]));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len 
        = (0xfffU & ((0x3ffU & vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U]) 
                     - vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p
                     [vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0]));
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_nba(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_nba\n"); );
    // Body
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_resume(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4badd57d__0.resume("@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_commit(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4badd57d__0.commit("@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)");
    }
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_triggers__act(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

bool VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__act(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_triggers__act(vlSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___timing_resume(vlSelf);
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__nba(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__nba(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__act(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_debug_assertions(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
