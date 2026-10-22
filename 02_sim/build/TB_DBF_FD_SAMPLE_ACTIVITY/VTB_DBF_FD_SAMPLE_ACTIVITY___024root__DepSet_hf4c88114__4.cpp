// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

extern const VlWide<32>/*1023:0*/ VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__4(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__4\n"); );
    // Init
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__comp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__comp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp0;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp0 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq0;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq0 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp1;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp1 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq1;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq1 = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__stall;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__stall = 0;
    VlWide<32>/*1023:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples;
    VL_ZERO_W(1024, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples);
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line = 0;
    // Body
    while (VL_LTS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__stall)) {
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           224);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           225);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
        }
        if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                       != (0xffffU 
                                           & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction)) 
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
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line = 0U;
        while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line)) {
            if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line) 
                 | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
            } else {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xbU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xcU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xdU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xeU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__172__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col = 0xfU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__173__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__174__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__175__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__176__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__177__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__178__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__179__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__180__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__181__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__182__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__183__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__p
                   [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__184__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__185__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__171__line);
        }
        if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:228: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input should be blocked with filled output and downstream stalled\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 228, "");
        }
        vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i 
            = ((IData)(1U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i);
    }
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       232);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       234);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:235: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Output valid did not drain index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 235, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass 
        = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
    if (VL_UNLIKELY((VL_GTS_III(32, 0xcU, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index) 
                     | (0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index, (IData)(0x32U)))))) {
        VL_WRITEF("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d\n",
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__comp,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__stall);
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n = 6U;
    while (VL_GTS_III(32, 0xceU, vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__stall 
            = VL_MODDIVS_III(32, vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n, (IData)(5U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq1 
            = VL_MODDIVS_III(32, ((IData)(3U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n), (IData)(8U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp1 
            = VL_MODDIVS_III(32, VL_MULS_III(32, (IData)(7U), vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n), (IData)(8U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq0 
            = VL_MODDIVS_III(32, VL_MULS_III(32, (IData)(5U), vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n), (IData)(8U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp0 
            = VL_MODDIVS_III(32, VL_MULS_III(32, (IData)(3U), vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n), (IData)(8U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__comp 
            = VL_MODDIVS_III(32, vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n, (IData)(3U));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern = 5U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index 
            = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU] 
            = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3bU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x76U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xb1U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xecU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x127U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x162U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x19dU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1d8U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x213U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x24eU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x289U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2c4U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2ffU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x33aU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x375U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x53U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x8eU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xc9U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x104U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x13fU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x17aU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1b5U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1f0U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x22bU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x266U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2a1U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2dcU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x317U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x352U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x38dU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3c8U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xa6U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xe1U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x11cU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x157U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x192U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1cdU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x208U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x243U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x27eU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2b9U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2f4U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x32fU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x36aU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3a5U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3e0U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1bU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0xf9U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x134U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x16fU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1aaU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x1e5U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x220U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x25bU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x296U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x2d1U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x30cU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x347U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x382U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3bdU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3f8U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x33U;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU] 
            = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU]) 
               | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value));
        if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0U;
        } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x3ffU;
        } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__pattern)) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value = 0x6eU;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                = VL_URANDOM_RANGE_I(0U, 0x3ffU);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU] 
            = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU]) 
               | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__value 
                  << 0x10U));
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           198);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:200: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input not ready before transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 200, "");
        }
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[1U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[2U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[3U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[4U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[5U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[6U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[7U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[8U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[9U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xaU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xbU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xcU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xdU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xeU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0xfU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x10U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x11U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x12U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x13U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x14U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x15U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x16U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x17U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x18U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x19U];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1aU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1bU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1cU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1dU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1eU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__samples[0x1fU];
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp 
            = (3U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__comp);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir 
            = (1U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable 
            = ((0U == VL_MODDIVS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index, (IData)(3U)))
                ? 1U : 3U);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 
            = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp0);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 
            = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq0);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 
            = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp1);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 
            = (7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq1);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 2U;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
            = (2U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
            = (0xffffU & VL_MULS_III(32, (IData)(0xdU), __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
            = (0xffffU & VL_MULS_III(32, (IData)(3U), __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
            = (0xffffU & ((IData)(7U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
            = (0xffffU & ((IData)(9U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index));
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
            = (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           217);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                                  & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
        }
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           221);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
        }
        if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                       != (0xffffU 
                                           & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction)) 
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
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line = 0U;
        while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line)) {
            if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line) 
                 | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
            } else {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xbU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xcU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xdU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xeU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__188__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col = 0xfU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__189__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__190__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__191__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__192__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__193__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__194__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__195__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__196__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__197__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__198__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__199__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__p
                   [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__200__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__201__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__187__line);
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i = 0U;
        while (VL_LTS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__stall)) {
            co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                               "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                               224);
            vlSelf->__Vm_traceActivity[5U] = 1U;
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                               225);
            vlSelf->__Vm_traceActivity[5U] = 1U;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
            }
            if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                           != (0xffffU 
                                               & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction)) 
                                          | (0U != 
                                             ((((((((((((((((((((((((((((((((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples[0U] 
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
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line = 0U;
            while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line)) {
                if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line) 
                     | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp 
                        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq 
                        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
                } else {
                    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp 
                        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq 
                        = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 7U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[0U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 8U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[0U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 6U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[1U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 9U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[1U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 5U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[2U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xaU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[2U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 4U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[3U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xbU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[3U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 3U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[4U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xcU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[4U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 2U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[5U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xdU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[5U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 1U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[6U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xeU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[6U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col = 0U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p[7U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__203__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col = 0xfU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout 
                    = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))
                                   ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                           (((IData)(9U) 
                                             + (0x3ffU 
                                                & VL_MULS_III(32, (IData)(0x10U), 
                                                              (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                               + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                                 + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)))))) 
                                 | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                    (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col)) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                            (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__line) 
                                                             + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__col))))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q[7U] 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__204__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v 
                    = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                        [2U] - VL_MULS_III(32, (IData)(2U), 
                                           __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                                           [1U])) + 
                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [0U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__205__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 0U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v 
                    = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                        [2U] - VL_MULS_III(32, (IData)(2U), 
                                           __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                                           [1U])) + 
                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [0U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__206__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 1U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v 
                    = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                        [5U] - VL_MULS_III(32, (IData)(2U), 
                                           __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                                           [4U])) + 
                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [3U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__207__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 2U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v 
                    = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                        [5U] - VL_MULS_III(32, (IData)(2U), 
                                           __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                                           [4U])) + 
                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [3U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__208__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 3U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v 
                    = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [0U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__209__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 4U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v 
                    = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [0U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__210__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 5U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v 
                    = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp)]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__211__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 6U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v 
                    = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq)]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__212__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 7U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v 
                    = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                         [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                         [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                        [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [4U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__213__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 8U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v 
                    = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                         [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                         [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                        [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [4U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__214__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 9U;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v 
                    = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__p
                       [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__q
                       [0U]);
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__Vfuncout 
                    = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v)
                        ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v)
                        : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__v);
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__215__Vfuncout;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line 
                    = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric = 0xaU;
                __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout 
                    = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric) 
                              | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                             | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                            | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                           | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                          | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                         | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)) 
                        | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric))
                        ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                              ? ((0x2fU 
                                                  >= 
                                                  (0x3fU 
                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                  ? 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                             >> 
                                                             (0x3fU 
                                                              & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                  : 0U)
                                              : ((3U 
                                                  == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                  ? 
                                                 ((0x2fU 
                                                   >= 
                                                   (0x3fU 
                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                   ? 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                   ? 
                                                  ((0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                    : 0U)
                                                   : 
                                                  ((5U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                     : 0U)
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U)
                                                     : 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                                      : 0U))))))))
                        : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                            ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                ? (0xfffU & (IData)(
                                                    (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__metric)
                                          ? ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U)
                                          : ((0x2fU 
                                              >= (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))
                                              ? (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                            >> 
                                                            (0x3fU 
                                                             & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__line)))))
                                              : 0U))));
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                    = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__216__Vfuncout;
                if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got 
                                 != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp))) {
                    VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,vlSymsp->name(),32,
                              __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__transaction,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__got,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__exp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sp,
                              32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__sq);
                    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
                }
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line 
                    = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__202__line);
            }
            if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:228: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input should be blocked with filled output and downstream stalled\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 228, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__i);
        }
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           230);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 1U;
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           234);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:235: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Output valid did not drain index=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 235, "");
        }
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass 
            = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
        if (VL_UNLIKELY((VL_GTS_III(32, 0xcU, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index) 
                         | (0U == VL_MODDIVS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index, (IData)(0x32U)))))) {
            VL_WRITEF("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d\n",
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__index,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__comp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp0,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sp1,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq0,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__sq1,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__186__stall);
        }
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n 
            = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n);
    }
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       280);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       282);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       284);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:285: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY: Clear left stale VALID\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 285, "");
    }
    VL_WRITEF("ALL PASS: %0d windows x 4 lines x 11 Table-I metrics\n",
              32,vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
    VL_FINISH_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 287, "");
    vlSelf->__Vm_traceActivity[5U] = 1U;
}
