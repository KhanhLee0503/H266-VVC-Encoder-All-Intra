// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_REF_AVAILABILITY_TB.h for the primary calling header

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB__Syms.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

VL_INLINE_OPT VlCoroutine VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ty;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ty = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__lx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__lx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ly = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tlx;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tlx = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tly;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tly = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected = 0;
    CData/*1:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__comp;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__comp = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_w;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_w = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_h;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_h = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_x;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_x = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_y;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_y = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__top_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__top_seg = 0;
    IData/*31:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__left_seg;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__left_seg = 0;
    std::string __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected = 0;
    CData/*2:0*/ __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected = 0;
    // Body
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH = 0xf00U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT = 0x870U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_CHECK_VALID = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_CHECK_VALID = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_CHECK_VALID = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_MAP_AVAILABLE = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_MAP_AVAILABLE = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_MAP_AVAILABLE = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_LEFT_VALID = 1U;
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_h = 0x870U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_w = 0xf00U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_y = 0x80U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_x = 0x80U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__comp = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__0__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name = 
        std::string{"Luma local references"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__1__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tly = 0x87U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tlx = 0x87U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ly = 0x88U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__lx = 0x87U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ty = 0x87U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tx = 0x88U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__2__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       178);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__3__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       180);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name = 
        std::string{"Cb local, pre-scaled geometry"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__4__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tly = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tlx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ly = 0x48U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__lx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ty = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tx = 0x48U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__5__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__comp = 2U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__6__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       186);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name = 
        std::string{"Cr local, pre-scaled geometry"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__7__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tly = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tlx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ly = 0x48U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__lx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ty = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tx = 0x48U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__8__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       190);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_y = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__9__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       192);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name = 
        std::string{"Cb above CTU crossing"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__10__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tly = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tlx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ly = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__lx = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ty = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tx = 0x48U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__11__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_x = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__12__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected = 2U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected = 2U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name = 
        std::string{"Cb left CTU crossing"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__13__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tly = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tlx = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ly = 0x48U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__lx = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ty = 0x47U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tx = 0x40U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__14__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       202);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_y = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_x = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__comp = 2U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__15__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       204);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected = 3U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected = 2U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name = 
        std::string{"Cr above-left CTU crossing"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__16__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tly = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tlx = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ly = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__lx = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ty = 0x3fU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tx = 0x40U;
    if (VL_UNLIKELY((((((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tx)) 
                         | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                            != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ty))) 
                        | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                           != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__lx))) 
                       | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y) 
                          != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__ly))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x) 
                         != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tlx))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y) 
                        != (0x3fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_globals__17__tly))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:147: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_globals: [FAIL] TC%0d global coordinate mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 147, "");
    }
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       208);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_y = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_x = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_h = 0x870U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_w = 0xf00U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_y = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_x = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__comp = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__18__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name = 
        std::string{"First picture corner"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__19__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_x = 0x3cU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_x = 0x740U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__20__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       215);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name = 
        std::string{"Right boundary: last segment valid"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__21__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       218);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__top_seg = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_x = 0x3cU;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_x = 0x740U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__22__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name = 
        std::string{"Right boundary: top segment overflow"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__23__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       223);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_y = 0x34U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_y = 0x400U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__24__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name = 
        std::string{"Bottom boundary: last segment valid"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__25__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__left_seg = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_y = 0x34U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_y = 0x400U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__26__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name = 
        std::string{"Bottom boundary: left segment overflow"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__27__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       233);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_y = 0x38U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_y = 0x400U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__28__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name = 
        std::string{"TU origin beyond picture bottom"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__29__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       238);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__comp = 1U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__30__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       240);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name = 
        std::string{"TU origin beyond CTU right"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__31__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y));
    co_await vlSelf->__VtrigSched_h504ec06b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge INTRA_REF_AVAILABILITY_TB.clk)", 
                                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                                       243);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__left_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__top_seg = 0U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_y = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_x = 8U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_h = 0x438U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_w = 0x780U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_y = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_x = 0x40U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__comp = 3U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID 
        = __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__comp;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__origin_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_w);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT 
        = (0x1fffU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__picture_h);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_x);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y 
        = (0x7fU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__tu_y);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__top_seg);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX 
        = (0xfU & __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__apply_case__32__left_seg);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                       245);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected = 4U;
    __Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name = 
        std::string{"Invalid component ID"};
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count 
        = ((IData)(1U) + vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION) 
                       != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected)) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION) 
                         != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION) 
                        != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected))))) {
        VL_WRITEF("[FAIL] TC%0d %@ expected TOP/LEFT/TL=%0#/%0#/%0# got=%0#/%0#/%0#\n[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:118: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: Location mismatch\n",
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name),
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected),
                  3,__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected,
                  3,(IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION,
                  3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),
                  3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 118, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID) 
                       != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID) 
                         != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID) 
                        != (0U == (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:124: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ reconstructed-map query mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 124, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE) 
                       != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__top_expected))) 
                      | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE) 
                         != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__left_expected)))) 
                     | ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE) 
                        != (4U != (IData)(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__tl_expected)))))) {
        VL_WRITEF("[%0t] %%Fatal: INTRA_REF_AVAILABILITY_TB.sv:130: Assertion failed in %NINTRA_REF_AVAILABILITY_TB.check_case: [FAIL] TC%0d %@ availability mismatch\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
                  -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name));
        VL_STOP_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 130, "");
    }
    VL_WRITEF("[PASS] TC%0d %-39@ TOP/LEFT/TL=%0#/%0#/%0# globals TOP(%0#,%0#) LEFT(%0#,%0#) TL(%0#,%0#)\n[PASS] ALL %0d INTRA_REF_AVAILABILITY UNIT TESTCASES\n",
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count,
              -1,&(__Vtask_INTRA_REF_AVAILABILITY_TB__DOT__check_case__33__case_name),
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),
              3,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION,
              3,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y),
              14,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x,
              14,(IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y),
              32,vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count);
    VL_FINISH_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 249, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__INTRA_REF_AVAILABILITY_TB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__INTRA_REF_AVAILABILITY_TB__DOT__clk__0 
        = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
