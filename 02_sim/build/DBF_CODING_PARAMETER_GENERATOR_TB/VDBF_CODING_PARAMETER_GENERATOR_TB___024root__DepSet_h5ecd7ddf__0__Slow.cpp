// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_CODING_PARAMETER_GENERATOR_TB.h for the primary calling header

#include "VDBF_CODING_PARAMETER_GENERATOR_TB__pch.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB___024root.h"

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static__TOP(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static\n"); );
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static__TOP(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_accepts = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_accepts = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_accepts = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_accepts = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_accepts = 0U;
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk = 0U;
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_final(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_settle(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_settle\n"); );
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
            VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_CODING_PARAMETER_GENERATOR_TB.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 64> VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2e74a42_0;
extern const VlUnpacked<CData/*2:0*/, 2048> VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2c779c8_0;

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___stl_sequent__TOP__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 = 0;
    CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0 = 0;
    CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgExtracted_h3d16d9eb__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgExtracted_h3d16d9eb__0 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_clear 
        = (0x3ffU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base 
        = ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
            ? ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major) 
               << 1U) : ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major) 
                         << 2U));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid = 0U;
    if ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
        if ((1U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
            if ((2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid = 1U;
            }
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
           | ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)) 
              | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
                 | (0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous) 
           & ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
              | (0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x) 
            == (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end) 
                         - (IData)(1U)))) & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y) 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end) 
                                                    - (IData)(1U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id 
        = ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
            ? ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                ? 0U : ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                         ? 2U : 1U)) : ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                         ? ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                             ? 0U : 2U)
                                         : ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                             ? 1U : 0U)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major 
        = ((0x3fU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major))) 
           >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0 
        = ((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
           | (1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready 
        = ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen) 
               | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done))) 
           & (2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p 
            = (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                     >> 0x15U));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q 
            = (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                     >> 0x15U));
    } else {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p 
            = (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                     >> 0x12U));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q 
            = (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                     >> 0x12U));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                              >> 8U)) + ((IData)(1U) 
                                         << (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                                   >> 0x12U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                              >> 8U)) + ((IData)(1U) 
                                         << (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                   >> 0x12U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                              >> 0xdU)) + ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                                >> 0x15U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                              >> 0xdU)) + ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                >> 0x15U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready = 0U;
    if ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready = 1U;
    }
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done) 
           & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
              & ((4U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                 & (5U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                              >> 8U)) + ((IData)(1U) 
                                         << (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                   >> 0x12U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end 
        = (0x3fU & ((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                              >> 0xdU)) + ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                >> 0x15U)))));
    if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit 
            = (0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width), 1U) 
                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))
                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end;
    } else {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit 
            = (0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height), 1U) 
                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))
                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error 
        = ((~ (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
                >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank)) 
               & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id
                  [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank] 
                  == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)))) 
           & (4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask = 0U;
    if ((1U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        if ((2U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
            if ((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid = 1U;
            }
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)) 
           | ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)) 
              | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)) 
                 | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)) 
                    | (3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready));
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgExtracted_h3d16d9eb__0 
        = ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p)) 
           & (0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_ctu_id) 
            != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)) 
           | ((5U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode)) 
              | ((5U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode)) 
                 | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x) 
                     >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit)) 
                    | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y) 
                        >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit)) 
                       | ((0x20U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend)) 
                          | (0x20U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend))))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid = 0U;
    if ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid 
            = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x) 
                        >> 1U));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid 
            = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y) 
                        >> 1U));
    } else {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid 
            = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x) 
                        >> 2U));
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid 
            = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y) 
                        >> 2U));
    }
    if (((((((((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                             >> 0x12U))) & ((5U >= 
                                             (7U & 
                                              (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                               >> 0x12U))) 
                                            & ((5U 
                                                >= 
                                                (7U 
                                                 & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                                    >> 0x15U))) 
                                               & (5U 
                                                  >= 
                                                  (7U 
                                                   & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                      >> 0x15U)))))) 
              & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))
                  ? ((~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x)) 
                     & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y)))
                  : ((0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x))) 
                     & (0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y)))))) 
             & ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id)) 
                | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction)
                    ? (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y)))
                    : (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x)))))) 
            & (0x20U >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p))) 
           & (0x20U >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q))) 
          & (0x20U >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p))) 
         & (0x20U >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q)))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid 
            = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction)
                ? ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid)) 
                   & ((0x20U > (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid)) 
                      & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                          == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p)) 
                         & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                             == (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                          >> 0xdU))) 
                            & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                                >= (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                             >> 8U))) 
                               & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                                   < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p)) 
                                  & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                                      >= (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                   >> 8U))) 
                                     & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                                        < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q)))))))))
                : ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid)) 
                   & ((0x20U > (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid)) 
                      & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                          == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p)) 
                         & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid) 
                             == (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                          >> 8U))) 
                            & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                                >= (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                             >> 0xdU))) 
                               & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                                   < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p)) 
                                  & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                                      >= (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                   >> 0xdU))) 
                                     & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid) 
                                        < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q))))))))));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr = 0U;
    if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en = 1U;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr 
                    = ((0x3e0U & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y) 
                                  << 5U)) | (0x1fU 
                                             & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x)));
            }
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready = 1U;
            }
        }
    }
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid = 1U;
            }
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id) 
              == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id) 
              != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code = 0U;
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid = 1U;
            }
        }
    }
    if ((5U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code;
    } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 2U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code;
    } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 3U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code = 1U;
    } else if ((4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 3U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code = 7U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error 
        = ((5U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
           | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid) 
              | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp = 1U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq = 1U;
    if ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp 
            = ((2U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p))
                ? 3U : 1U);
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq 
            = ((2U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q))
                ? 3U : 1U);
    } else if (DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgExtracted_h3d16d9eb__0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp 
            = ((3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p))
                ? 7U : 3U);
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq 
            = ((3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q))
                ? 7U : 3U);
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_dbf_enable) 
           & ((3U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id)) 
              & (((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))
                   ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0)
                   : ((0xfU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                      | ((7U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                         | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0)))) 
                 & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr = 0U;
    if (((1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
         & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done)))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr;
    } else if (((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done)))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en = 1U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr 
            = ((0x3e0U & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y) 
                          << 5U)) | (0x1fU & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x)));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data = 0U;
    if ((1U & (~ ((1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                  & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done)))))) {
        if (((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
             & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done)))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid = 1U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data 
                = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp) 
                    << 0x18U) | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code) 
                                  << 0x15U) | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code) 
                                                << 0x12U) 
                                               | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id))))));
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end) 
            < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit))
            ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end)
            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
            >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank)) 
           & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished) 
               >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank)) 
              & ((~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)) 
                 & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id
                    [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank] 
                    == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state)) 
           & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
               >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank)) 
              & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready) 
                  >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank)) 
                 & ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished) 
                        >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank))) 
                    & ((~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)) 
                       & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id
                          [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank] 
                          == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id)))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0 
        = (1U & ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
                     >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank))) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid = 0U;
    if ((1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid 
            = (1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready = 0U;
    if ((1U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        if ((2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready 
                = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid) 
                    & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready)) 
                   & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)));
        }
    }
    __Vtableidx2 = ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready) 
                      & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid)) 
                     << 5U) | ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible)
                                  ? 2U : 0U) << 3U) 
                               | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire) 
                                   << 2U) | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state 
        = VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2e74a42_0
        [__Vtableidx2];
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor) 
           >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid 
        = ((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                         >> 0x12U))) & ((5U >= (7U 
                                                & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                   >> 0x15U))) 
                                        & ((0x20U >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end)) 
                                           & ((0x20U 
                                               >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end)) 
                                              & ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                       >> 0xdU))
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                       >> 8U))) 
                                                  == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor)) 
                                                 & (((0x1fU 
                                                      & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                         >> 8U)) 
                                                     <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x)) 
                                                    & (((0x1fU 
                                                         & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                            >> 0xdU)) 
                                                        <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y)) 
                                                       & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x) 
                                                           < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end)) 
                                                          & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y) 
                                                              < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end)) 
                                                             & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor) 
                                                                > (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor)))))))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0)) 
           & (0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid));
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor) 
            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major))
            ? 5U : 1U);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state;
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next 
            = ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))
                ? 5U : ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))
                         ? 5U : 0U));
    } else if ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
        if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = 5U;
            } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next 
                    = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen) 
                        | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire))
                        ? 4U : 2U);
            }
        } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = 5U;
        } else if (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen) 
                    | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = 4U;
        } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf)
                    ? 5U : 3U);
        }
    } else if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = 5U;
        } else if ((0x3ffU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = 2U;
        }
    } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next 
            = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start)
                ? 5U : 1U);
    }
    __Vtableidx1 = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire) 
                     << 0xaU) | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire) 
                                  << 9U) | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index) 
                                             << 6U) 
                                            | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire) 
                                                << 5U) 
                                               | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state)))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state 
        = VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2c779c8_0
        [__Vtableidx1];
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask 
                    = ((((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                         & ((0x1ffU & ((IData)(3U) 
                                       + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                            < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                        << 3U) | ((((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                    & ((0x1ffU & ((IData)(2U) 
                                                  + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                       < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                                   << 2U) | ((((0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                               < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)) 
                                              << 1U) 
                                             | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base) 
                                                < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)))));
                if ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))) {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x 
                        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x) 
                           << 1U);
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y 
                        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y) 
                           << 1U);
                } else {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x 
                        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x) 
                           << 2U);
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y 
                        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y) 
                           << 2U);
                }
            }
        }
        if ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
                = ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))
                    ? 0U : 6U);
        } else if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state = 0U;
            }
        } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
                = DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0;
        }
    } else if ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid)
                    ? ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate)
                        ? 4U : (IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0))
                    : 6U);
        } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid)
                    ? 3U : 6U);
        }
    } else if ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state = 2U;
    } else if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
            = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start)
                ? 6U : 1U);
    }
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_triggers__stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

