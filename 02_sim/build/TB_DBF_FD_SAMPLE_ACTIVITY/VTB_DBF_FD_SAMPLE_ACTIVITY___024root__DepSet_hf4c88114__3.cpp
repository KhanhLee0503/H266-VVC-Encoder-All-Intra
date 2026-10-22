// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

extern const VlWide<32>/*1023:0*/ VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0;

VlCoroutine VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__3(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_initial__TOP__Vtiming__1__3\n"); );
    // Init
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern = 0;
    VlWide<32>/*1023:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples;
    VL_ZERO_W(1024, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples);
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 8> __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp = 0;
    IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 0;
    IData/*31:0*/ __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line;
    __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line = 0;
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
        = (2U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
        = (0xffffU & VL_MULS_III(32, (IData)(0xdU), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
        = (0xffffU & VL_MULS_III(32, (IData)(3U), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
        = (0xffffU & ((IData)(7U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
        = (0xffffU & ((IData)(9U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
        = (0xffffU & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       221);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction 
        = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
    }
    if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                   != (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction)) 
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
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line)) {
        if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line) 
             | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xbU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xcU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xdU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xeU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__126__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col = 0xfU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__127__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__128__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__129__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__130__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__131__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__132__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__133__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__134__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__135__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__136__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__137__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__p
               [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__138__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__139__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__125__line);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i = 0U;
    while (VL_LTS_III(32, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__stall)) {
        co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                           224);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                           225);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction 
            = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
        }
        if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                       != (0xffffU 
                                           & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction)) 
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
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line = 0U;
        while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line)) {
            if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line) 
                 | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
            } else {
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
                __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq 
                    = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[0U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[1U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[2U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xbU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[3U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xcU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[4U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xdU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[5U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xeU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[6U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__141__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col = 0xfU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout 
                = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))
                               ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                       (((IData)(9U) 
                                         + (0x3ffU 
                                            & VL_MULS_III(32, (IData)(0x10U), 
                                                          (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                           + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_MULS_III(32, (IData)(0x10U), 
                                                       (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                        + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)))))) 
                             | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col)) 
                                          >> 5U))] 
                                >> (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                        (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__line) 
                                                         + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__col))))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q[7U] 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__142__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__143__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 0U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                    [2U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                                       [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__144__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 1U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__145__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 2U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v 
                = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                    [5U] - VL_MULS_III(32, (IData)(2U), 
                                       __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                                       [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [3U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__146__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 3U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__147__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 4U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__148__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 5U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__149__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 6U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq)]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__150__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 7U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__151__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 8U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v 
                = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                     [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                     [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                    [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [4U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__152__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 9U;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v 
                = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__p
                   [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__q
                   [0U]);
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__Vfuncout 
                = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v)
                    ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v)
                    : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__v);
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__153__Vfuncout;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line 
                = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric = 0xaU;
            __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout 
                = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric) 
                          | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                         | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                        | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                       | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                      | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                     | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)) 
                    | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric))
                    ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (2U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                       : 0U)
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                        : 0U)
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                                        ? 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U)
                                                        : 
                                                       ((0x2fU 
                                                         >= 
                                                         (0x3fU 
                                                          & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                         ? 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                         : 0U))))))))
                    : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                        ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                            ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                            : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__metric)
                                      ? ((0x2fU >= 
                                          (0x3fU & 
                                           VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                          ? (0xfffU 
                                             & (IData)(
                                                       (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                          : 0U) : (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__line)))))
                                                    : 0U))));
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__154__Vfuncout;
            if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got 
                             != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp))) {
                VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__transaction,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__got,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__exp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sp,
                          32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__sq);
                VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
            }
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line 
                = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__140__line);
        }
        if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:228: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input should be blocked with filled output and downstream stalled\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 228, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__i);
    }
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       232);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       234);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (VL_UNLIKELY(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:235: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Output valid did not drain index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 235, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass 
        = ((IData)(1U) + vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass);
    if (VL_UNLIKELY((VL_GTS_III(32, 0xcU, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index) 
                     | (0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index, (IData)(0x32U)))))) {
        VL_WRITEF("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d\n",
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__comp,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq0,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq1,
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__stall);
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__stall = 1U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq1 = 6U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp1 = 4U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq0 = 2U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp0 = 0U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__comp = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern = 2U;
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index = 5U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU] 
        = VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x76U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xb1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xecU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x127U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x162U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x19dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1d8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x213U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x24eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x289U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2c4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2ffU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x33aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x375U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x53U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x8eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xc9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x104U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x13fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x17aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1b5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1f0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x22bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x266U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2a1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2dcU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x317U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x352U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x38dU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3c8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xa6U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xe1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x11cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x157U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x192U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1cdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x208U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x243U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x27eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2b9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2f4U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x32fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x36aU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3a5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3e0U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0xf9U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x134U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x16fU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1aaU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x1e5U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x220U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x25bU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x296U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x2d1U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x30cU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x347U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x382U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3bdU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3f8U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x33U;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU] 
        = ((0xffff0000U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU]) 
           | (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value));
    if ((0U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0U;
    } else if ((1U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((2U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((3U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x3ffU;
    } else if ((4U == __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__pattern)) {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value = 0x6eU;
    } else {
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
            = VL_URANDOM_RANGE_I(0U, 0x3ffU);
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU] 
        = ((0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU]) 
           | (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__value 
              << 0x10U));
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:200: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Input not ready before transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 200, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[1U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[1U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[2U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[2U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[3U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[3U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[4U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[4U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[5U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[5U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[6U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[6U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[7U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[7U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[8U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[8U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[9U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[9U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xaU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xaU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xbU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xbU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xcU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xcU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xdU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xdU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xeU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xeU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0xfU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0xfU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x10U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x10U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x11U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x11U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x12U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x12U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x13U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x13U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x14U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x14U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x15U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x15U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x16U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x16U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x17U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x17U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x18U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x18U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x19U] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x19U];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1aU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1aU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1bU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1bU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1cU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1cU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1dU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1dU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1eU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1eU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[0x1fU] 
        = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__samples[0x1fU];
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp 
        = (3U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__comp);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir 
        = (1U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable 
        = ((0U == VL_MODDIVS_III(32, vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index, (IData)(3U)))
            ? 1U : 3U);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq0);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 
        = (7U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = 2U;
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 
        = (2U & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 
        = (0xffffU & VL_MULS_III(32, (IData)(0xdU), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 
        = (0xffffU & VL_MULS_III(32, (IData)(3U), vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 
        = (0xffffU & ((IData)(7U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 
        = (0xffffU & ((IData)(9U) + vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index));
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag 
        = (0xffffU & vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h4badd57d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (VL_UNLIKELY((1U & (~ ((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid) 
                              & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:219: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.run_one: Missing input handshake index=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 219, "");
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 
                                       221);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction 
        = vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:135: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: No registered response for transaction=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 135, "");
    }
    if (VL_UNLIKELY(((((((((((((((((IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag) 
                                   != (0xffffU & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction)) 
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
                  32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction);
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 144, "");
    }
    __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line)) {
        if ((VL_GTS_III(32, 2U, __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line) 
             | (0U == (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp)))) {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        } else {
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
            __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq 
                = vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[0U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[1U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[2U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xbU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[3U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xcU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[4U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xdU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[5U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xeU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[6U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__157__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col = 0xfU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout 
            = (0x3ffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                      (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                       + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))
                           ? 0U : (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                                   (((IData)(9U) + 
                                     (0x3ffU & VL_MULS_III(32, (IData)(0x10U), 
                                                           (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                            + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)))))) 
                         | (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples[
                            (0x1fU & (VL_MULS_III(32, (IData)(0x10U), 
                                                  (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                   + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col)) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), 
                                                                 (VL_MULS_III(32, (IData)(0x10U), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__line) 
                                                                  + __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__col))))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q[7U] 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__pixel__158__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__159__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 0U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=0: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                [2U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                                   [1U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__160__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 1U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=1: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__161__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 2U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=2: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v 
            = ((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                [5U] - VL_MULS_III(32, (IData)(2U), 
                                   __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                                   [4U])) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [3U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__162__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 3U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=3: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__163__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 4U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=4: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__164__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 5U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=5: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__165__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 6U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=6: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [3U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [(7U & __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq)]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__166__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 7U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=7: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__167__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 8U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=8: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v 
            = (((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                 [7U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                 [6U]) - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
                [5U]) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [4U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__168__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 9U;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=9: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v 
            = (__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__p
               [0U] - __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__q
               [0U]);
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__Vfuncout 
            = (VL_GTS_III(32, 0U, __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v)
                ? (- __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v)
                : __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__v);
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__abs_integer__169__Vfuncout;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line 
            = __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric = 0xaU;
        __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout 
            = (((((((((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric) 
                      | (1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                     | (2U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                    | (3U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                   | (4U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                  | (5U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                 | (6U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)) 
                | (7U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric))
                ? ((0U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((1U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((2U 
                                                == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                ? (
                                                   (0x2fU 
                                                    >= 
                                                    (0x3fU 
                                                     & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                    ? 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far 
                                                               >> 
                                                               (0x3fU 
                                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                    ? 
                                                   ((0x2fU 
                                                     >= 
                                                     (0x3fU 
                                                      & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far 
                                                                >> 
                                                                (0x3fU 
                                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                     ? 
                                                    ((0x2fU 
                                                      >= 
                                                      (0x3fU 
                                                       & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                      ? 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                      ? 
                                                     ((0x2fU 
                                                       >= 
                                                       (0x3fU 
                                                        & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                       ? 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                                       ? 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U)
                                                       : 
                                                      ((0x2fU 
                                                        >= 
                                                        (0x3fU 
                                                         & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                        ? 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                        : 0U))))))))
                : ((8U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                    ? ((0x2fU >= (0x3fU & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                        ? (0xfffU & (IData)((vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext 
                                             >> (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                        : 0U) : ((9U == __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__metric)
                                  ? ((0x2fU >= (0x3fU 
                                                & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                      ? (0xfffU & (IData)(
                                                          (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext 
                                                           >> 
                                                           (0x3fU 
                                                            & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                      : 0U) : ((0x2fU 
                                                >= 
                                                (0x3fU 
                                                 & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))
                                                ? (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff 
                                                              >> 
                                                              (0x3fU 
                                                               & VL_MULS_III(32, (IData)(0xcU), __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__line)))))
                                                : 0U))));
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
            = __Vfunc_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__actual_metric__170__Vfuncout;
        if (VL_UNLIKELY((__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got 
                         != __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_FD_SAMPLE_ACTIVITY.sv:169: Assertion failed in %NTB_DBF_FD_SAMPLE_ACTIVITY.verify_payload: METRIC ERROR id=%0d line=%0d kind=10: actual=%0d expected=%0d SP=%0d SQ=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__transaction,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__got,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__exp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sp,
                      32,__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__sq);
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 169, "");
        }
        __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line 
            = ((IData)(1U) + __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__156__line);
    }
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i = 0U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
}
