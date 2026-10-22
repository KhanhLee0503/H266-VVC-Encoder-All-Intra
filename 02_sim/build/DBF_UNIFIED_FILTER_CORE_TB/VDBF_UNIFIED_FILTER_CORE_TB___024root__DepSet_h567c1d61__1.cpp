// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_UNIFIED_FILTER_CORE_TB.h for the primary calling header

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB__Syms.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

VL_INLINE_OPT VlCoroutine VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbebc200ULL, 
                                       nullptr, "../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 
                                       306);
    VL_WRITEF("[%0t] %%Fatal: DBF_UNIFIED_FILTER_CORE_TB.sv:307: Assertion failed in %NDBF_UNIFIED_FILTER_CORE_TB: GLOBAL TIMEOUT accepted=%0d completed=%0d state=%0#\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted,
              32,vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed,
              3,(IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state));
    VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 307, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__clk__0 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n__0 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
