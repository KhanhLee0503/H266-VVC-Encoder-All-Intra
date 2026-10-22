// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

extern const VlWide<32>/*1023:0*/ VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__1(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern = 0;
    VlWide<32>/*1023:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples;
    VL_ZERO_W(1024, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples);
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line = 0;
    // Body
    while (VL_GTS_III(32, 4U, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line)) {
        if ((VL_GTS_III(32, 2U, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line) 
             | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xbU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xcU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xdU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xeU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__33__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col = 0xfU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__34__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__35__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__36__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__37__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__38__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__39__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__40__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__41__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__42__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__43__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__44__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__p
               [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__45__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__46__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction,
                      32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line 
            = ((IData)(1U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i = 0U;
    while (VL_LTS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__stall)) {
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           224);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           225);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
        }
        if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                       != (0xffffU 
                                           & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction)) 
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
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line = 0U;
        while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line)) {
            if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line) 
                 | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
            } else {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xbU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xcU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xdU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xeU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__48__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col = 0xfU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__49__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__50__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__51__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__52__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__53__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__54__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__55__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__56__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__57__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__58__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__59__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__p
                   [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__60__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__61__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__47__line);
        }
        if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:228: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input should be blocked with filled output and downstream stalled\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 228, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__i);
    }
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:235: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Output valid did not drain index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 235, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass 
        = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
    if (VL_UNLIKELY((VL_GTS_III(32, 0xcU, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index) 
                     | (0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index, (IData)(0x32U)))))) {
        VL_WRITEF("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d\n",
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__comp,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__stall);
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__stall = 3U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq1 = 7U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp1 = 7U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq0 = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp0 = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__comp = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern = 2U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index = 2U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x76U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xb1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xecU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x127U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x162U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x19dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1d8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x213U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x24eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x289U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2c4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2ffU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x33aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x375U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x53U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x8eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xc9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x104U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x13fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x17aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1b5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1f0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x22bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x266U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2a1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2dcU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x317U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x352U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x38dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3c8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xa6U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xe1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x11cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x157U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x192U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1cdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x208U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x243U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x27eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2b9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2f4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x32fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x36aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3a5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3e0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0xf9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x134U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x16fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1aaU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x1e5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x220U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x25bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x296U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x2d1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x30cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x347U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x382U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3bdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3f8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x33U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value = 0x6eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__value 
              << 0x10U));
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:200: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input not ready before transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 200, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[1U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[2U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[3U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[4U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[5U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[6U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[7U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[8U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[9U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xaU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xbU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xcU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xdU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xeU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0xfU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x10U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x11U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x12U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x13U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x14U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x15U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x16U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x17U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x18U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x19U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1aU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1bU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1cU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1dU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1eU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__samples[0x1fU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp 
        = (3U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__comp);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir 
        = (1U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable 
        = ((0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index, (IData)(3U)))
            ? 1U : 3U);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 2U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
        = (2U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
        = (0xffffU & VL_MULS_III(32, (IData)(0xdU), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
        = (0xffffU & VL_MULS_III(32, (IData)(3U), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
        = (0xffffU & ((IData)(7U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
        = (0xffffU & ((IData)(9U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
        = (0xffffU & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       221);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction 
        = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
    }
    if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                   != (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction)) 
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
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line)) {
        if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line) 
             | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xbU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xcU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xdU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xeU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__64__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col = 0xfU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__65__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__66__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__67__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__68__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__69__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__70__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__71__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__72__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__73__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__74__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__75__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__p
               [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__76__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__77__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__63__line);
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__i = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
