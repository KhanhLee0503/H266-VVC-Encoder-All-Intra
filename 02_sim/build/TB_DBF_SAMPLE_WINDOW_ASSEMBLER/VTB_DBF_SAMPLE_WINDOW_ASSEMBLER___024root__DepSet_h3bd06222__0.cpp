// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial\n"); );
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP(vlSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n__0 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                           108);
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk 
            = (1U & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk)));
    }
}

VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__1(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__2(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__3(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__4(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__5(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

VL_INLINE_OPT VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__2(vlSelf);
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__3(vlSelf);
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__4(vlSelf);
    co_await VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__5(vlSelf);
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___act_comb__TOP__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire 
        = (((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
            | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) 
           & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry 
        = ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
           & ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
              & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
                 & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
                    & ((0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width))) 
                       & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height))))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire 
        = ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
               < (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count)) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start))))));
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34 = 0;
    QData/*63:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3;
    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3;
    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3;
    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0;
    // Body
    vlSelf->__Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31 = 0U;
    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32 = 0U;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_en) {
        if ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component))) {
            if ((1U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component))) {
                if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component))) {
                    if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                        __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 
                            = (0xffffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data));
                        __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 1U;
                        __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 = 0U;
                        __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0 
                            = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                    }
                    if ((2U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                        __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 
                            = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                                  >> 0x10U)));
                        __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 1U;
                        __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 = 0x10U;
                        __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1 
                            = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                    }
                    if ((4U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                        __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 
                            = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                                  >> 0x20U)));
                        __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 1U;
                        __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 = 0x20U;
                        __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2 
                            = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                    }
                    if ((8U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                        __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 
                            = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                                  >> 0x30U)));
                        __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 1U;
                        __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 = 0x30U;
                        __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3 
                            = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                    }
                }
            }
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component))) {
                if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 
                        = (0xffffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data));
                    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 1U;
                    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 = 0U;
                    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0 
                        = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                }
                if ((2U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 
                        = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                              >> 0x10U)));
                    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 1U;
                    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 = 0x10U;
                    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1 
                        = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                }
                if ((4U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 
                        = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                              >> 0x20U)));
                    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 1U;
                    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 = 0x20U;
                    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2 
                        = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                }
                if ((8U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                    __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 
                        = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                              >> 0x30U)));
                    __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 1U;
                    __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 = 0x30U;
                    __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3 
                        = (0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr));
                }
            }
        }
        if ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component))) {
            if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 
                    = (0xffffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data));
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 1U;
                __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 = 0U;
                __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr;
            }
            if ((2U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 
                    = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                          >> 0x10U)));
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 1U;
                __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 = 0x10U;
                __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr;
            }
            if ((4U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 
                    = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                          >> 0x20U)));
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 1U;
                __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 = 0x20U;
                __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr;
            }
            if ((8U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 
                    = (0xffffU & (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data 
                                          >> 0x30U)));
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 1U;
                __Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 = 0x30U;
                __Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr;
            }
        }
    }
    if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n) 
          & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear))) 
         & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start)))) {
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8 = 1U;
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17 = 1U;
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26 = 1U;
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35 = 1U;
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [0U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [1U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [2U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [3U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [0U][1U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [0U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [0U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [0U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [1U][1U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [1U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [1U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [1U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [2U][1U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [2U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [2U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [2U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [3U][1U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [3U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29 = 1U;
            }
        }
        if ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
              & (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row))) 
             & (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))) {
            __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
            __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30 = 1U;
        } else if (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                    & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window))) {
            if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [3U][2U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31 = 1U;
            } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))) {
                __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                    [3U][3U];
                __Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32 = 1U;
            }
        }
    }
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n) {
        if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire) {
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total 
                = ((IData)(1U) + vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total);
        }
    } else {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total = 0U;
    }
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n) {
        if (VL_UNLIKELY(((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid) 
                         & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready)))) {
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count 
                = ((IData)(1U) + vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count);
            VL_WRITEF("[REQ ACCEPT] t=%0t tag=%0# cp=%0# x=%0# y=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      16,(IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag),
                      2,vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component,
                      8,(IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x),
                      8,vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base);
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag 
                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag;
            vlSelf->__Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid = 0U;
        }
    } else {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag = 0U;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v0;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v1;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v2;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v3;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v4;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v5;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v6;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v7;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[0U][3U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v8;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v9;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v10;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v11;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v12;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v13;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v14;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v15;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v16;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[1U][3U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v17;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v18;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v19;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v20;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v21;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v22;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v23;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v24;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v25;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[2U][3U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v26;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v27;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v28;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][0U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v29;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v30;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v31;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][1U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v32;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v33;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][2U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v34;
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[3U][3U] 
            = __Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window__v35;
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[1U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[2U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[3U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[4U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[5U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[6U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[7U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[8U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[9U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xaU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xbU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xcU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xdU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xeU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xfU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x10U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x11U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x12U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x13U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x14U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x15U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x16U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x17U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x18U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x19U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1aU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1bU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1cU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1dU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1eU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1fU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][3U] >> 0x20U));
    if (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire) 
         & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data 
            = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))
                ? vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem
               [vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc]
                : ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))
                    ? vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem
                   [(0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc))]
                    : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))
                        ? vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem
                       [(0x3ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc))]
                        : 0ULL)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v0)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v1)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v2)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem__v3)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v0)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v1)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v2)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem__v3)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v0)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v1)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v2)));
    }
    if (__Vdlyvset__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem[__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3))) 
                & vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem
                [__Vdlyvdim0__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3)) 
                  << (IData)(__Vdlyvlsb__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem__v3)));
    }
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__1(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0;
    CData/*4:0*/ __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count = 0;
    CData/*4:0*/ __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count = 0;
    CData/*4:0*/ __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count = 0;
    // Body
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count;
    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n) {
        if (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear) 
             | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start))) {
            if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start) {
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_id;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height;
            }
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error 
                = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start) 
                   && (1U & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry))));
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid 
                = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start) 
                   && (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry));
            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0U;
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count = 0U;
            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count = 0U;
            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count = 0U;
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = 0U;
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid = 0U;
        } else {
            if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) {
                __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count)));
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid 
                    = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                       | (0xffffU & ((IData)(1U) << 
                                     (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row) 
                                       << 2U) | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))));
            }
            if ((((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                  | (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) 
                 & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid) 
                    != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid)))) {
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = 1U;
            }
            if ((4U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                if ((2U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0U;
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = 1U;
                } else if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire) {
                        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0U;
                    }
                } else if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire) {
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0U;
                }
            } else if ((2U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                    if (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) 
                         & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count) 
                            == (0x1fU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count) 
                                         - (IData)(1U)))))) {
                        if ((0xffffU == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response))) {
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component 
                                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component;
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x 
                                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x;
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base 
                                = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base;
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 1U;
                            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 4U;
                        } else {
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
                            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = 1U;
                            __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 5U;
                        }
                    }
                } else if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire) {
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count)));
                    if (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
                         == (0x1fU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count) 
                                      - (IData)(1U))))) {
                        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 3U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) {
                if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window) {
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode 
                        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode;
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count 
                        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count;
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count = 0U;
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count = 0U;
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid 
                        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid;
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 2U;
                } else {
                    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
                    __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 5U;
                }
            } else if (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid) 
                        & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready))) {
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag;
                __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear) 
                      | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start))))) {
            if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire) {
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row;
                vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col 
                    = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col;
            }
        }
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid 
            = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire) 
               & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid));
    } else {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height = 0U;
        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode = 0U;
        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count = 0U;
        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count = 0U;
        __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col = 0U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state 
            = __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid = 0U;
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid 
        = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n) 
           && ((1U & (~ ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear) 
                         | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start)))) 
               && (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height;
    if ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width), 1U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height), 1U));
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window 
        = ((((((((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
                 | (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) 
                | (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) 
               & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x)))) 
              & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base)))) 
             & (8U <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x))) 
            & ((0x1ffU & ((IData)(8U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x))) 
               <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width))) 
           & ((0x1ffU & ((IData)(4U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base))) 
              <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4 
        = ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid) 
             & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component) 
                == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component))) 
            & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
               == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base))) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
              == (0x1ffU & ((IData)(4U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8 
        = ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid) 
             & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component) 
                == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component))) 
            & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
               == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base))) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
              == (0x1ffU & ((IData)(8U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 0x10U;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 1U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 4U;
    } else if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 2U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 8U;
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
           || ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
               || (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
                     >> 2U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col 
            = (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count));
    } else if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col = 3U;
    } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
                     >> 1U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col 
            = (2U | (1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count)));
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
                     + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col 
        = (0x3ffU & (((0x3fU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
                                >> 2U)) - (IData)(2U)) 
                     + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc 
        = (0xfffU & ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))
                      ? (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row), 5U) 
                         + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col))
                      : (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row), 4U) 
                         + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xfff0U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
               ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                        >> 1U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                    ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                             >> 2U))
                                    : 0U)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xff0fU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 5U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                     ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                              >> 6U))
                                     : 0U)) << 4U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xf0ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 9U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                     ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                              >> 0xaU))
                                     : 0U)) << 8U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xfffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 0xdU)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                       ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                                >> 0xeU))
                                       : 0U)) << 0xcU));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire 
        = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid) 
              & ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                 | (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response 
            = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response) 
               | (0xffffU & ((IData)(1U) << (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row) 
                                              << 2U) 
                                             | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))));
    }
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry 
        = ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
           & ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
              & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
                 & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
                    & ((0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width))) 
                       & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height))))))));
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__2(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid 
        = vlSelf->__Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid;
}

VL_INLINE_OPT void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__1(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire 
        = (((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
            | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) 
           & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire 
        = ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
               < (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count)) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start))))));
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_nba(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___nba_comb__TOP__1(vlSelf);
    }
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_resume(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8b00ae1c__0.resume("@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_commit(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8b00ae1c__0.commit("@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)");
    }
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

bool VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__act(vlSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___timing_resume(vlSelf);
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__nba(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__nba(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_debug_assertions(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
