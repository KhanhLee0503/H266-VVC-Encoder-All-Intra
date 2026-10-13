// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_REF_AVAILABILITY_TB.h for the primary calling header

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_static(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk = 0U;
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_final(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_settle(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_settle\n"); );
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
            VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

VL_ATTR_COLD bool VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VINTRA_REF_AVAILABILITY_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge INTRA_REF_AVAILABILITY_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__nba(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge INTRA_REF_AVAILABILITY_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___ctor_var_reset(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X = VL_RAND_RESET_I(7);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y = VL_RAND_RESET_I(7);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN = VL_RAND_RESET_I(13);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN = VL_RAND_RESET_I(13);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH = VL_RAND_RESET_I(13);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT = VL_RAND_RESET_I(13);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_CHECK_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX = VL_RAND_RESET_I(4);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_CHECK_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX = VL_RAND_RESET_I(4);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_CHECK_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_LEFT_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION = VL_RAND_RESET_I(3);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION = VL_RAND_RESET_I(3);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = VL_RAND_RESET_I(3);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count = VL_RAND_RESET_I(32);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size = VL_RAND_RESET_I(8);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x = VL_RAND_RESET_I(8);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y = VL_RAND_RESET_I(8);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y = VL_RAND_RESET_I(8);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x = VL_RAND_RESET_I(14);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y = VL_RAND_RESET_I(14);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x = VL_RAND_RESET_I(14);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y = VL_RAND_RESET_I(14);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_picture_valid = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_picture_valid = VL_RAND_RESET_I(1);
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tl_picture_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__INTRA_REF_AVAILABILITY_TB__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
