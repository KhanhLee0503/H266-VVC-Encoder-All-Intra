// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__3(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                           75);
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK 
            = (1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__5(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active)) 
                         & VL_GTS_III(32, 0x10U, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk1__DOT__lane = 4U;
            VL_WRITEF("[SEND] TU=%0d W=%0d H=%0d HOR=%0# VER=%0#\n",
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc,
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                      [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)],
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                      [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)],
                      2,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode
                      [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)],
                      2,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode
                      [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]);
            vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active = 1U;
            vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat = 0U;
            vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = 1U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START = 1U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST 
                = (4U == VL_MULS_III(32, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                     [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)], 
                                     vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                     [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_ID 
                = (0xffffU & ((IData)(0x64U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH 
                = (3U & (VL_CLOG2_I(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                    [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]) 
                         - (IData)(2U)));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT 
                = (3U & (VL_CLOG2_I(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                    [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]) 
                         - (IData)(2U)));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode
                [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)];
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode
                [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)];
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component
                [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)];
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                = ((0xffffffffffff0000ULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                   | (IData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                     [(0x3fffU & VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc))])));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                = ((0xffffffff0000ffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                   | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                      [(0x3fffU & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)))])) 
                      << 0x10U));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                = ((0xffff0000ffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                   | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                      [(0x3fffU & ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)))])) 
                      << 0x20U));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                = ((0xffffffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                   | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                      [(0x3fffU & ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)))])) 
                      << 0x30U));
        } else if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active) 
                     & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID)) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count);
            if ((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat 
                 == (VL_DIVS_III(32, VL_MULS_III(32, 
                                                 vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                 [(0xfU 
                                                   & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)], 
                                                 vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                                 [(0xfU 
                                                   & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]), (IData)(4U)) 
                     - (IData)(1U)))) {
                vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc);
                vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST = 0U;
                vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat = 0U;
                vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active = 0U;
            } else {
                vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat);
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk2__DOT__lane = 4U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST 
                    = (((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat) 
                       == (VL_DIVS_III(32, VL_MULS_III(32, 
                                                       vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                       [
                                                       (0xfU 
                                                        & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)], 
                                                       vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                                       [
                                                       (0xfU 
                                                        & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc)]), (IData)(4U)) 
                           - (IData)(1U)));
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                    = ((0xffffffffffff0000ULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                       | (IData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                         [(0x3fffU 
                                           & (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc) 
                                              + VL_MULS_III(32, (IData)(4U), 
                                                            ((IData)(1U) 
                                                             + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat))))])));
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                    = ((0xffffffff0000ffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                       | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                          [(0x3fffU 
                                            & ((IData)(1U) 
                                               + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(4U), 
                                                              ((IData)(1U) 
                                                               + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat)))))])) 
                          << 0x10U));
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                    = ((0xffff0000ffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                       | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                          [(0x3fffU 
                                            & ((IData)(2U) 
                                               + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(4U), 
                                                              ((IData)(1U) 
                                                               + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat)))))])) 
                          << 0x20U));
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA 
                    = ((0xffffffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA) 
                       | ((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem
                                          [(0x3fffU 
                                            & ((IData)(3U) 
                                               + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(4U), 
                                                              ((IData)(1U) 
                                                               + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat)))))])) 
                          << 0x30U));
            }
        }
    } else {
        vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count = 0U;
        vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat = 0U;
        vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active = 0U;
        vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = 0U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active 
        = vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat 
        = vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc 
        = vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID 
        = vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats 
        = (0x1ffU & ((IData)(4U) << (7U & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH) 
                                           + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT)))));
}

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_resume(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_resume\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0b9c4a28__0.resume("@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc3711975__0.resume("@([changed] TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0b68d2ea__0.resume("@([changed] (32'sh10 == TQ_INVERSE_TRANSFORM_TOP_TB.r_rx_tc))");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_commit(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_commit\n"); );
    // Body
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0b9c4a28__0.commit("@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)");
    }
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc3711975__0.commit("@([changed] TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0b68d2ea__0.commit("@([changed] (32'sh10 == TQ_INVERSE_TRANSFORM_TOP_TB.r_rx_tc))");
    }
}

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);

bool VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<13> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__act(vlSelf);
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___timing_resume(vlSelf);
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_nba(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);

bool VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__nba(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__nba(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 12, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_debug_assertions(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
