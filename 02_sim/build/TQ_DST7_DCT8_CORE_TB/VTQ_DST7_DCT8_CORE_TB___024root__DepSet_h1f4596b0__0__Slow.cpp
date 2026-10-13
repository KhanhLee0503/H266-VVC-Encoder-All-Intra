// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#include "VTQ_DST7_DCT8_CORE_TB__pch.h"
#include "VTQ_DST7_DCT8_CORE_TB___024root.h"

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_static(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK = 0U;
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_final(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___eval_settle(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_DST7_DCT8_CORE_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__stl(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TQ_DST7_DCT8_CORE_TB.u_dut.u_dst7_mcm_8.w_product)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state)))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx = 4U;
            }
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx = 4U;
            }
        }
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][3U] = 0U;
    if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0U];
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
                [3U][4U];
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][8U];
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[4U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[5U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[6U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[8U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [2U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product
            [3U][0xcU];
    }
    if (((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
         & (4U > (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx = 4U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[0U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[1U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x10U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[2U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[3U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x30U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[0U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA)));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[2U] 
        = ((0x10000U & ((IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
           [0U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
           [1U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
           [2U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input
           [3U]);
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] = 0U;
    if ((4U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
        if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
            if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
            } else {
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][0U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][1U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][2U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][3U] = 1U;
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x11U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][9U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xcU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x19U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][8U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1cU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][6U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][4U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x17U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xbU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][5U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x15U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1bU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xfU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1dU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x18U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0xeU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][2U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0xaU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0xdU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][7U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][1U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][3U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x1eU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x1aU];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x16U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [0U][0x10U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [1U][0x12U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [2U][0x14U];
                vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                    = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                    [3U][0x16U];
            }
        } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[1U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][6U];
        }
    } else if ((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
        if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][6U];
        } else {
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[2U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[3U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][0U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][3U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][1U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][2U] = 1U;
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][7U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xaU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x15U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1aU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x14U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][2U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][5U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xfU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][6U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xdU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x1bU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][8U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x11U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x12U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0xbU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0x17U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [0U][0x1cU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [2U][0x1eU];
            vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
                = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
                [3U][0U];
        }
    } else if ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[4U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[5U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[6U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[7U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[8U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][0U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x11U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x15U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1aU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1cU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x14U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x16U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xfU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x15U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x17U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x12U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1bU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1aU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x12U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xfU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x10U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x10U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1bU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x14U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x11U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1cU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x17U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x16U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
    } else {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[9U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xaU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xbU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xcU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xdU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xeU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[1U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[2U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[3U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[4U][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[5U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[6U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[7U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[8U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[9U][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][1U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xaU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xbU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xcU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xdU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xeU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg[0xfU][3U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x14U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1bU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x11U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x16U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x14U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xfU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x17U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1aU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1cU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x12U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x16U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0xfU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x10U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x11U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1cU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x1bU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[1U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x15U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[2U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1cU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x15U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[3U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1bU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0x12U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[4U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x1aU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xfU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[5U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][5U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x19U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[6U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xcU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[7U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x17U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][6U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[8U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1aU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x16U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0xeU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[9U][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x1eU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x15U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xaU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x17U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x14U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][1U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xbU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0x10U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][4U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xcU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][9U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x12U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][7U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x1dU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xdU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][2U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x11U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x18U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xeU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][3U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][0U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [0U][0x10U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][1U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [1U][0xdU];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][2U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [2U][0x13U];
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag[0xfU][3U] 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product
            [3U][0xaU];
    }
}
