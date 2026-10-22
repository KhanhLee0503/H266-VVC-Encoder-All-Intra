// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_UNIFIED_FILTER_CORE_TB.h for the primary calling header

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

VL_INLINE_OPT void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__3(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid) 
           & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state)));
    if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 1U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
            }
        } else {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 1U;
        }
    }
    if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 1U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
            }
        } else {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 1U;
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 1024> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd2cfcd7f_0;

VL_INLINE_OPT void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_comb__TOP__1(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_comb__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass) 
                     << 9U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid) 
                                << 8U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) 
                                           << 7U) | 
                                          (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) 
                                            << 6U) 
                                           | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
                                               << 5U) 
                                              | ((((4U 
                                                    == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                                                   & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)))) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd2cfcd7f_0
        [__Vtableidx1];
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__1(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__2(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
void VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_comb__TOP__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);

void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_nba(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___nba_comb__TOP__1(vlSelf);
    }
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_resume(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h63ed2655__0.resume("@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_commit(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h63ed2655__0.commit("@(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)");
    }
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);

bool VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__act(vlSelf);
    VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDBF_UNIFIED_FILTER_CORE_TB___024root___timing_resume(vlSelf);
        VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__nba(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__nba(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_debug_assertions(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