VL_ATTR_COLD bool VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__stl(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__act(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk or negedge DBF_CODING_PARAMETER_GENERATOR_TB.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__nba(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk or negedge DBF_CODING_PARAMETER_GENERATOR_TB.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___ctor_var_reset(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cb = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cr = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_dbf_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_cu_id = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x = VL_RAND_RESET_I(5);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y = VL_RAND_RESET_I(5);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__observed = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_dir[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_comp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_x[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_y[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_id[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_accepts = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_accepts = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_accepts = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_accepts = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_accepts = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready0_wait__DOT__wait_count = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_wait__DOT__wait_count = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready1_wait__DOT__wait_count = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready2_wait__DOT__wait_count = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr = VL_RAND_RESET_I(10);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr = VL_RAND_RESET_I(10);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_data = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask = VL_RAND_RESET_I(4);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0 = 0;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr = VL_RAND_RESET_I(10);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit = VL_RAND_RESET_I(5);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit = VL_RAND_RESET_I(5);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_clear = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_data_bank0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_data_bank1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask = VL_RAND_RESET_I(4);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q = VL_RAND_RESET_I(32);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_dbf_enable = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cb = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cr = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_edge_id = VL_RAND_RESET_I(12);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_bank = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_component_id = VL_RAND_RESET_I(2);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_direction = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_x = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_y = VL_RAND_RESET_I(8);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_lane_mask = VL_RAND_RESET_I(4);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_p = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_q = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid = VL_RAND_RESET_I(6);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq = VL_RAND_RESET_I(3);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0 = 0;
    vlSelf->__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0 = 0;
    vlSelf->__Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0 = 0;
    vlSelf->__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0 = 0;
    vlSelf->__Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
