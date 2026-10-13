// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_IDCT2_CORE_TB.h for the primary calling header

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "VTQ_IDCT2_CORE_TB___024root.h"

VlCoroutine VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_IDCT2_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_IDCT2_CORE_TB___024root* vlSelf);
VlCoroutine VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_IDCT2_CORE_TB___024root* vlSelf);

void VTQ_IDCT2_CORE_TB___024root___eval_initial(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h2244658c__0 = (1U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h224474db__0 = (2U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h224682b0__0 = (3U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h2247127f__0 = (4U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h2247230e__0 = (5U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h224732dd__0 = (6U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h226f4d02__0 = (7U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h2246ceb1__0 = (8U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h2246e1a4__0 = (9U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h2246f0d3__0 = (0xaU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h226f0b83__0 = (0xbU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h226d7db4__0 = (0xcU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h226dad21__0 = (0xdU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h226d9cd2__0 = (0xeU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h22a29c75__0 = (0xfU == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h22a04366__0 = (0x10U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h22a05357__0 = (0x11U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h229fe2c8__0 = (0x12U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h229ff1f3__0 = (0x13U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
    vlSelf->__Vtrigprevexpr_h229f8264__0 = (0x14U == vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed);
}

VL_INLINE_OPT VlCoroutine VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/INV_TRANS_QUANT/TQ_IDCT2_CORE_TB.sv", 
                                           63);
        vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK = (1U 
                                                & (~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake 
        = (((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
            | (1U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) 
           & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA_VALID));
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x10U & (((~ ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                >> 4U)) | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready)) 
                           << 4U)) | ((8U & (((~ ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                                  >> 3U)) 
                                              << 3U) 
                                             | (0x7ffffff8U 
                                                & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                   >> 1U)))) 
                                      | ((4U & (((~ 
                                                  ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                                   >> 2U)) 
                                                 << 2U) 
                                                | (0x7ffffffcU 
                                                   & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                      >> 1U)))) 
                                         | ((2U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                                      >> 1U)) 
                                                    << 1U) 
                                                   | (0x7ffffffeU 
                                                      & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                         >> 1U)))) 
                                            | (1U & 
                                               ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                                                | ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                   >> 1U)))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready 
        = __Vtemp_1;
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready 
        = ((2U & (((~ ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid) 
                       >> 1U)) | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready)) 
                  << 1U)) | (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid)) 
                                   | ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready) 
                                      >> 1U))));
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready 
        = ((4U & (((~ ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                       >> 2U)) | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready)) 
                  << 2U)) | ((2U & (((~ ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                         >> 1U)) << 1U) 
                                    | (0x7ffffffeU 
                                       & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                          >> 1U)))) 
                             | (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                                      | ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                         >> 1U)))));
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__1(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
           & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
               << 4U) | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                          << 3U) | ((4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                           << 2U)) 
                                    | ((2U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready)))))));
}

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__2(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        } else if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake) 
                    & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
                       == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid) 
                 & (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) {
                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 4U;
            }
        } else if ((0x1fU == (0x1fU & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent) 
                                        | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire)) 
                                       | (~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required)))))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) 
             & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat) 
                == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state 
            = ((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE))
                ? 2U : 1U);
    }
}

void VTQ_IDCT2_CORE_TB___024root___eval_act(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_act\n"); );
    // Body
    if ((0x3ffffc8ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x3ffffcfULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlUnpacked<CData/*4:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0;

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___nba_sequent__TOP__1(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0;
    CData/*4:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent = 0;
    CData/*1:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid = 0;
    CData/*2:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid = 0;
    CData/*4:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid = 0;
    CData/*1:0*/ __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0;
    // Body
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent;
    if (vlSelf->TQ_IDCT2_CORE_TB__DOT__I_RESETN) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid 
                = ((2U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid)) 
                   | (1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid)));
        }
        if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid 
                = ((1U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid) 
                            << 1U)));
        }
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((6U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                            >> 1U)));
        }
        if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((5U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((3U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1eU & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                            >> 2U)));
        }
        if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1dU & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1bU & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((8U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x17U & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (8U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((0x10U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0xfU & (IData)(__Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (0x10U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                               << 1U)));
        }
        if ((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        } else if (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue) 
                    & (3U != (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake) {
            if ((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = 1U;
                __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0U;
                __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent = 0U;
                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size 
                    = vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE;
            } else {
                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat)));
            }
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat)));
        }
        if ((2U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
            __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent 
                = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent) 
                   | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid 
                = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid) 
                   & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid 
                = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid) 
                   & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid 
                = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid) 
                   & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid 
                = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid) 
                   & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid));
        }
        if ((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        } else if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 1U;
        }
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state;
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid 
                = (1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid) 
                         >> 1U));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid 
                = (1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                         >> 2U));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid 
                = (1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                         >> 4U));
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID;
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid;
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID;
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid;
        }
        if (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID;
        }
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state;
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0U;
        __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state = 0U;
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state = 0U;
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16 
        = ((2U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(2U))) : 0U);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32 
        = ((3U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(3U))) : 0U);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8 
        = ((1U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (3U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size) 
                     - (IData)(1U))) : 0U);
    __Vtableidx2 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx2];
    __Vtableidx1 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx1];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
        = __Vdly__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid) 
           & (1U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid) 
           & (2U <= (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid) 
           & (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)));
    __Vtableidx6 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx6];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID = (4U 
                                                   == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_LAST = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID) 
                                                  & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
                                                     == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid 
        = ((- (IData)((2U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) 
           & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent)) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required)));
    __Vtableidx4 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx4];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx4];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx4];
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid;
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready 
                = (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid;
        }
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid 
            = ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid)
                : (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid));
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready = 0U;
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready 
            = ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready)
                : (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)));
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready = 0U;
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready;
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready 
            = (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state));
    }
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready 
        = ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
            ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready)
            : ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                ? (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready)
                : (3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid) 
           & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid) 
              & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
}

