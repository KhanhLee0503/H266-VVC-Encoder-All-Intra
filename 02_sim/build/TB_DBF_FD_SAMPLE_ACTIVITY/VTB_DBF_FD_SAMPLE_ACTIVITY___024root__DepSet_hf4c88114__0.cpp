// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

extern const VlWide<32>/*1023:0*/ VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__comp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__comp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp0;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp0 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq0;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq0 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp1;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp1 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq1;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq1 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__stall;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__stall = 0;
    VlWide<32>/*1023:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples;
    VL_ZERO_W(1024, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples);
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern = 0;
    VlWide<32>/*1023:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples;
    VL_ZERO_W(1024, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples);
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0;
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable = 3U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag = 0U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass = 0U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       267);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       267);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__stall = 4U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq1 = 7U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp1 = 5U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq0 = 3U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp0 = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__comp = 0U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern = 0U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index = 0U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x76U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xb1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xecU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x127U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x162U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x19dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1d8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x213U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x24eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x289U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2c4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2ffU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x33aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x375U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x53U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x8eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xc9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x104U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x13fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x17aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1b5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1f0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x22bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x266U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2a1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2dcU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x317U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x352U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x38dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3c8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xa6U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xe1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x11cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x157U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x192U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1cdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x208U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x243U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x27eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2b9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2f4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x32fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x36aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3a5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3e0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0xf9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x134U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x16fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1aaU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x1e5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x220U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x25bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x296U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x2d1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x30cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x347U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x382U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3bdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3f8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x33U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value = 0x6eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__value 
              << 0x10U));
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:200: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input not ready before transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 200, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[1U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[2U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[3U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[4U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[5U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[6U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[7U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[8U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[9U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xaU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xbU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xcU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xdU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xeU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0xfU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x10U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x11U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x12U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x13U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x14U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x15U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x16U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x17U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x18U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x19U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1aU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1bU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1cU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1dU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1eU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__samples[0x1fU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp 
        = (3U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__comp);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir 
        = (1U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable 
        = ((0U == VL_MODDIVS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index, (IData)(3U)))
            ? 1U : 3U);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 
        = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 
        = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 
        = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 
        = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 2U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
        = (2U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
        = (0xffffU & VL_MULS_III(32, (IData)(0xdU), __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
        = (0xffffU & VL_MULS_III(32, (IData)(3U), __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
        = (0xffffU & ((IData)(7U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
        = (0xffffU & ((IData)(9U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
        = (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       221);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
    }
    if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                   != (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction)) 
                                  | (0U != ((((((((
                                                   ((((((((((((((((((((((((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0U] 
                                                                           ^ 
                                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]) 
                                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[1U] 
                                                                             ^ 
                                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U])) 
                                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[2U] 
                                                                            ^ 
                                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U])) 
                                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[3U] 
                                                                           ^ 
                                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U])) 
                                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[4U] 
                                                                          ^ 
                                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])) 
                                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[5U] 
                                                                         ^ 
                                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U])) 
                                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[6U] 
                                                                        ^ 
                                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U])) 
                                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[7U] 
                                                                       ^ 
                                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U])) 
                                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[8U] 
                                                                      ^ 
                                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U])) 
                                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[9U] 
                                                                     ^ 
                                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U])) 
                                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xaU] 
                                                                    ^ 
                                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU])) 
                                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xbU] 
                                                                   ^ 
                                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU])) 
                                                               | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xcU] 
                                                                  ^ 
                                                                  vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])) 
                                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xdU] 
                                                                 ^ 
                                                                 vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU])) 
                                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xeU] 
                                                                ^ 
                                                                vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU])) 
                                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xfU] 
                                                               ^ 
                                                               vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU])) 
                                                           | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x10U] 
                                                              ^ 
                                                              vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U])) 
                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x11U] 
                                                             ^ 
                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U])) 
                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x12U] 
                                                            ^ 
                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U])) 
                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x13U] 
                                                           ^ 
                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U])) 
                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x14U] 
                                                          ^ 
                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])) 
                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x15U] 
                                                         ^ 
                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U])) 
                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x16U] 
                                                        ^ 
                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U])) 
                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x17U] 
                                                       ^ 
                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U])) 
                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x18U] 
                                                      ^ 
                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U])) 
                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x19U] 
                                                     ^ 
                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U])) 
                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1aU] 
                                                    ^ 
                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU])) 
                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1bU] 
                                                   ^ 
                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU])) 
                                               | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1cU] 
                                                  ^ 
                                                  vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])) 
                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1dU] 
                                                 ^ 
                                                 vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU])) 
                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1eU] 
                                                ^ vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU])) 
                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1fU] 
                                               ^ vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU])))) 
                                 | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp) 
                                    != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp))) 
                                | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir) 
                                   != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir))) 
                               | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable) 
                                  != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable))) 
                              | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0) 
                                 != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0))) 
                             | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0) 
                                != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0))) 
                            | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1) 
                               != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1))) 
                           | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1) 
                              != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1))) 
                          | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0) 
                             != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0))) 
                         | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1) 
                            != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1))) 
                        | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0) 
                           != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0))) 
                       | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1) 
                          != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1))) 
                      | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0) 
                         != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0))) 
                     | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1) 
                        != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:144: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: Metadata or source sample mismatch transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line)) {
        if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line) 
             | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xbU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xcU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xdU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xeU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__2__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col = 0xfU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__3__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__4__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__5__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__6__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__7__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__8__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__9__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__10__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__11__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__12__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__13__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__p
               [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__14__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__15__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__1__line);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i = 0U;
    while (VL_LTS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__stall)) {
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           224);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           225);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
        }
        if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                       != (0xffffU 
                                           & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction)) 
                                      | (0U != ((((
                                                   ((((((((((((((((((((((((((((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0U] 
                                                                               ^ 
                                                                               vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]) 
                                                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[1U] 
                                                                                ^ 
                                                                                vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U])) 
                                                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[2U] 
                                                                                ^ 
                                                                                vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U])) 
                                                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[3U] 
                                                                               ^ 
                                                                               vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U])) 
                                                                           | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[4U] 
                                                                              ^ 
                                                                              vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])) 
                                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[5U] 
                                                                             ^ 
                                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U])) 
                                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[6U] 
                                                                            ^ 
                                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U])) 
                                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[7U] 
                                                                           ^ 
                                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U])) 
                                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[8U] 
                                                                          ^ 
                                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U])) 
                                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[9U] 
                                                                         ^ 
                                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U])) 
                                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xaU] 
                                                                        ^ 
                                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU])) 
                                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xbU] 
                                                                       ^ 
                                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU])) 
                                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xcU] 
                                                                      ^ 
                                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])) 
                                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xdU] 
                                                                     ^ 
                                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU])) 
                                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xeU] 
                                                                    ^ 
                                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU])) 
                                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xfU] 
                                                                   ^ 
                                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU])) 
                                                               | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x10U] 
                                                                  ^ 
                                                                  vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U])) 
                                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x11U] 
                                                                 ^ 
                                                                 vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U])) 
                                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x12U] 
                                                                ^ 
                                                                vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U])) 
                                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x13U] 
                                                               ^ 
                                                               vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U])) 
                                                           | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x14U] 
                                                              ^ 
                                                              vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])) 
                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x15U] 
                                                             ^ 
                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U])) 
                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x16U] 
                                                            ^ 
                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U])) 
                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x17U] 
                                                           ^ 
                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U])) 
                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x18U] 
                                                          ^ 
                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U])) 
                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x19U] 
                                                         ^ 
                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U])) 
                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1aU] 
                                                        ^ 
                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU])) 
                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1bU] 
                                                       ^ 
                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU])) 
                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1cU] 
                                                      ^ 
                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])) 
                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1dU] 
                                                     ^ 
                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU])) 
                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1eU] 
                                                    ^ 
                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU])) 
                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1fU] 
                                                   ^ 
                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU])))) 
                                     | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp) 
                                        != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp))) 
                                    | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir) 
                                       != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir))) 
                                   | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable) 
                                      != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable))) 
                                  | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0) 
                                     != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0))) 
                                 | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0) 
                                    != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0))) 
                                | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1) 
                                   != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1))) 
                               | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1) 
                                  != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1))) 
                              | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0) 
                                 != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0))) 
                             | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1) 
                                != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1))) 
                            | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0) 
                               != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0))) 
                           | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1) 
                              != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1))) 
                          | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0) 
                             != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0))) 
                         | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1) 
                            != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:144: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: Metadata or source sample mismatch transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line = 0U;
        while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line)) {
            if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line) 
                 | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
            } else {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xbU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xcU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xdU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xeU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__17__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col = 0xfU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__18__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__19__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__20__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__21__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__22__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__23__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__24__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__25__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__26__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__27__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__28__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__p
                   [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__29__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__30__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__16__line);
        }
        if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:228: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input should be blocked with filled output and downstream stalled\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 228, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__i);
    }
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       232);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       234);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:235: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Output valid did not drain index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 235, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass 
        = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
    if (VL_UNLIKELY((VL_GTS_III(32, 0xcU, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index) 
                     | (0U == VL_MODDIVS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index, (IData)(0x32U)))))) {
        VL_WRITEF("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d\n",
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__index,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__comp,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp0,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sp1,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq0,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__sq1,
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__0__stall);
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__stall = 2U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq1 = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp1 = 3U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq0 = 5U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp0 = 7U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__comp = 0U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x76U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xb1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xecU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x127U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x162U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x19dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1d8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x213U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x24eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x289U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2c4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2ffU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x33aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x375U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x53U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x8eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xc9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x104U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x13fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x17aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1b5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1f0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x22bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x266U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2a1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2dcU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x317U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x352U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x38dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3c8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xa6U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xe1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x11cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x157U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x192U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1cdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x208U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x243U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x27eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2b9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2f4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x32fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x36aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3a5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3e0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0xf9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x134U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x16fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1aaU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x1e5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x220U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x25bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x296U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x2d1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x30cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x347U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x382U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3bdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3f8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x33U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value = 0x6eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__value 
              << 0x10U));
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:200: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input not ready before transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 200, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[1U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[2U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[3U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[4U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[5U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[6U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[7U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[8U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[9U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xaU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xbU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xcU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xdU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xeU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0xfU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x10U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x11U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x12U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x13U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x14U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x15U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x16U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x17U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x18U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x19U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1aU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1bU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1cU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1dU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1eU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__samples[0x1fU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp 
        = (3U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__comp);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir 
        = (1U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable 
        = ((0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index, (IData)(3U)))
            ? 1U : 3U);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 2U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
        = (2U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
        = (0xffffU & VL_MULS_III(32, (IData)(0xdU), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
        = (0xffffU & VL_MULS_III(32, (IData)(3U), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
        = (0xffffU & ((IData)(7U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
        = (0xffffU & ((IData)(9U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
        = (0xffffU & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       221);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction 
        = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
    }
    if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                   != (0xffffU & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction)) 
                                  | (0U != ((((((((
                                                   ((((((((((((((((((((((((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0U] 
                                                                           ^ 
                                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U]) 
                                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[1U] 
                                                                             ^ 
                                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U])) 
                                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[2U] 
                                                                            ^ 
                                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U])) 
                                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[3U] 
                                                                           ^ 
                                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U])) 
                                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[4U] 
                                                                          ^ 
                                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U])) 
                                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[5U] 
                                                                         ^ 
                                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U])) 
                                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[6U] 
                                                                        ^ 
                                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U])) 
                                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[7U] 
                                                                       ^ 
                                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U])) 
                                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[8U] 
                                                                      ^ 
                                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U])) 
                                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[9U] 
                                                                     ^ 
                                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U])) 
                                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xaU] 
                                                                    ^ 
                                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU])) 
                                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xbU] 
                                                                   ^ 
                                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU])) 
                                                               | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xcU] 
                                                                  ^ 
                                                                  vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU])) 
                                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xdU] 
                                                                 ^ 
                                                                 vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU])) 
                                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xeU] 
                                                                ^ 
                                                                vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU])) 
                                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0xfU] 
                                                               ^ 
                                                               vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU])) 
                                                           | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x10U] 
                                                              ^ 
                                                              vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U])) 
                                                          | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x11U] 
                                                             ^ 
                                                             vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U])) 
                                                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x12U] 
                                                            ^ 
                                                            vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U])) 
                                                        | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x13U] 
                                                           ^ 
                                                           vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U])) 
                                                       | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x14U] 
                                                          ^ 
                                                          vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U])) 
                                                      | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x15U] 
                                                         ^ 
                                                         vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U])) 
                                                     | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x16U] 
                                                        ^ 
                                                        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U])) 
                                                    | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x17U] 
                                                       ^ 
                                                       vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U])) 
                                                   | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x18U] 
                                                      ^ 
                                                      vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U])) 
                                                  | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x19U] 
                                                     ^ 
                                                     vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U])) 
                                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1aU] 
                                                    ^ 
                                                    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU])) 
                                                | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1bU] 
                                                   ^ 
                                                   vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU])) 
                                               | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1cU] 
                                                  ^ 
                                                  vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU])) 
                                              | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1dU] 
                                                 ^ 
                                                 vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU])) 
                                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1eU] 
                                                ^ vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU])) 
                                            | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0x1fU] 
                                               ^ vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU])))) 
                                 | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp) 
                                    != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp))) 
                                | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir) 
                                   != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir))) 
                               | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable) 
                                  != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable))) 
                              | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0) 
                                 != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0))) 
                             | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0) 
                                != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0))) 
                            | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1) 
                               != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1))) 
                           | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1) 
                              != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1))) 
                          | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0) 
                             != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0))) 
                         | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1) 
                            != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1))) 
                        | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0) 
                           != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0))) 
                       | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1) 
                          != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1))) 
                      | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0) 
                         != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0))) 
                     | ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1) 
                        != (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:144: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: Metadata or source sample mismatch transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line = 0U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
}
