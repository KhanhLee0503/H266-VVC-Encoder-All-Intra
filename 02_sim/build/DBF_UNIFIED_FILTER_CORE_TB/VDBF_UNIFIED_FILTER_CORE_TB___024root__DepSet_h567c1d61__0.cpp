// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_UNIFIED_FILTER_CORE_TB.h for the primary calling header

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB__Syms.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

extern const VlWide<32>/*1023:0*/ VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT VlCoroutine VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__completed_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_p;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_p = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_q;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_q = 0;
    CData/*5:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__qp;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__qp = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window);
    SData/*15:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__accepted_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__accepted_before = 0;
    SData/*11:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id = 0;
    CData/*1:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_component;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_component = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mode = 0;
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_bypass;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_bypass = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_error;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_error = 0;
    CData/*0:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__check_flat;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__check_flat = 0;
    VlWide<32>/*1023:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window;
    VL_ZERO_W(1024, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window);
    QData/*63:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask = 0;
    CData/*2:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog = 0;
    IData/*31:0*/ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__completed_before;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__completed_before = 0;
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       268);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       270);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__bypass = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_q = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_p = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__0__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_bypass = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask = 0ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mode = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_component = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__1__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_q = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_p = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id = 2U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__2__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask = 0x7e007e007e007e0ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mode = 2U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_component = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id = 2U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__3__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_q = 7U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_p = 7U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__4__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask = 0x7ffe7ffe7ffe7ffeULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mode = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_component = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__5__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_q = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_p = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id = 4U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__6__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask = 0x7e007e0ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mode = 5U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_component = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id = 4U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__7__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_q = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_p = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp = 2U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id = 5U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__8__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask = 0x1800180ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mode = 4U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_component = 2U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id = 5U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__9__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__qp = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_q = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_p = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id = 6U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__10__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__check_flat = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_error = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask = 0ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mode = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_component = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id = 6U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__11__expected_error));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__qp = 0x2dU;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_q = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_p = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id = 7U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU] 
        = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU]) 
           | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU] 
        = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU]) 
           | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
              << 0x10U));
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0x3ffU : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU] 
            = ((0xffff0000U & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU]) 
               | (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel 
        = ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__noisy)
            ? 0U : 0x200U);
    if ((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp))) {
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU] 
            = ((0xffffU & __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU]) 
               | ((IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__pixel) 
                  << 0x10U));
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__accepted_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__bypass;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU] 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__temp_window[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = 0x11U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = 
        (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id 
        = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction 
        = (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = 0x10U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = 8U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask 
        = (((0U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp)) 
            | (3U == (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__comp)))
            ? 0xfU : 3U);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = 2U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_p;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__length_q;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__qp;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__accepted_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           163);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:166: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.send_edge: input handshake timeout id=%0# ready=%b valid=%b state=%0# accepted=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 166, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = 0U;
    VL_WRITEF("[TB] Input accepted id=%0# total=%0d at %0t\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__send_edge__12__new_id,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__check_flat = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_error = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_bypass = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask = 0ULL;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mode = 0U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_component = 3U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id = 7U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog = 0U;
    while ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:195: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: result timeout edge=%0# state=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 195, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id) 
                           != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id)) 
                          | (0x11U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id))) 
                         | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id) 
                            != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_component))) 
                        | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank) 
                           != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id)))) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction) 
                          != (1U & (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id)))) 
                      | (0x10U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x))) 
                     | (8U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:201: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: context mismatch edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 201, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass) 
                        != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_bypass)) 
                       | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error) 
                          != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_error))) 
                      | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                         != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mode))) 
                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                        != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:204: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: edge=%0# result mismatch: bypass=%b error=%b mode=%0# mask=%x expected=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id),
                  1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass,
                  1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode,
                  64,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask,
                  64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 204, "");
    }
    if (__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__check_flat) {
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   ((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0U]) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                 ^ 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[1U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                ^ 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[2U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                               ^ 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[3U])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                              ^ 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[4U])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                             ^ 
                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[5U])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                            ^ 
                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[6U])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                           ^ 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[7U])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                          ^ 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[8U])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                         ^ 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[9U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                        ^ 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xaU])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                       ^ 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xbU])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                      ^ 
                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xcU])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                     ^ 
                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xdU])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                    ^ 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xeU])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                   ^ 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0xfU])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                  ^ 
                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x10U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                 ^ 
                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x11U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x12U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                               ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x13U])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                              ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x14U])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                             ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x15U])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                            ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x16U])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                           ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x17U])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                          ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x18U])) 
                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                         ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x19U])) 
                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                        ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1aU])) 
                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                       ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1bU])) 
                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                      ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1cU])) 
                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                     ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1dU])) 
                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                    ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1eU])) 
                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                   ^ vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data[0x1fU]))))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:209: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: flat samples modified edge=%0#\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id));
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 209, "");
        }
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[8U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[9U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xaU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xbU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xcU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xdU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xeU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xfU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x10U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x11U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x12U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x13U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x14U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x15U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x16U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x17U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x18U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x19U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1aU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1bU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1cU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1dU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1eU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1fU] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU];
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid)) 
                               | (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy))) 
                              | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                             | (0U != (((((((((((((
                                                   (((((((((((((((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0U]) 
                                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                                                                        ^ 
                                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[1U])) 
                                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                                                                       ^ 
                                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[2U])) 
                                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                                                                      ^ 
                                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[3U])) 
                                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                                                                     ^ 
                                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[4U])) 
                                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                                                                    ^ 
                                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[5U])) 
                                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                                                                   ^ 
                                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[6U])) 
                                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                                                                  ^ 
                                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[7U])) 
                                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                                                                 ^ 
                                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[8U])) 
                                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                                                                ^ 
                                                                __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[9U])) 
                                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                                                               ^ 
                                                               __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xaU])) 
                                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                                                              ^ 
                                                              __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xbU])) 
                                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                                                             ^ 
                                                             __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xcU])) 
                                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                                                            ^ 
                                                            __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xdU])) 
                                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                                                           ^ 
                                                           __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xeU])) 
                                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                                                          ^ 
                                                          __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0xfU])) 
                                                      | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                                                         ^ 
                                                         __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x10U])) 
                                                     | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                                                        ^ 
                                                        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x11U])) 
                                                    | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                                                       ^ 
                                                       __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x12U])) 
                                                   | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                                                      ^ 
                                                      __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x13U])) 
                                                  | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                                                     ^ 
                                                     __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x14U])) 
                                                 | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                                                    ^ 
                                                    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x15U])) 
                                                | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                                                   ^ 
                                                   __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x16U])) 
                                               | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                                                  ^ 
                                                  __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x17U])) 
                                              | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                                                 ^ 
                                                 __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x18U])) 
                                             | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                                                ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x19U])) 
                                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                                               ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1aU])) 
                                           | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                                              ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1bU])) 
                                          | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                                             ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1cU])) 
                                         | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                                            ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1dU])) 
                                        | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                                           ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1eU])) 
                                       | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                                          ^ __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_window[0x1fU])))) 
                            | (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                               != __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mask)) 
                           | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode) 
                              != (IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__saved_mode)))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:219: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output changed under stall edge=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id));
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 219, "");
    }
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__completed_before 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 1U;
    __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog = 0U;
    while ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed 
            == __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__completed_before)) {
        co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                           228);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog 
            = ((IData)(1U) + __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog);
        if (VL_UNLIKELY(VL_LTS_III(32, 0x50U, __Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__watchdog))) {
            VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:231: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: output handshake timeout edge=%0# valid=%b ready=%b state=%0# completed=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id),
                      1,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid,
                      1,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready),
                      3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state,
                      32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 231, "");
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = 0U;
    co_await vlSelf->__VtrigSched_h63ed2655__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready)) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:237: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB.check_edge: core failed to return to IDLE edge=%0# state=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id),
                  3,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 237, "");
    }
    VL_WRITEF("PASS edge=%0# comp=%0# bypass=%b mode=%0# mask=%x error=%b\n",
              12,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_id,
              2,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_component),
              1,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_bypass,
              3,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mode),
              64,__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_mask,
              1,(IData)(__Vtask_DBF_UNIFIED_FILTER_CORE_TB__DOT__check_edge__13__expected_error));
    if (VL_UNLIKELY(((7U != vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted) 
                     | (7U != vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed)))) {
        VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:300: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB: handshake count mismatch accepted=%0d completed=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
                  32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 300, "");
    }
    VL_WRITEF("PASS: DBF_UNIFIED_FILTER_CORE integration 7 transactions\n");
    VL_FINISH_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 302, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
