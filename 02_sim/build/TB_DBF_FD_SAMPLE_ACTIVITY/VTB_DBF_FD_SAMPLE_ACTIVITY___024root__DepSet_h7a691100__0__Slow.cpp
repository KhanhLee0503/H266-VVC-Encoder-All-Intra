// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_static(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_final(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_settle(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_settle\n"); );
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
            VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_FD_SAMPLE_ACTIVITY.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___act_comb__TOP__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_triggers__stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

VL_ATTR_COLD bool VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__stl(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_DBF_FD_SAMPLE_ACTIVITY___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__act(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk or negedge TB_DBF_FD_SAMPLE_ACTIVITY.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__nba(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk or negedge TB_DBF_FD_SAMPLE_ACTIVITY.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TB_DBF_FD_SAMPLE_ACTIVITY.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___ctor_var_reset(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0 = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1 = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1 = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0 = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1 = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1 = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3 = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3 = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff = VL_RAND_RESET_Q(48);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3 = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__comp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__stall = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__comp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__stall = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__comp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__stall = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__comp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__stall = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