extern const VlWide<28>/*895:0*/ VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0;
extern const VlUnpacked<CData/*1:0*/, 256> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc34802d6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc513c410_0;

VL_INLINE_OPT void VTQ_IDCT2_CORE_TB___024root___nba_comb__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*27:0*/ TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0;
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_8;
    // Body
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[3U] = 0U;
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = ((0xf0000000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U]) 
                                                 | TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0);
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U] = ((0xfffffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[0U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x1cU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = ((0xff000000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 4U));
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U] = ((0xffffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[1U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x18U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = ((0xfff00000U 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 8U));
    TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector
        [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U] = ((0xfffffU 
                                                  & vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[2U]) 
                                                 | (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    << 0x14U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA[3U] = (0xffffU 
                                                 & (TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_h3393d105__0 
                                                    >> 0xcU));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[1U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[2U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[3U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[4U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[5U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[6U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[7U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[8U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[9U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xaU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xbU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xcU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xdU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xeU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xeU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xfU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0xfU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x10U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x10U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x11U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x11U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x12U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x12U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x13U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x13U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x14U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x14U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x15U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x15U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x16U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x16U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x17U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x17U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x18U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x18U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x19U] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x19U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1aU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x1aU];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1bU] 
        = VTQ_IDCT2_CORE_TB__ConstPool__CONST_hab12d6e6_0[0x1bU];
    if ((2U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[5U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[9U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xaU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xbU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xdU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xeU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xeU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xfU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0xfU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x10U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x10U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x11U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x11U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x12U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x12U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x13U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x13U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x14U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x14U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x15U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x15U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x16U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x16U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x17U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x17U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x18U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x18U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x19U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x19U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1aU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1aU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0x1bU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data[0x1bU];
        } else {
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[1U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[2U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[3U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[4U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[5U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[6U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[7U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[7U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[8U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[8U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[9U] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[9U];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xaU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xaU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xbU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xbU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xcU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xcU];
            vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0xdU] 
                = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data[0xdU];
        }
    } else if ((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[1U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[3U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[4U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[4U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[5U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[5U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[6U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data[6U];
    } else {
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[0U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[0U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[1U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[1U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[2U] 
            = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[2U];
        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U] 
            = ((0xffff0000U & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data[3U]) 
               | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data[3U]);
    }
    vlSelf->__VdfgTmp_hfc67b1af__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(2U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_hfc6ba779__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_hffa8be9b__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    __Vtemp_2[1U] = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                       [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]) 
                      | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0xdU) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0xbU) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(9U) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(7U) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))))) 
                                       << 0x10U));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                  << 0x10U) 
                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0xbU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(9U) 
                                                                  << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                              << 0x10U) 
                                                             | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(7U) 
                                                                 << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0xdU) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                << 0x10U) 
                                                               | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0xbU) 
                                                                   << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(9U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[0U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
            << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[1U] 
        = __Vtemp_2[1U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[2U] 
        = __Vtemp_2[2U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input[3U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16)))])))) 
                                  >> 0x20U)) >> 0x10U));
    __Vtemp_8[5U] = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                       [(0x1fU & ((IData)(0x15U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
                      | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                         [(0x1fU & ((IData)(0x13U) 
                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x1dU) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x1bU) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x19U) 
                                                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x17U) 
                                                                       << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))))) 
                                       << 0x10U));
    __Vtemp_8[6U] = (((IData)((((QData)((IData)(((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                  << 0x10U) 
                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(0x19U) 
                                                                  << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                              << 0x10U) 
                                                             | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(0x17U) 
                                                                 << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x1dU) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                << 0x10U) 
                                                               | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0x1bU) 
                                                                   << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x19U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x17U) 
                                                                    << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[0U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
            << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]);
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[1U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(7U) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[2U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(9U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(7U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xbU) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[3U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(0xdU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(0xbU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xfU) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[4U] 
        = (((0xffffU & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
             [(0x1fU & ((IData)(0x11U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]) 
            | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
               [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                             [(0x1fU & ((IData)(0x13U) 
                                        << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[5U] 
        = __Vtemp_8[5U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[6U] 
        = __Vtemp_8[6U];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input[7U] 
        = ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
            [(0x1fU & ((IData)(0x1fU) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                      << 0x10U) 
                                                     | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32)))])))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->__VdfgTmp_hc44095ae__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(7U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc4c6668f__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc4ff97d1__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hc42c8e73__0 = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8)))];
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake 
        = ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_READY) 
           & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID));
    __Vtableidx5 = (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                     << 7U) | ((0x40U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & ((3U 
                                                   == 
                                                   vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                                   [4U]) 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc34802d6_0
        [__Vtableidx5];
    __Vtableidx3 = (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                     << 6U) | ((0x20U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                         << 2U)) | 
                               (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx) 
                                 << 4U) | ((0x7ffffff8U 
                                            & (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                                                >> 1U) 
                                               & (vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                                                  [4U] 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))))));
    vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_IDCT2_CORE_TB__ConstPool__TABLE_hc513c410_0
        [__Vtableidx3];
}

void VTQ_IDCT2_CORE_TB___024root___nba_sequent__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf);

void VTQ_IDCT2_CORE_TB___024root___eval_nba(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x3ffffd8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x17ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x3ffffdfULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_IDCT2_CORE_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

void VTQ_IDCT2_CORE_TB___024root___timing_resume(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he571cab4__0.resume("@(posedge TQ_IDCT2_CORE_TB.I_CLK)");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f39a1e__0.resume("@([changed] (32'h1 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f3aaed__0.resume("@([changed] (32'h2 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f1bcc2__0.resume("@([changed] (32'h3 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f14d11__0.resume("@([changed] (32'h4 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f15b9c__0.resume("@([changed] (32'h5 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f16ceb__0.resume("@([changed] (32'h6 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h865881e0__0.resume("@([changed] (32'h7 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f108cf__0.resume("@([changed] (32'h8 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f11636__0.resume("@([changed] (32'h9 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85f126e5__0.resume("@([changed] (32'ha == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h86594415__0.resume("@([changed] (32'hb == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h865ab1c6__0.resume("@([changed] (32'hc == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h865ae17f__0.resume("@([changed] (32'hd == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h865ad2f0__0.resume("@([changed] (32'he == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8295d303__0.resume("@([changed] (32'hf == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h82a87b74__0.resume("@([changed] (32'h10 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h82a78b69__0.resume("@([changed] (32'h11 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h82a81cda__0.resume("@([changed] (32'h12 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h82a82c85__0.resume("@([changed] (32'h13 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h82a8bc76__0.resume("@([changed] (32'h14 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_IDCT2_CORE_TB___024root___timing_commit(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he571cab4__0.commit("@(posedge TQ_IDCT2_CORE_TB.I_CLK)");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f39a1e__0.commit("@([changed] (32'h1 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f3aaed__0.commit("@([changed] (32'h2 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f1bcc2__0.commit("@([changed] (32'h3 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f14d11__0.commit("@([changed] (32'h4 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f15b9c__0.commit("@([changed] (32'h5 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f16ceb__0.commit("@([changed] (32'h6 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x1000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h865881e0__0.commit("@([changed] (32'h7 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x2000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f108cf__0.commit("@([changed] (32'h8 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x4000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f11636__0.commit("@([changed] (32'h9 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x8000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85f126e5__0.commit("@([changed] (32'ha == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x10000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h86594415__0.commit("@([changed] (32'hb == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x20000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h865ab1c6__0.commit("@([changed] (32'hc == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x40000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h865ae17f__0.commit("@([changed] (32'hd == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x80000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h865ad2f0__0.commit("@([changed] (32'he == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x100000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8295d303__0.commit("@([changed] (32'hf == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x200000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h82a87b74__0.commit("@([changed] (32'h10 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x400000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h82a78b69__0.commit("@([changed] (32'h11 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x800000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h82a81cda__0.commit("@([changed] (32'h12 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x1000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h82a82c85__0.commit("@([changed] (32'h13 == TQ_IDCT2_CORE_TB.r_completed))");
    }
    if ((! (0x2000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h82a8bc76__0.commit("@([changed] (32'h14 == TQ_IDCT2_CORE_TB.r_completed))");
    }
}

void VTQ_IDCT2_CORE_TB___024root___eval_triggers__act(VTQ_IDCT2_CORE_TB___024root* vlSelf);

bool VTQ_IDCT2_CORE_TB___024root___eval_phase__act(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<26> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_IDCT2_CORE_TB___024root___eval_triggers__act(vlSelf);
    VTQ_IDCT2_CORE_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_IDCT2_CORE_TB___024root___timing_resume(vlSelf);
        VTQ_IDCT2_CORE_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_IDCT2_CORE_TB___024root___eval_phase__nba(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_IDCT2_CORE_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__nba(VTQ_IDCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__act(VTQ_IDCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_IDCT2_CORE_TB___024root___eval(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_IDCT2_CORE_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_IDCT2_CORE_TB.sv", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_IDCT2_CORE_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_IDCT2_CORE_TB.sv", 13, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_IDCT2_CORE_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_IDCT2_CORE_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_IDCT2_CORE_TB___024root___eval_debug_assertions(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
