// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCTU_RECON_EXPORT_TB.h for the primary calling header

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "VCTU_RECON_EXPORT_TB__Syms.h"
#include "VCTU_RECON_EXPORT_TB___024root.h"

VL_INLINE_OPT VlCoroutine VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__0(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch = 0;
    IData/*31:0*/ __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x545f5442U;
    __Vtemp_1[2U] = 0x58504f52U;
    __Vtemp_1[3U] = 0x4f4e5f45U;
    __Vtemp_1[4U] = 0x5f524543U;
    __Vtemp_1[5U] = 0x435455U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode = 0U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh = 8U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww = 8U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats 
        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh)), (IData)(8U));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = 0U;
    VL_WRITEF("[TB][TC%0d] preload %0dx%0d, mode=%0d, expected beats=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr 
                = (VL_MULS_III(32, (IData)(0x20U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 0U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp = 0U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp = 1U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 2U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp = 2U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__4__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__3__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = (0x1ffU 
                                                  & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__ww);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__hh);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 1U;
    if (VL_UNLIKELY((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:143: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] export not ready before start\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 143, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit = 0U;
    while ((VL_LTS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats, vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats) 
            & VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit, 
                         ((IData)(0x32U) + VL_MULS_III(32, (IData)(0xaU), vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))))) {
        co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                           "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                           148);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY 
            = ((0U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode) 
               | ((1U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__mode)
                   ? VL_LTES_III(32, 4U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit, (IData)(7U)))
                   : VL_LTES_III(32, 0x11U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit, (IData)(0x1fU)))));
        __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit);
    }
    if (VL_UNLIKELY((vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats 
                     != vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:154: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] timeout TC%0d beats=%0d/%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 154, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                       & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                      | (4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                     | (1U != vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:157: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] DONE/BUSY/ERROR TC%0d done_pulses=%0d busy=%b err=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen,
                  1,((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                     & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))),
                  1,(4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)));
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 157, "");
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = 0U;
    VL_WRITEF("[TB][PASS] TC%0d, beats=%0d, reads=%0d, cycles=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__id,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__reads,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__2__limit);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh = 0x10U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww = 0x20U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id = 2U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats 
        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh)), (IData)(8U));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = 0U;
    VL_WRITEF("[TB][TC%0d] preload %0dx%0d, mode=%0d, expected beats=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr 
                = (VL_MULS_III(32, (IData)(0x20U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 0U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp = 0U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp = 1U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 2U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp = 2U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__7__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__6__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = (0x1ffU 
                                                  & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__ww);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__hh);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 1U;
    if (VL_UNLIKELY((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:143: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] export not ready before start\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 143, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit = 0U;
    while ((VL_LTS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats, vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats) 
            & VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit, 
                         ((IData)(0x32U) + VL_MULS_III(32, (IData)(0xaU), vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))))) {
        co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                           "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                           148);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY 
            = ((0U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode) 
               | ((1U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__mode)
                   ? VL_LTES_III(32, 4U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit, (IData)(7U)))
                   : VL_LTES_III(32, 0x11U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit, (IData)(0x1fU)))));
        __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit);
    }
    if (VL_UNLIKELY((vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats 
                     != vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:154: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] timeout TC%0d beats=%0d/%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 154, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                       & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                      | (4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                     | (1U != vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:157: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] DONE/BUSY/ERROR TC%0d done_pulses=%0d busy=%b err=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen,
                  1,((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                     & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))),
                  1,(4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)));
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 157, "");
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = 0U;
    VL_WRITEF("[TB][PASS] TC%0d, beats=%0d, reads=%0d, cycles=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__id,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__reads,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__5__limit);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode = 2U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh = 0x70U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww = 0x80U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id = 3U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats 
        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh)), (IData)(8U));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = 0U;
    VL_WRITEF("[TB][TC%0d] preload %0dx%0d, mode=%0d, expected beats=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr 
                = (VL_MULS_III(32, (IData)(0x20U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 0U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp = 0U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp = 1U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 2U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp = 2U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__10__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__9__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = (0x1ffU 
                                                  & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__ww);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__hh);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 1U;
    if (VL_UNLIKELY((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:143: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] export not ready before start\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 143, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit = 0U;
    while ((VL_LTS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats, vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats) 
            & VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit, 
                         ((IData)(0x32U) + VL_MULS_III(32, (IData)(0xaU), vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))))) {
        co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                           "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                           148);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY 
            = ((0U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode) 
               | ((1U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__mode)
                   ? VL_LTES_III(32, 4U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit, (IData)(7U)))
                   : VL_LTES_III(32, 0x11U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit, (IData)(0x1fU)))));
        __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit);
    }
    if (VL_UNLIKELY((vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats 
                     != vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:154: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] timeout TC%0d beats=%0d/%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 154, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                       & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                      | (4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                     | (1U != vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:157: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] DONE/BUSY/ERROR TC%0d done_pulses=%0d busy=%b err=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen,
                  1,((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                     & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))),
                  1,(4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)));
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 157, "");
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = 0U;
    VL_WRITEF("[TB][PASS] TC%0d, beats=%0d, reads=%0d, cycles=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__id,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__reads,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__8__limit);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode = 0U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh = 0x80U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww = 0x80U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id = 4U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats 
        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(3U), 
                                      VL_MULS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh)), (IData)(8U));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = 0U;
    VL_WRITEF("[TB][TC%0d] preload %0dx%0d, mode=%0d, expected beats=%0d\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch 
        = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr 
                = (VL_MULS_III(32, (IData)(0x20U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 0U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp = 0U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp = 1U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ww, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch 
        = VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__hh, (IData)(2U));
    __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy = 0U;
    while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__ch)) {
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx = 0U;
        while (VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__cw)) {
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr 
                = (VL_MULS_III(32, (IData)(0x10U), __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy) 
                   + VL_DIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx, (IData)(4U)));
            co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                               "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                               120);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 1U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 2U;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr 
                = (0xfffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr);
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr 
                = __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__addr;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp = 2U;
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffff0000ULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | (IData)((IData)((0x3ffU & ((IData)(5U) 
                                                + (
                                                   ((IData)(0x3f1U) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                   + 
                                                   ((IData)(0xdU) 
                                                    * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffff0000ffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0xcU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x10U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffff0000ffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x13U) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x20U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t 
                = ((0xffffffffffffULL & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t) 
                   | ((QData)((IData)((0x3ffU & ((IData)(0x1aU) 
                                                 + 
                                                 (((IData)(0x3f1U) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__comp) 
                                                  + 
                                                  ((IData)(0xdU) 
                                                   * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__addr)))))) 
                      << 0x30U));
            __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__t;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__13__Vfuncout;
            __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx 
                = ((IData)(4U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__xx);
        }
        __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__preload__12__unnamedblk3__DOT__unnamedblk4__DOT__yy);
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = (0x1ffU 
                                                  & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__ww);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT 
        = (0xffU & __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__hh);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 1U;
    if (VL_UNLIKELY((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:143: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] export not ready before start\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 143, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 1U;
    __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit = 0U;
    while ((VL_LTS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats, vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats) 
            & VL_LTS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit, 
                         ((IData)(0x32U) + VL_MULS_III(32, (IData)(0xaU), vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))))) {
        co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                           "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                           148);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY 
            = ((0U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode) 
               | ((1U == __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__mode)
                   ? VL_LTES_III(32, 4U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit, (IData)(7U)))
                   : VL_LTES_III(32, 0x11U, VL_MODDIVS_III(32, __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit, (IData)(0x1fU)))));
        __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit 
            = ((IData)(1U) + __Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit);
    }
    if (VL_UNLIKELY((vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats 
                     != vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:154: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] timeout TC%0d beats=%0d/%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats);
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 154, "");
    }
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                       & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                      | (4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) 
                     | (1U != vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen)))) {
        VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:157: Assertion failed in %NCTU_RECON_EXPORT_TB.run_case: [FAIL] DONE/BUSY/ERROR TC%0d done_pulses=%0d busy=%b err=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id,
                  32,vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen,
                  1,((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                     & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))),
                  1,(4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)));
        VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 157, "");
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    co_await vlSelf->__VtrigSched_h52bfbd70__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge CTU_RECON_EXPORT_TB.I_CLK)", 
                                                       "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = 0U;
    VL_WRITEF("[TB][PASS] TC%0d, beats=%0d, reads=%0d, cycles=%0d\n[TB][PASS] CTU_RECON_EXPORT 4 cases PASS\n",
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__id,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
              32,vlSelf->CTU_RECON_EXPORT_TB__DOT__reads,
              32,__Vtask_CTU_RECON_EXPORT_TB__DOT__run_case__11__limit);
    VL_FINISH_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 174, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__act(VCTU_RECON_EXPORT_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VCTU_RECON_EXPORT_TB___024root___eval_triggers__act(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_RESETN__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_RESETN__0 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCTU_RECON_EXPORT_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__0(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__Vfuncout;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp = 0;
    IData/*31:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr = 0;
    QData/*63:0*/ __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t;
    __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t = 0;
    // Body
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 0U;
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 0U;
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 0U;
    if (((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN) 
         & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done))) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen 
            = ((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen);
    }
    if (((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN) 
         & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active))) {
        if (VL_UNLIKELY((4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))) {
            VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:71: Assertion failed in %NCTU_RECON_EXPORT_TB: [FAIL] unexpected export error case=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id);
            VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 71, "");
        }
        if ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) {
            if (VL_UNLIKELY(((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR) 
                             > ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                                 ? 0xfffU : 0x3ffU)))) {
                VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:74: Assertion failed in %NCTU_RECON_EXPORT_TB: [FAIL] RAM address outside plane range\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 74, "");
            }
            vlSelf->CTU_RECON_EXPORT_TB__DOT__reads 
                = ((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__reads);
        }
        if (vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled) {
            if (VL_UNLIKELY(((((((((3U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                                   | (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data 
                                      != vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_data)) 
                                  | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component) 
                                     != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp))) 
                                 | ((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x)) 
                                    != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_x))) 
                                | ((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y)) 
                                   != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_y))) 
                               | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last) 
                                  != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_row_last))) 
                              | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last) 
                                 != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp_last))) 
                             | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last) 
                                != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_ctu_last))))) {
                VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:81: Assertion failed in %NCTU_RECON_EXPORT_TB: [FAIL] data/metadata changed while stalled at beat %0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats);
                VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 81, "");
            }
        }
        vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled 
            = ((3U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
               & (~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY)));
        if (vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled) {
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_data 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_x 
                = (0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x));
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_y 
                = (0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y));
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_row_last 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp_last 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last;
            vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_ctu_last 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last;
        }
        if (((3U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
             & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY))) {
            if ((0U == vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp)) {
                vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__w;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__h;
            } else {
                vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw 
                    = VL_DIVS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__w, (IData)(2U));
                vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch 
                    = VL_DIVS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__h, (IData)(2U));
            }
            vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr 
                = (VL_MULS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y, 
                               ((0U == vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp)
                                 ? 0x20U : 0x10U)) 
                   + VL_DIVS_III(32, vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x, (IData)(4U)));
            if (VL_UNLIKELY((((((((((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component) 
                                    != (3U & vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp)) 
                                   | ((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x)) 
                                      != (0x7fU & vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x))) 
                                  | ((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y)) 
                                     != (0x7fU & vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y))) 
                                 | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id) 
                                    != (0x1ffU & vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id))) 
                                | (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data 
                                   != ([&]() {
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr 
                                                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr;
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp 
                                                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp;
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t 
                                                    = 
                                                    ((0xffffffffffff0000ULL 
                                                      & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t) 
                                                     | (IData)((IData)(
                                                                       (0x3ffU 
                                                                        & ((IData)(5U) 
                                                                           + 
                                                                           (((IData)(0x3f1U) 
                                                                             * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp) 
                                                                            + 
                                                                            ((IData)(0xdU) 
                                                                             * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr)))))));
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t 
                                                    = 
                                                    ((0xffffffff0000ffffULL 
                                                      & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t) 
                                                     | ((QData)((IData)(
                                                                        (0x3ffU 
                                                                         & ((IData)(0xcU) 
                                                                            + 
                                                                            (((IData)(0x3f1U) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp) 
                                                                             + 
                                                                             ((IData)(0xdU) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr)))))) 
                                                        << 0x10U));
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t 
                                                    = 
                                                    ((0xffff0000ffffffffULL 
                                                      & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t) 
                                                     | ((QData)((IData)(
                                                                        (0x3ffU 
                                                                         & ((IData)(0x13U) 
                                                                            + 
                                                                            (((IData)(0x3f1U) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp) 
                                                                             + 
                                                                             ((IData)(0xdU) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr)))))) 
                                                        << 0x20U));
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t 
                                                    = 
                                                    ((0xffffffffffffULL 
                                                      & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t) 
                                                     | ((QData)((IData)(
                                                                        (0x3ffU 
                                                                         & ((IData)(0x1aU) 
                                                                            + 
                                                                            (((IData)(0x3f1U) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__comp) 
                                                                             + 
                                                                             ((IData)(0xdU) 
                                                                              * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__addr)))))) 
                                                        << 0x30U));
                                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__Vfuncout 
                                                    = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__t;
                                            }(), __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__0__Vfuncout))) 
                               | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last) 
                                  != (((IData)(4U) 
                                       + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x) 
                                      == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw))) 
                              | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last) 
                                 != ((((IData)(4U) 
                                       + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x) 
                                      == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw) 
                                     & (((IData)(1U) 
                                         + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y) 
                                        == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch)))) 
                             | ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last) 
                                != (((2U == vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp) 
                                     & (((IData)(4U) 
                                         + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x) 
                                        == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw)) 
                                    & (((IData)(1U) 
                                        + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y) 
                                       == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch)))))) {
                VL_WRITEF("[%0t] %%Fatal: CTU_RECON_EXPORT_TB.sv:100: Assertion failed in %NCTU_RECON_EXPORT_TB.unnamedblk2: [FAIL] case=%0d beat=%0d comp=%0d xy=%0d,%0d got comp=%0# xy=%0#,%0# data=%x expected=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id,
                          32,vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats,
                          32,vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp,
                          32,vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x,
                          32,vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y,
                          2,(IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component),
                          7,(0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x)),
                          7,(0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y)),
                          64,vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data,
                          64,([&]() {
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr 
                                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr;
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp 
                                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp;
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t 
                                    = ((0xffffffffffff0000ULL 
                                        & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t) 
                                       | (IData)((IData)(
                                                         (0x3ffU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             (((IData)(0x3f1U) 
                                                               * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp) 
                                                              + 
                                                              ((IData)(0xdU) 
                                                               * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr)))))));
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t 
                                    = ((0xffffffff0000ffffULL 
                                        & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t) 
                                       | ((QData)((IData)(
                                                          (0x3ffU 
                                                           & ((IData)(0xcU) 
                                                              + 
                                                              (((IData)(0x3f1U) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp) 
                                                               + 
                                                               ((IData)(0xdU) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr)))))) 
                                          << 0x10U));
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t 
                                    = ((0xffff0000ffffffffULL 
                                        & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t) 
                                       | ((QData)((IData)(
                                                          (0x3ffU 
                                                           & ((IData)(0x13U) 
                                                              + 
                                                              (((IData)(0x3f1U) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp) 
                                                               + 
                                                               ((IData)(0xdU) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr)))))) 
                                          << 0x20U));
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t 
                                    = ((0xffffffffffffULL 
                                        & __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t) 
                                       | ((QData)((IData)(
                                                          (0x3ffU 
                                                           & ((IData)(0x1aU) 
                                                              + 
                                                              (((IData)(0x3f1U) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__comp) 
                                                               + 
                                                               ((IData)(0xdU) 
                                                                * __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__addr)))))) 
                                          << 0x30U));
                                __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__Vfuncout 
                                    = __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__t;
                            }(), __Vfunc_CTU_RECON_EXPORT_TB__DOT__pattern__1__Vfuncout));
                VL_STOP_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 100, "");
            }
            vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats 
                = ((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats);
            if ((((IData)(4U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x) 
                 == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw)) {
                if ((((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y) 
                     == vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch)) {
                    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp 
                        = ((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp);
                    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
                } else {
                    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y 
                        = ((IData)(1U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y);
                }
                vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
            } else {
                vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x 
                    = ((IData)(4U) + vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x);
            }
        }
    }
    if (vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en) {
        if ((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp))) {
            if ((1U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp))) {
                if ((2U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp))) {
                    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 
                        = (0xffffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data));
                    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 1U;
                    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 0U;
                    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 
                        = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 
                        = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                              >> 0x10U)));
                    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 = 0x10U;
                    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 
                        = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 
                        = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                              >> 0x20U)));
                    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 = 0x20U;
                    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 
                        = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 
                        = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                              >> 0x30U)));
                    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 = 0x30U;
                    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 
                        = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                }
            }
            if ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp))) {
                vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 
                    = (0xffffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data));
                vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 1U;
                vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 0U;
                vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 
                    = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 
                    = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                          >> 0x10U)));
                vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 = 0x10U;
                vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 
                    = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 
                    = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                          >> 0x20U)));
                vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 = 0x20U;
                vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 
                    = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
                vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 
                    = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                          >> 0x30U)));
                vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 = 0x30U;
                vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 
                    = (0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr));
            }
        }
        if ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp))) {
            vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 
                = (0xffffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data));
            vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 1U;
            vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 0U;
            vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr;
            vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 
                = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                      >> 0x10U)));
            vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 = 0x10U;
            vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr;
            vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 
                = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                      >> 0x20U)));
            vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 = 0x20U;
            vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr;
            vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 
                = (0xffffU & (IData)((vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data 
                                      >> 0x30U)));
            vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 = 0x30U;
            vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 
                = vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr;
        }
    }
}
