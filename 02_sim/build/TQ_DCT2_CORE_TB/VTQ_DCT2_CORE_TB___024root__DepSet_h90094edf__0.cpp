// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DCT2_CORE_TB.h for the primary calling header

#include "VTQ_DCT2_CORE_TB__pch.h"
#include "VTQ_DCT2_CORE_TB___024root.h"

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___eval_initial__TOP(VTQ_DCT2_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_DCT2_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_DCT2_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_DCT2_CORE_TB___024root* vlSelf);

void VTQ_DCT2_CORE_TB___024root___eval_initial(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_initial\n"); );
    // Body
    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h1aa68384__0 = (1U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h1aa69393__0 = (2U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h1aa724a8__0 = (3U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h1aa5b4b7__0 = (4U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h1aa74506__0 = (5U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
}

VL_INLINE_OPT VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                           66);
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK = (1U & 
                                               (~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready 
        = (2U | (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid)) 
                       | ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready) 
                          >> 1U))));
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake 
        = ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake 
        = ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY) 
           & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID));
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready 
        = (0x10U | ((8U & (((~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                >> 3U)) << 3U) | (0x7ffffff8U 
                                                  & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                                     >> 1U)))) 
                    | ((4U & (((~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                   >> 2U)) << 2U) | 
                              (0x7ffffffcU & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                              >> 1U)))) 
                       | ((2U & (((~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                      >> 1U)) << 1U) 
                                 | (0x7ffffffeU & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                                   >> 1U)))) 
                          | (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                                   | ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                      >> 1U)))))));
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready 
        = (4U | ((2U & (((~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                             >> 1U)) << 1U) | (0x7ffffffeU 
                                               & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
                                                  >> 1U)))) 
                 | (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid)) 
                          | ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
                             >> 1U)))));
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY) 
                       << 2U) | ((2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready 
        = (1U & ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))
                  ? ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))
                      ? ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready) 
                         >> 3U) : ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready) 
                                   >> 2U)) : ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))
                                               ? ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready) 
                                                  >> 1U)
                                               : (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready))));
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
                if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake) 
                     & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
                        == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
                }
            } else if ((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches)) 
                        == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 6U;
            }
        } else if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
                = ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))
                    ? 5U : 2U);
        }
    } else if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) 
             & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat) 
                == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
            = ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE))
                ? 2U : 1U);
    }
}

