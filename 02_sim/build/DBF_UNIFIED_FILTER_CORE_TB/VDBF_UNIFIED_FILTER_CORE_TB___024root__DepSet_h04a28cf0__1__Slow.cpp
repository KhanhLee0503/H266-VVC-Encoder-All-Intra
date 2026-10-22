// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_UNIFIED_FILTER_CORE_TB.h for the primary calling header

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__1(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_deq = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal) 
         & (0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)))) {
        if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))) {
            if ((1U & (~ (((3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                           | (3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                          & (0x7fU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long)))))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short))) {
                    if ((1U & (~ (((2U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                                   & (2U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                                  & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all))))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep 
                            = (((1U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                                & (1U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                               & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short) 
                                  >> 7U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_deq 
                            = (((1U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                                & (1U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                               & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short) 
                                  >> 8U));
                    }
                }
            }
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_short 
        = (0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short) 
                      + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_short 
        = (0xffffU & ((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short 
                               >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                         ((0U 
                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                           ? 1U
                                                           : 3U), 4U)))) 
                      + (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short 
                                 >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                           ((0U 
                                                             != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                             ? 1U
                                                             : 3U), 4U))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_short 
        = (0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_short) 
                      + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_short)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_long 
        = (0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long) 
                      + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_long 
        = (0xffffU & ((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long 
                               >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                         ((0U 
                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                           ? 1U
                                                           : 3U), 4U)))) 
                      + (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long 
                                 >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                           ((0U 
                                                             != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                             ? 1U
                                                             : 3U), 4U))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_long 
        = (0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_long) 
                      + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_long)));
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);

VL_ATTR_COLD bool VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge DBF_UNIFIED_FILTER_CORE_TB.clk or negedge DBF_UNIFIED_FILTER_CORE_TB.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__nba(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge DBF_UNIFIED_FILTER_CORE_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge DBF_UNIFIED_FILTER_CORE_TB.clk or negedge DBF_UNIFIED_FILTER_CORE_TB.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___ctor_var_reset(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x = VL_RAND_RESET_I(8);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y = VL_RAND_RESET_I(8);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask = VL_RAND_RESET_I(4);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs = VL_RAND_RESET_I(2);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2 = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2 = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(1024, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x = VL_RAND_RESET_I(8);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y = VL_RAND_RESET_I(8);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask = VL_RAND_RESET_I(4);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs = VL_RAND_RESET_I(2);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_p = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_q = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_beta_offset_div2 = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc_offset_div2 = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_condition_flags = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_decision_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready = VL_RAND_RESET_I(4);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid = VL_RAND_RESET_I(4);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_qp_avg = VL_RAND_RESET_I(7);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_beta = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_tc = VL_RAND_RESET_I(7);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg = VL_RAND_RESET_I(7);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s = VL_RAND_RESET_I(11);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s = VL_RAND_RESET_I(11);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_beta_rom = VL_RAND_RESET_I(8);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_tc_rom = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_in_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_hf14d50d3__0 = VL_RAND_RESET_I(6);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_h3ee4ed80__0 = VL_RAND_RESET_I(7);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_short = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_long = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_in_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed = VL_RAND_RESET_I(13);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base = VL_RAND_RESET_I(12);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short = VL_RAND_RESET_I(18);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short = VL_RAND_RESET_I(18);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold = VL_RAND_RESET_I(18);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long = VL_RAND_RESET_I(7);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_condition_flags = VL_RAND_RESET_I(9);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0 = 0;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0 = 0;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2 = VL_RAND_RESET_I(17);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr = VL_RAND_RESET_I(17);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0 = 0;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask = VL_RAND_RESET_Q(64);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_active = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_ok = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mode_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_active = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_ok = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mode_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_active = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_ok = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mode_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_dep = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_deq = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_tc = VL_RAND_RESET_I(10);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_active = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_ok = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q = VL_RAND_RESET_Q(49);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q = VL_RAND_RESET_I(21);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1 = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate = VL_RAND_RESET_I(24);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data);
    VL_RAND_RESET_W(256, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_mask = VL_RAND_RESET_I(16);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mode_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_legal = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h0ea2b5a5__0 = 0;
    vlSelf->__VdfgTmp_hadae4e9b__0 = 0;
    vlSelf->__VdfgTmp_h480e084d__0 = 0;
    vlSelf->__VdfgTmp_h7eeb7539__0 = 0;
    vlSelf->__VdfgTmp_h831910e8__0 = 0;
    vlSelf->__VdfgTmp_h5ebf49ef__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