void VTQ_DCT2_CORE_TB___024root___eval_act(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x3e8ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x3efULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc;
    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc = 0;
    IData/*31:0*/ __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx;
    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx = 0;
    IData/*31:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle;
    __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4;
    __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5;
    __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6;
    __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6 = 0;
    CData/*4:0*/ __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7;
    __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14 = 0;
    IData/*16:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v16;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v17;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v18;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v19;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v20;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v21;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v22;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v23;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v24;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v25;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v26;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v27;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v28;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v29;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v31;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v32;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v33;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v34;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v35;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v36;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v37;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v38;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v39;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v40;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v41;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v42;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v43;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v44;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v46;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v47;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v48;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v49;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v50;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v51;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v52;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v53;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v54;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v55;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v56;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v57;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v58;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v59;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v17;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v18;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v19;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v21;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v22;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v23;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v25;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v26;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v27;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v29;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v30;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v31;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v33;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v33 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v34;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v34 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v35;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v35 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v37;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v37 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v38;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v38 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v39;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v39 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v41;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v41 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v42;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v42 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v43;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v43 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v45;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v45 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v46;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v46 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v47;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v47 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v49;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v49 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v50;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v50 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v51;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v51 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v53;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v53 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v54;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v54 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v55;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v55 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v57;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v57 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v58;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v58 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v59;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v59 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v61;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v61 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v62;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v62 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v63;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v63 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6 = 0;
    IData/*17:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v17;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v18;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v19;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v20;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v21;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v22;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v23;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v25;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v26;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v27;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v28;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v29;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v30;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v31;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v9;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v9 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v10;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v10 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v11;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v11 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v13;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v13 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v14;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v14 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v15;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v15 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v17;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v17 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v18;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v18 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v19;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v19 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v21;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v21 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v22;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v22 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v23;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v23 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v25;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v25 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v26;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v26 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v27;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v27 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v29;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v29 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v30;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v30 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v31;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v31 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v2;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v2 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v3;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v3 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1 = 0;
    IData/*27:0*/ __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1;
    __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1 = 0;
    std::string __Vtemp_9;
    // Body
    __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle = vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30 = 0U;
    __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45 = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx = 5U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx = 5U;
    if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx = 0x10U;
    }
    if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk4__DOT__coeff_idx = 8U;
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk5__DOT__coeff_idx = 4U;
    }
    if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk6__DOT__coeff_idx = 2U;
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx = 4U;
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN) {
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid) {
            if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID)) 
                                    | (0U != ((((vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] 
                                                 ^ 
                                                 vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[0U]) 
                                                | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] 
                                                   ^ 
                                                   vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[1U])) 
                                               | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] 
                                                  ^ 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[2U])) 
                                              | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] 
                                                 ^ 
                                                 vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[3U])))) 
                                   | ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST) 
                                      != (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last)))))) {
                if (VL_GTS_III(32, 5U, vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__0 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__0;
                    }
                }
                VL_WRITEF("ERROR: output changed while stalled at cycle %0d\n",
                          32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle);
                vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                    = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
            }
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid 
            = ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID) 
               & (~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY)));
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST;
            vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles 
                = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles);
        }
        if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID) 
             & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY))) {
            if (VL_UNLIKELY(VL_LTES_III(32, 5U, vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                VL_WRITEF("ERROR: unexpected extra output at cycle %0d\n",
                          32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle);
                vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                    = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
            } else {
                vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U]);
                vlSelf->TQ_DCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx = 4U;
                if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[(7U 
                                                            & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat))] 
                        = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat))] 
                     != vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat))])) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] 
                                      << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] 
                                                >> 0x1cU)));
                if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[(7U 
                                                            & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(1U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(1U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] 
                                      << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] 
                                                >> 0x18U)));
                if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[(7U 
                                                            & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(2U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(2U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0 
                    = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] 
                                      << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] 
                                                  >> 0x14U)));
                if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[(7U 
                                                            & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)][(0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                        = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h737b5365__0;
                }
                if ((vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(3U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))] 
                     != vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                     [((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                        ? (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)
                        : 0U)][(0x1fU & ((IData)(3U) 
                                         + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat)))])) {
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
                    }
                }
                if (VL_UNLIKELY(((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST) 
                                 != (vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat 
                                     == (VL_DIVS_III(32, 
                                                     ((4U 
                                                       >= 
                                                       (7U 
                                                        & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                                       ? 
                                                      vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                                      [
                                                      (7U 
                                                       & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                                       : 0U), (IData)(4U)) 
                                         - (IData)(1U)))))) {
                    VL_WRITEF("ERROR: O_DATA_LAST mismatch in testcase %0d, beat %0d\n",
                              32,((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed),
                              32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat);
                    vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__2 
                        = ((IData)(1U) + ((4U >= (7U 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                           ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                          [(7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                           : 0U));
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors);
                    if ((4U >= (7U & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))) {
                        vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[(7U 
                                                                     & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)] 
                            = vlSelf->TQ_DCT2_CORE_TB__DOT____Vlvbound_h0fa7f65f__2;
                    }
                }
                if (VL_UNLIKELY((vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat 
                                 == (VL_DIVS_III(32, 
                                                 ((4U 
                                                   >= 
                                                   (7U 
                                                    & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed))
                                                   ? 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                                  [
                                                  (7U 
                                                   & vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)]
                                                   : 0U), (IData)(4U)) 
                                     - (IData)(1U))))) {
                    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc 
                        = vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed;
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat = 0U;
                    VL_WRITEF(" \n===============================================================\n");
                    __Vtemp_9 = ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                  ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_name
                                 [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                  : std::string{""});
                    VL_WRITEF("TESTCASE %0d / 5: %@  (N=%0d)\n===============================================================\n     INDEX             INPUT             GOLDEN              RTL\n",
                              32,((IData)(1U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc),
                              -1,&(__Vtemp_9),32,((4U 
                                                   >= 
                                                   (7U 
                                                    & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                                   ? 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                                  [
                                                  (7U 
                                                   & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                                   : 0U));
                    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("       %02d         %11d        %11d      %11d   %s\n",
                                  32,__Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx,
                                  16,vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  40,((vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                       [((4U >= (7U 
                                                 & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                          ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                          : 0U)][(0x1fU 
                                                  & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)] 
                                       == vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                       [((4U >= (7U 
                                                 & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                          ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                          : 0U)][(0x1fU 
                                                  & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)])
                                       ? 0x4f4bULL : 0x4552524f52ULL));
                        __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(1U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF(" \nINPUT MATRIX (4 columns / row):\n");
                    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx),
                                  16,vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  16,vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  16,vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  16,vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF("EXPECTED COEFFICIENT MATRIX (4 columns / row):\n");
                    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx),
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    VL_WRITEF("ACTUAL COEFFICIENT MATRIX (4 columns / row):\n");
                    __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx = 0U;
                    while (VL_LTS_III(32, __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx, 
                                      ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                        ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                       [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                        : 0U))) {
                        VL_WRITEF("  [%02d..%02d] %11d %11d %11d %11d\n",
                                  32,__Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx,
                                  32,((IData)(3U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx),
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx)],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(1U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(2U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))],
                                  28,vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual
                                  [((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                     ? (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)
                                     : 0U)][(0x1fU 
                                             & ((IData)(3U) 
                                                + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx))]);
                        __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx 
                            = ((IData)(4U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__idx);
                    }
                    if ((0U == ((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                 ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                 : 0U))) {
                        VL_WRITEF("TESTCASE %0d PASS\n",
                                  32,((IData)(1U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc));
                    } else {
                        VL_WRITEF("TESTCASE %0d FAIL: %0d error(s)\n",
                                  32,((IData)(1U) + __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc),
                                  32,((4U >= (7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc))
                                       ? vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors
                                      [(7U & __Vtask_TQ_DCT2_CORE_TB__DOT__print_full_result__0__tc)]
                                       : 0U));
                    }
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
                } else {
                    vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat 
                        = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat);
                }
            }
        }
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data[3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last = 0U;
    }
    if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        if ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44 
                = (0xfffffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48 = 1U;
        } else if ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45 
                = (0xfffffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49 = 1U;
        } else if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46 
                = (0xfffffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50 = 1U;
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47 
                = (0xfffffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51 = 1U;
        }
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        if ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U]);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                  << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U] 
                                            >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                  << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                            >> 0x18U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[3U] 
                                  << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                              >> 0x14U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41 = 1U;
        } else if ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U]);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                  << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U] 
                                            >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                  << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                            >> 0x18U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[3U] 
                                  << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                              >> 0x14U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42 = 1U;
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U]);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                  << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U] 
                                            >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                  << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
                                            >> 0x18U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[3U] 
                                  << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
                                              >> 0x14U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43 = 1U;
        }
    }
    if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        if ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U]);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
                                  << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U] 
                                            >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
                                  << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
                                            >> 0x18U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
                                  << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
                                              >> 0x14U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
                                  << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
                                               >> 0x10U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
                                  << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
                                               >> 0xcU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
                                  << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
                                               >> 8U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30 
                = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
                   >> 4U);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30 = 1U;
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U]);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
                                  << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U] 
                                            >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
                                  << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
                                            >> 0x18U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
                                  << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
                                              >> 0x14U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
                                  << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
                                               >> 0x10U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
                                  << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
                                               >> 0xcU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29 
                = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
                                  << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
                                               >> 8U)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31 
                = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
                   >> 4U);
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31 = 1U;
        }
    }
    if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0U]);
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v1 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[1U] 
                              << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0U] 
                                        >> 0x1cU)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v2 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[2U] 
                              << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[1U] 
                                        >> 0x18U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v3 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[3U] 
                              << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[2U] 
                                          >> 0x14U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v4 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[4U] 
                              << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[3U] 
                                           >> 0x10U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v5 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[5U] 
                              << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[4U] 
                                           >> 0xcU)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v6 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[6U] 
                              << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[5U] 
                                           >> 8U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v7 
            = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[6U] 
               >> 4U);
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v8 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[7U]);
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v9 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[8U] 
                              << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[7U] 
                                        >> 0x1cU)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v10 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[9U] 
                              << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[8U] 
                                        >> 0x18U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v11 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xaU] 
                              << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[9U] 
                                          >> 0x14U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v12 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xbU] 
                              << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xaU] 
                                           >> 0x10U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v13 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xcU] 
                              << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xbU] 
                                           >> 0xcU)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v14 
            = (0xfffffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xdU] 
                              << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xcU] 
                                           >> 8U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v15 
            = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xdU] 
               >> 4U);
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) {
        if ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx = 4U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0 
                = (0xffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0 = 1U;
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v1 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x10U)));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v2 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x20U)));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v3 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x30U)));
        } else if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 
                = (0xffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 = 1U;
            __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4 
                = (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat), 2U));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x10U)));
            __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5 
                = (0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat), 2U)));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x20U)));
            __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6 
                = (0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat), 2U)));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7 
                = (0xffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA 
                                      >> 0x30U)));
            __Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7 
                = (0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat), 2U)));
        }
        if ((0U != (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx = 4U;
            }
        }
    }
    if ((1U & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
                >> 1U) & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid)))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                          [0U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                          [1U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                           [0U], 6U) 
                             + (VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                              [0U], 1U) 
                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                [0U])));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                           [1U], 6U) 
                             + (VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                              [1U], 1U) 
                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                [1U])));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1 = 1U;
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2 = 1U;
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN) {
        __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle = ((IData)(1U) 
                                                 + vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle);
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY 
            = ((4U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress) 
               | ((1U != VL_MODDIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle, (IData)(5U))) 
                  & (2U != VL_MODDIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle, (IData)(5U)))));
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle = 0U;
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0 = 1U;
    }
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 3U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x, 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0 = 1U;
    }
    if ((1U & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                >> 2U) & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                          >> 1U)))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x
                                          [0U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x
                                          [1U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x
                                          [2U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x
                                          [3U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                          [0U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                           [0U], 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x
                                           [0U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                          [1U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                           [1U], 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x
                                           [1U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                          [2U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                           [2U], 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x
                                           [2U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                          [3U], 1U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                                           [3U], 1U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x
                                           [3U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x
                             [3U]));
    }
    if ((1U & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                >> 1U) & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
            [0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
            [1U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
            [2U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
            [3U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
            [0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
            [1U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
            [2U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
            [3U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                           [0U], 4U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                             [0U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                           [1U], 4U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                             [1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                           [2U], 4U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                             [2U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                           [3U], 4U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                             [3U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3 = 1U;
    }
    if ((IData)((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                  >> 4U) & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                            >> 3U)))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01
                             [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23
                             [0U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01
                             [1U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01
                             [3U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23
                             [3U]));
    }
    if ((1U & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                >> 3U) & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                          >> 2U)))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x
                             [3U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x
                             [2U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x
                             [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x
                             [1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x
                             [0U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x
                             [0U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x
                             [0U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x
                             [1U]));
    }
    if ((0x10U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [4U]) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [0U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [1U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [1U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [2U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [3U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [3U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [4U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [4U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [5U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [5U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [6U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [6U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                 [7U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                                 [7U]));
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [0U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [1U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [2U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [3U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [4U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [5U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [6U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial
                   [7U]);
        }
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7 = 1U;
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,20, 
                                                         (0xfffffU 
                                                          & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))), 3U) 
                             + VL_EXTENDS_II(28,20, 
                                             (0xfffffU 
                                              & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4)))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,20, 
                                                         (0xfffffU 
                                                          & (IData)(
                                                                    (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                                     >> 0x14U)))), 3U) 
                             + VL_EXTENDS_II(28,20, 
                                             (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                         >> 0x14U))))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0 
            = (0xfffffffU & VL_EXTENDS_II(28,20, (0xfffffU 
                                                  & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1 
            = (0xfffffffU & VL_EXTENDS_II(28,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                             >> 0x14U)))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1 = 1U;
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,19, 
                                                         (0x7ffffU 
                                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])), 3U) 
                             + VL_EXTENDS_II(28,19, 
                                             (0x7ffffU 
                                              & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U]))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,19, 
                                                         (0x7ffffU 
                                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                              << 0xdU) 
                                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                                >> 0x13U)))), 3U) 
                             + VL_EXTENDS_II(28,19, 
                                             (0x7ffffU 
                                              & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                    >> 0x13U))))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,19, 
                                                         (0x7ffffU 
                                                          & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                             >> 6U))), 3U) 
                             + VL_EXTENDS_II(28,19, 
                                             (0x7ffffU 
                                              & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                 >> 6U)))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           VL_EXTENDS_II(28,19, 
                                                         (0x7ffffU 
                                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                              << 7U) 
                                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                >> 0x19U)))), 3U) 
                             + VL_EXTENDS_II(28,19, 
                                             (0x7ffffU 
                                              & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                  << 7U) 
                                                 | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                    >> 0x19U))))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0 
            = (0xfffffffU & VL_EXTENDS_II(28,19, (0x7ffffU 
                                                  & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1 
            = (0xfffffffU & VL_EXTENDS_II(28,19, (0x7ffffU 
                                                  & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                      << 0xdU) 
                                                     | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                        >> 0x13U)))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2 
            = (0xfffffffU & VL_EXTENDS_II(28,19, (0x7ffffU 
                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                     >> 6U))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3 
            = (0xfffffffU & VL_EXTENDS_II(28,19, (0x7ffffU 
                                                  & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                      << 7U) 
                                                     | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                        >> 0x19U)))));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3 = 1U;
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0 
            = (0x3ffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[0U]);
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1 
            = (0x3ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[1U] 
                            << 0xeU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[0U] 
                                        >> 0x12U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2 
            = (0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[1U] 
                           >> 4U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3 
            = (0x3ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[2U] 
                            << 0xaU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[1U] 
                                        >> 0x16U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4 
            = (0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[2U] 
                           >> 8U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5 
            = (0x3ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[3U] 
                            << 6U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[2U] 
                                      >> 0x1aU)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6 
            = (0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[3U] 
                           >> 0xcU));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7 
            = (0x3ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[4U] 
                            << 2U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[3U] 
                                      >> 0x1eU)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7 = 1U;
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0 
            = (0x1ffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[0U]);
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[1U] 
                            << 0xfU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[0U] 
                                        >> 0x11U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[1U] 
                           >> 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[2U] 
                            << 0xdU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[1U] 
                                        >> 0x13U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[2U] 
                           >> 4U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[3U] 
                            << 0xbU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[2U] 
                                        >> 0x15U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[3U] 
                           >> 6U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[4U] 
                            << 9U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[3U] 
                                      >> 0x17U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[4U] 
                           >> 8U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[5U] 
                            << 7U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[4U] 
                                      >> 0x19U)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[5U] 
                           >> 0xaU));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[6U] 
                            << 5U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[5U] 
                                      >> 0x1bU)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[6U] 
                           >> 0xcU));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[7U] 
                            << 3U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[6U] 
                                      >> 0x1dU)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14 
            = (0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[7U] 
                           >> 0xeU));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15 
            = (0x1ffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[8U] 
                            << 1U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[7U] 
                                      >> 0x1fU)));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15 = 1U;
    }
    if ((0x10U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        if ((0U == vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
             [4U])) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [1U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [2U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [3U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [4U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [5U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [6U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [7U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [8U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [9U]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xaU]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xbU]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xcU]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xdU]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xeU]);
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                   [0xfU]);
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [1U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [1U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [2U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [3U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [3U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [4U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [4U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [5U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [5U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [6U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [6U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [7U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [7U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [8U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [8U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [9U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [9U]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xaU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xaU]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xbU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xbU]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xcU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xcU]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xdU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xdU]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xeU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xeU]));
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 
                = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                 [0xfU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial
                                 [0xfU]));
        }
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14 = 1U;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15 = 1U;
    }
    if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
            [0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v1 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                           [0U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v2 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                           [0U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [0U], 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v4 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v5 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                          [0U], 4U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v7 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
            [1U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v9 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                           [1U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v10 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                           [1U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v11 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [1U], 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v12 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v13 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                          [1U], 4U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v14 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v15 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
            [2U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v17 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                           [2U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v18 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                           [2U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v19 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [2U], 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v20 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v21 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                          [2U], 4U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v22 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v23 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
            [3U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v25 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                           [3U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v26 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                           [3U], 2U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v27 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [3U], 3U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v28 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v29 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x
                                          [3U], 4U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v30 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v31 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [0U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1 = 1U;
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [0U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [0U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [0U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [0U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [1U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v5 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [1U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v6 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [1U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v7 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [1U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [2U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v9 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [2U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v10 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [2U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v11 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [2U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [3U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v13 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [3U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v14 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [3U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v15 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [3U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [4U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v17 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [4U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v18 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [4U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v19 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [4U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [5U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v21 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [5U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v22 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [5U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v23 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [5U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [6U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v25 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [6U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v26 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [6U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v27 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [6U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [7U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v29 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [7U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v30 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [7U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v31 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
            [7U][3U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2 = 1U;
    }
    if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [0U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [0U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [0U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [0U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [1U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [1U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [1U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [1U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [2U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [2U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [2U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [2U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [3U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [3U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [3U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [3U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [4U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [4U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [4U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [4U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [5U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [5U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [5U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [5U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [6U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [6U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [6U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [6U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [7U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [7U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [7U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                             [7U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3 = 1U;
    }
    if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [0U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [1U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [2U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [3U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [3U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [4U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [4U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [5U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [5U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [6U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [6U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01
                             [7U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23
                             [7U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7 = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT____Vlvbound_he4bac112__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4 = 1U;
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52 
            = (0xfffffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52 = 1U;
        if ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53 = 1U;
        } else if ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54 = 1U;
        } else if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55 = 1U;
        } else {
            __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56 
                = (0xfffffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
                                         >> 0x1cU)));
            __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56 = 1U;
        }
    }
    if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
            [0U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                          [0U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [0U] + VL_SHIFTL_III(28,28,32, 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                                  [0U], 2U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v2 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x, 1U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v3 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [0U], 5U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v4 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [0U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v5 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x, 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v6 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [0U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v7 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v8 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v9 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [0U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v10 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v11 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v12 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                            [0U], 6U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                              [0U], 2U)) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [0U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v13 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x, 3U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v14 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [0U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [0U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                          [1U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v16 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [1U] + VL_SHIFTL_III(28,28,32, 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                                  [1U], 2U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v17 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x, 1U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v18 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [1U], 5U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v19 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [1U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v20 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x, 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v21 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [1U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v22 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v23 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v24 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [1U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v25 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v26 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v27 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                            [1U], 6U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                              [1U], 2U)) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [1U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v28 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x, 3U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v29 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [1U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [1U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                          [2U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v31 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [2U] + VL_SHIFTL_III(28,28,32, 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                                  [2U], 2U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v32 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x, 1U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v33 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [2U], 5U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v34 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [2U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v35 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x, 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v36 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [2U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v37 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v38 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v39 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [2U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v40 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v41 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v42 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                            [2U], 6U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                              [2U], 2U)) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [2U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v43 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x, 3U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v44 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [2U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [2U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                          [3U], 2U));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v46 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [3U] + VL_SHIFTL_III(28,28,32, 
                                                  vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                                  [3U], 2U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v47 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x, 1U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v48 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [3U], 5U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v49 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [3U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v50 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x, 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v51 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [3U], 2U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v52 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v53 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v54 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                           [3U], 6U) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v55 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v56 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                             [3U], 1U)));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v57 
            = (0xfffffffU & ((VL_SHIFTL_III(28,28,32, 
                                            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                            [3U], 6U) 
                              + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x
                                              [3U], 2U)) 
                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                             [3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v58 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x, 3U));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v59 
            = (0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                           [3U], 3U) 
                             + VL_SHIFTL_III(28,28,32, 
                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                             [3U], 1U)));
    }
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v1 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [1U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v5 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [1U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v6 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [1U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v7 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [1U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [2U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v9 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [2U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v10 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [2U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v11 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [2U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [3U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v13 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [3U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v14 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [3U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v15 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [3U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [4U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v17 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [4U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v18 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [4U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v19 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [4U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [5U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v21 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [5U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v22 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [5U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v23 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [5U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [6U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v25 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [6U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v26 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [6U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v27 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [6U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [7U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v29 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [7U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v30 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [7U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v31 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [7U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [8U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v33 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [8U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v34 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [8U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v35 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [8U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [9U][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v37 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [9U][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v38 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [9U][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v39 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [9U][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xaU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v41 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xaU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v42 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xaU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v43 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xaU][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xbU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v45 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xbU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v46 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xbU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v47 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xbU][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xcU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v49 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xcU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v50 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xcU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v51 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xcU][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xdU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v53 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xdU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v54 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xdU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v55 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xdU][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xeU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v57 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xeU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v58 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xeU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v59 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xeU][3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xfU][0U];
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v61 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xfU][1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v62 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xfU][2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v63 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route
            [0xfU][3U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
            [1U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2 = 1U;
    }
    if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [1U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [1U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [1U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [1U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [2U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [2U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [2U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [2U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [3U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [3U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [3U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [3U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [4U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [4U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [4U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [4U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [5U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [5U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [5U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [5U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [6U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [6U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [6U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [6U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [7U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [7U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [7U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [7U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [8U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [8U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v8 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [8U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [8U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [9U][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [9U][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v9 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [9U][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [9U][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xaU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xaU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v10 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xaU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xaU][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xbU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xbU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v11 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xbU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xbU][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xcU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xcU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v12 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xcU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xcU][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xdU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xdU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v13 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xdU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xdU][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xeU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xeU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v14 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xeU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xeU][3U]));
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xfU][0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xfU][1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v15 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xfU][2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route
                             [0xfU][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
            [2U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3 = 1U;
    }
    if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid))) {
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [1U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [1U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [2U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [2U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [3U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [3U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [4U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [4U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [5U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [5U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [6U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [6U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [7U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [7U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [8U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [8U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [9U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [9U]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xaU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xaU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xbU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xbU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xcU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xcU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xdU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xdU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xeU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xeU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14 = 1U;
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01
                             [0xfU] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23
                             [0xfU]));
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15 = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
            [3U];
        __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT____Vlvbound_hefc753fd__0;
        __Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4 = 1U;
    }
    if ((IData)((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
                  >> 2U) & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                            >> 1U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x
                             [0U] - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x
                             [1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1 
            = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x
                             [0U] + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x
                             [1U]));
    }
    if ((IData)((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready) 
                  >> 1U) & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference), 6U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0 
            = (0xfffffffU & VL_SHIFTL_III(28,28,32, 
                                          VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum), 6U));
    }
    if ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)) 
             & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_even_data;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_odd_data;
        }
        if (((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)) 
             & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                >> 1U))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[2U];
        }
        if (((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)) 
             & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                >> 2U))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[4U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16[4U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[4U];
        }
        if (((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)) 
             & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                >> 3U))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[5U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[8U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[8U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[4U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[5U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[5U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[6U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[7U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32[8U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[8U];
        }
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23__v7;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v7;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v8;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v9;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v10;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v11;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v12;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v13;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v14;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v14;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23__v15;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[0U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[0U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[0U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[0U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[1U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[1U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[1U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[1U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[2U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[2U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[2U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[2U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[3U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[3U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[3U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v14;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[3U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[4U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v16;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[4U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v17;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[4U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v18;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[4U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v19;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[5U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v20;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[5U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v21;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[5U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v22;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[5U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v23;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[6U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v24;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[6U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v25;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[6U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v26;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[6U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v27;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[7U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v28;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[7U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v29;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[7U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v30;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route[7U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route__v31;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v8;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v9;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v10;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v12;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v13;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v14;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v8;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v9;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v10;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v12;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v13;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v14;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v5;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v6;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v8;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v9;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v10;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v12;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v13;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v14;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[1U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[1U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[1U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[1U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[2U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[2U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[2U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[2U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v11;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[3U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[3U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[3U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v14;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[3U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[4U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v16;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[4U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v17;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[4U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v18;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[4U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v19;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[5U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v20;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[5U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v21;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[5U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v22;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[5U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v23;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[6U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v24;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[6U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v25;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[6U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v26;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[6U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v27;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[7U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v28;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[7U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v29;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[7U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v30;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[7U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v31;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[8U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v32;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[8U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v33;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[8U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v34;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[8U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v35;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[9U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v36;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[9U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v37;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[9U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v38;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[9U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v39;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xaU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v40;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xaU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v41;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xaU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v42;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xaU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v43;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xbU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v44;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xbU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v45;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xbU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v46;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xbU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v47;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xcU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v48;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xcU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v49;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xcU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v50;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xcU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v51;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xdU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v52;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xdU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v53;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xdU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v54;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xdU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v55;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xeU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v56;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xeU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v57;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xeU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v58;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xeU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v59;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xfU][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v60;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xfU][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v61;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xfU][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v62;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route[0xfU][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_route__v63;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[__Vdlyvdim0__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[0U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v7;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v11;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v14;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[1U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v16;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v17;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v18;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v19;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v20;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v21;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v22;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[2U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v23;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v24;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v25;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v26;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v27;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v28;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v29;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v30;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product[3U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product__v31;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v7;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x11U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x13U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x15U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x17U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v11;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x19U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1bU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1dU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v14;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1fU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v15;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v16;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v17;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v18;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v19;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v20;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v21;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v22;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v23;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x12U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v24;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v25;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x16U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v26;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v27;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1aU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v28;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v29;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1eU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v30;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xfU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v31;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v32;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v33;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v34;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v35;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v36;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v37;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x14U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v38;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v39;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v40;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x1cU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v41;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v42;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v43;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v44;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v45;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v46;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v47;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x18U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v48;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v49;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v50;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v51;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v52;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0x10U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v53;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v54;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v55;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient__v56;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group__v4;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v2;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x__v3;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v0;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v1;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v2;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v3;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v4;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v5;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v6;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v7;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v8;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v9;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v10;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v11;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v12;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v13;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[0U][0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v14;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v15;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v16;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v17;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v18;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v19;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v20;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v21;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v22;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v23;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v24;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v25;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v26;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v27;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v28;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[1U][0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v29;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v30;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v31;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v32;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v33;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v34;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v35;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v36;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v37;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v38;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v39;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v40;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v41;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v42;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v43;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[2U][0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v44;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v45;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v46;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][2U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v47;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][3U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v48;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][4U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v49;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][5U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v50;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][6U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v51;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][7U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v52;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][8U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v53;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][9U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v54;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0xaU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v55;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0xbU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v56;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0xcU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v57;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0xdU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v58;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product[3U][0xeU] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product__v59;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x__v1;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[0U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v0;
    }
    if (__Vdlyvset__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[1U] 
            = __Vdlyvval__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x__v1;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output[3U] 
        = (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y
           [3U] >> 0xcU);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[3U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[4U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[5U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output[6U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0U] 
        = (IData)((((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                     [0U]))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[1U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[2U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[3U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[4U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[5U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [6U] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[6U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [7U] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[7U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [9U] << 0x1cU) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
           [8U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[8U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xaU] << 0x18U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [9U] >> 4U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[9U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xbU] << 0x14U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [0xaU] >> 8U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xaU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xcU] << 0x10U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                                [0xbU] >> 0xcU));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xbU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xdU] << 0xcU) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                               [0xcU] >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xcU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xeU] << 8U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [0xdU] >> 0x14U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output[0xdU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
            [0xfU] << 4U) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc
                             [0xeU] >> 0x18U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0U] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [1U] << 0x10U) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[1U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [2U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [1U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [3U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[2U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [4U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [3U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [5U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[3U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [6U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [5U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [7U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[4U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [8U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                      [7U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [9U] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[5U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xaU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [9U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                           [0xbU] << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[6U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xcU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xbU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0xdU] 
                                             << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[7U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0xeU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xdU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0xfU] 
                                             << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[8U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x10U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0xfU] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                              [0x11U] 
                                              << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[9U] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x12U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x11U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x13U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xaU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x14U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x13U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x15U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xbU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x16U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x15U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x17U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xcU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x18U]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x17U] >> 0x10U)) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                               [0x19U] 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xdU] 
        = (((0xffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [0x1aU]) | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [0x19U] >> 0x10U)) | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                           [0x1eU] 
                                                                           << 0x10U) 
                                                                          | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                          [0x1dU]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                            [0x1cU] 
                                                                            << 0x10U) 
                                                                           | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                           [0x1bU]))))) 
                                               << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                        [0x1eU] << 0x10U) 
                                       | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                       [0x1dU]))) << 0x20U) 
                     | (QData)((IData)(((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                         [0x1cU] << 0x10U) 
                                        | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                        [0x1bU]))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [0x1eU] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [0x1dU]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [0x1cU] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [0x1bU])))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input[0xfU] 
        = ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [0x1fU] << 0x10U) | ((IData)(((((QData)((IData)(
                                                            ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [0x1eU] 
                                                              << 0x10U) 
                                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                             [0x1dU]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [0x1cU] 
                                                               << 0x10U) 
                                                              | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [0x1bU])))) 
                                          >> 0x20U)) 
                                 >> 0x10U));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
        [1U]) {
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
            [1U]) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [1U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & 0U);
        }
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [1U][6U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [2U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [1U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[4U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[5U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route[7U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                             [3U][3U]));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [0U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [0U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [1U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [1U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [2U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [2U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                         [3U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x
                                              [3U], 1U)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] = 0U;
    if ((2U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0xdU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][5U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][2U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xaU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xcU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xbU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xdU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][3U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][8U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][3U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xbU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xdU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][4U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xcU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][0xcU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][1U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][7U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][2U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][9U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xeU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [2U][0xbU]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][3U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
                = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [1U][9U]));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
                = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                                 [3U][0xbU]));
        }
    } else if ((1U & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xbU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [0U][8U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][6U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][0xdU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xcU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][8U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xbU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [1U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xbU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][3U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][6U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xcU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][0xdU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][5U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xaU][3U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [3U][6U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][4U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][9U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xbU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xeU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xcU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][0xcU]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xdU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][0U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][4U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][2U] 
            = (0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xeU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][0U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][1U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [1U][1U]));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][2U] 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_route[0xfU][3U] 
            = (0xfffffffU & (- vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_product
                             [3U][3U]));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output 
        = (((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle = __Vdly__TQ_DCT2_CORE_TB__DOT__r_cycle;
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready) 
         & (5U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference 
            = (0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum 
            = (0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output 
        = (((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1)) 
            << 0x1cU) | (QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0)));
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_even_data 
            = (((QData)((IData)((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                << 0x14U) | (QData)((IData)((0xfffffU 
                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_odd_data 
            = (((QData)((IData)((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                << 0x14U) | (QData)((IData)((0xfffffU 
                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))));
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[0U] 
            = (IData)((((QData)((IData)((0x7ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x26U) | (((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x13U) | (QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x19U) | (IData)(((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x26U) | 
                                      (((QData)((IData)(
                                                        (0x7ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x13U) | (QData)((IData)(
                                                                    (0x7ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data[2U] 
            = (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                         >> 7U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[0U] 
            = (IData)((((QData)((IData)((0x7ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x26U) | (((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x13U) | (QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x19U) | (IData)(((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x26U) | 
                                      (((QData)((IData)(
                                                        (0x7ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x13U) | (QData)((IData)(
                                                                    (0x7ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data[2U] 
            = (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                         >> 7U));
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[0U] 
            = (IData)((((QData)((IData)((0x3ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x24U) | (((QData)((IData)(
                                                      (0x3ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x12U) | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x16U) | (IData)(((((QData)((IData)(
                                                       (0x3ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        (0x3ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x12U) | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[2U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                << 0x1aU) | ((0x3ffff00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 8U)) 
                             | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                         >> 0xaU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[3U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                << 0x1eU) | ((0x3ffff000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                             << 0xcU)) 
                             | (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                          >> 6U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data[4U] 
            = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                          >> 2U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[0U] 
            = (IData)((((QData)((IData)((0x3ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x24U) | (((QData)((IData)(
                                                      (0x3ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x12U) | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x16U) | (IData)(((((QData)((IData)(
                                                       (0x3ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        (0x3ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x12U) | (QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[2U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                << 0x1aU) | ((0x3ffff00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 8U)) 
                             | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                         >> 0xaU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[3U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                << 0x1eU) | ((0x3ffff000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                             << 0xcU)) 
                             | (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                          >> 6U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data[4U] 
            = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                          >> 2U));
    }
    if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY) 
         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[0U] 
            = (IData)((((QData)((IData)((0x1ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x22U) | (((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x11U) | (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x13U) | (IData)(((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x11U) | (QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[2U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                << 0x15U) | ((0x1ffff0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                           << 4U)) 
                             | (0xfU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                         + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                        >> 0xdU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[3U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                << 0x17U) | ((0x7fffc0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                           << 6U)) 
                             | (0x3fU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                         >> 0xbU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[4U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                << 0x19U) | ((0x1ffff00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                            << 8U)) 
                             | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                         >> 9U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[5U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                << 0x1bU) | ((0x7fffc00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                            << 0xaU)) 
                             | (0x3ffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                          >> 7U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[6U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                << 0x1dU) | ((0x1ffff000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                             << 0xcU)) 
                             | (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                          >> 5U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[7U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                << 0x1fU) | ((0x7fffc000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                             << 0xeU)) 
                             | (0x3fffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                           >> 3U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data[8U] 
            = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                          >> 1U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[0U] 
            = (IData)((((QData)((IData)((0x1ffffU & 
                                         (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                        << 0x22U) | (((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                      << 0x11U) | (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[1U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                << 0x13U) | (IData)(((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                        << 0x11U) | (QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                     >> 0x20U)));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[2U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                << 0x15U) | ((0x1ffff0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                           << 4U)) 
                             | (0xfU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                         - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                        >> 0xdU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[3U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                << 0x17U) | ((0x7fffc0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                           << 6U)) 
                             | (0x3fU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                         >> 0xbU))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[4U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                << 0x19U) | ((0x1ffff00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                            << 8U)) 
                             | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                         >> 9U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[5U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                << 0x1bU) | ((0x7fffc00U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                            << 0xaU)) 
                             | (0x3ffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                          >> 7U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[6U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                << 0x1dU) | ((0x1ffff000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                             << 0xcU)) 
                             | (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                          >> 5U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[7U] 
            = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                << 0x1fU) | ((0x7fffc000U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                             << 0xeU)) 
                             | (0x3fffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                           >> 3U))));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data[8U] 
            = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                          >> 1U));
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
        = ((0x100000U & ((IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x13U)) << 0x14U)) 
           | (0xfffffU & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1 
        = ((0x100000U & ((IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x27U)) << 0x14U)) 
           | (0xfffffU & (IData)((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4 
                                  >> 0x14U))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x10U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x10U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x11U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x11U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x12U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x12U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x13U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x13U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x14U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x14U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x15U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x15U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x16U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x16U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x17U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x17U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x18U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x18U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x19U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x19U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1aU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1aU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1bU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1bU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1cU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1cU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1dU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1dU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1eU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1eU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0x1fU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0x1fU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xfU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xfU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xeU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xeU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xdU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xdU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xcU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xcU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xbU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xbU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0xaU] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0xaU]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [9U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [9U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [8U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [8U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [7U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [7U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [6U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [6U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [5U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [5U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [4U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [4U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [3U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [3U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [2U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [2U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [1U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [1U]);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x10000U & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                        [0U] << 1U)) | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [0U]);
}
