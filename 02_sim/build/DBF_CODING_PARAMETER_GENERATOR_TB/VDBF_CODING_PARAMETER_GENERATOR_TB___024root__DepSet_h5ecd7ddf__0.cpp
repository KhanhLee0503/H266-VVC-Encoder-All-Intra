// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_CODING_PARAMETER_GENERATOR_TB.h for the primary calling header

#include "VDBF_CODING_PARAMETER_GENERATOR_TB__pch.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB___024root.h"

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
VlCoroutine VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
VlCoroutine VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__1(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
VlCoroutine VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__2(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial\n"); );
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk__0 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n__0 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__2(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/DBF_CODING_PARAMETER_GENERATOR_TB.sv", 
                                           160);
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk 
            = (1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2e74a42_0;
extern const VlUnpacked<CData/*2:0*/, 2048> VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2c779c8_0;

VL_INLINE_OPT void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___act_sequent__TOP__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready) 
                      & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid)) 
                     << 5U) | ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible)
                                  ? 2U : 0U) << 3U) 
                               | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire) 
                                   << 2U) | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state 
        = VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2e74a42_0
        [__Vtableidx2];
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
            >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank)) 
           & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished) 
               >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank)) 
              & ((~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)) 
                 & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id
                    [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank] 
                    == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
           | ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)) 
              | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
                 | (0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready 
        = ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen) 
               | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done))) 
           & (2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0 
        = (1U & ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
                     >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank))) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error))));
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done) 
           & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
              & ((4U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                 & (5U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready));
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0)) 
           & (0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id) 
              == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id) 
              != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)));
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready));
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
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_act(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__1(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 = 0;
    CData/*7:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 = 0;
    CData/*7:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 = 0;
    SData/*8:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 = 0;
    CData/*5:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 = 0;
    CData/*5:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0;
    __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 = 0;
    CData/*0:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0;
    __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v1;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v1 = 0;
    SData/*9:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr = 0;
    CData/*5:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x = 0;
    CData/*5:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y = 0;
    CData/*5:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major = 0;
    SData/*11:0*/ __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id = 0;
    // Body
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v1 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v1 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v1 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v1 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v1 = 0U;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 = 0U;
    __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v1 = 0U;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y;
    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x;
    if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n) {
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire) {
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_dbf_enable;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cb;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cr;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id;
            __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 = 1U;
            __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished 
                = ((~ ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank))) 
                   & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished));
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank))));
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready 
                = ((~ ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank))) 
                   & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready));
        }
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire) {
            __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id = 0U;
            __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major = 0U;
            if ((3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells;
            } else {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells;
            }
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = 0U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor = 0U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start)
                    ? 1U : 0U);
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id;
        } else {
            if ((((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)) 
                  & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid)) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = 1U;
                if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor) {
                    if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major)))) {
                        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major)));
                    }
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = 0U;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor = 0U;
                } else {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor;
                }
            }
            if (((4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)) 
                 & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire))) {
                __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id)));
                if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor) {
                    if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major)))) {
                        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major)));
                    }
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = 0U;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor = 0U;
                } else {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor;
                }
            }
            if ((((2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)) 
                  & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid)) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code = 2U;
            }
            if (((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code = 3U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire)))) {
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire) {
                if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf)))) {
                    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x;
                    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y;
                }
            }
            if ((((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                  & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done))) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell)))) {
                if (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x) 
                     == (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end) 
                                  - (IData)(1U))))) {
                    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y)));
                    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit;
                } else {
                    __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x)));
                }
            }
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire) {
                if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf)))) {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_cu_id;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end 
                        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend) 
                            < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit))
                            ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend)
                            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit));
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit 
                        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x;
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end 
                        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend) 
                            < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit))
                            ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend)
                            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit));
                }
            }
        }
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state;
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank))));
        }
        if ((4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank))));
        }
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire) {
            __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr = 0U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen = 0U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start)
                    ? 1U : 0U);
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
        } else {
            if ((((1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                  & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done))) 
                 & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_clear)))) {
                __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr)));
            }
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen = 1U;
            }
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code = 3U;
            }
            if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire) {
                if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf) {
                    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code = 2U;
                }
            }
        }
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished 
                = ((~ ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank))) 
                   & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished));
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy 
                = ((~ ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank))) 
                   & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy));
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready 
                = ((~ ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank))) 
                   & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready));
        }
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state;
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid 
                = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank)
                    ? vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1
                   [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr]
                    : vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0
                   [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr]);
        }
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction 
                = (3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index));
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank;
        }
        if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire) {
            __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index = 0U;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en
                [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank];
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb
                [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank];
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr
                [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank];
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width
                [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank];
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height
                [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank];
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id;
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank 
                = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank;
        } else if (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire) 
                    & (5U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index)))) {
            __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index 
                = (7U & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index)));
        }
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next;
    } else {
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v1 = 1U;
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v1 = 1U;
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v1 = 1U;
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v1 = 1U;
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v1 = 1U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index = 0U;
        __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v1 = 1U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id = 0U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major = 0U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr = 0U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x = 0U;
        __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank = 0U;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[1U] = 0U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y;
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[1U] = 0U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index 
        = __Vdly__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index;
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[1U] = 0U;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[1U] = 0U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_clear 
        = (0x3ffU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major 
        = ((0x3fU & ((IData)(1U) + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major))) 
           >= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n) 
           && (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid = 0U;
    if ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
        if ((1U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
            if ((2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid = 1U;
            }
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready = 0U;
    if ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready = 1U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id 
        = ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
            ? ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                ? 0U : ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                         ? 2U : 1U)) : ((2U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                         ? ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                             ? 0U : 2U)
                                         : ((1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))
                                             ? 1U : 0U)));
    if (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit 
            = (0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width), 1U) 
                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))
                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)));
    } else {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y 
            = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit 
            = (0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height), 1U) 
                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))
                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base 
        = ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
            ? ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major) 
               << 1U) : ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major) 
                         << 2U));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous) 
           & ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
              | (0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width)))));
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[1U] = 0U;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0] 
            = __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v0;
    }
    if (__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height__v1) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[0U] = 0U;
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[1U] = 0U;
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x) 
            == (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end) 
                         - (IData)(1U)))) & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y) 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end) 
                                                    - (IData)(1U)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells 
        = (0x3fU & (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height) 
                     >> 2U) + (0U != (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)) 
           | ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)) 
              | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width)) 
                 | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height)) 
                    | (3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id))))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid = 0U;
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask = 0U;
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid = 1U;
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
            }
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error 
        = ((~ (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy) 
                >> (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank)) 
               & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id
                  [vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank] 
                  == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)))) 
           & (4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code = 0U;
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid = 0U;
    if ((1U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid 
            = (1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)));
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready = 0U;
    if ((1U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
        if ((2U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
            if ((3U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid = 1U;
            }
        }
        if ((2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready 
                = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid) 
                    & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready)) 
                   & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error)));
        }
    }
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid));
}

VL_INLINE_OPT void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__2(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start 
        = ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
           | ((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)) 
              | ((0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width)) 
                 | (0x80U < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height)))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend 
        = (0x3fU & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x) 
                    + ((IData)(1U) << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode))));
    if (vlSelf->__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1[vlSelf->__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0] 
            = vlSelf->__Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0;
    }
    if (vlSelf->__Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0) {
        vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0[vlSelf->__Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0] 
            = vlSelf->__Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0;
    }
}

VL_INLINE_OPT void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_comb__TOP__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 = 0;
    CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0;
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction)
            ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end)
            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p = 0U;
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready 
        = ((~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen) 
               | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done))) 
           & (2U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)));
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done) 
           & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
              & ((4U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)) 
                 & (5U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state)))));
    __Vtableidx2 = ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready) 
                      & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid)) 
                     << 5U) | ((((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible)
                                  ? 2U : 0U) << 3U) 
                               | (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire) 
                                   << 2U) | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state))));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state 
        = VDBF_CODING_PARAMETER_GENERATOR_TB__ConstPool__TABLE_hf2e74a42_0
        [__Vtableidx2];
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
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end) 
            < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit))
            ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end)
            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire 
        = ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid) 
           & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id) 
              == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id)));
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done 
        = ((IData)(DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT____VdfgTmp_h56b6a3b9__0) 
           & ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id) 
              != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id)));
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
    DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT____VdfgExtracted_h6dedef25__0 
        = (((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor) 
            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major))
            ? 5U : 1U);
    vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state 
        = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state)))) {
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current;
                vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p 
                    = vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous;
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

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_nba(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_resume(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h388c6f86__0.resume("@(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_commit(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h388c6f86__0.commit("@(posedge DBF_CODING_PARAMETER_GENERATOR_TB.clk)");
    }
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_triggers__act(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

bool VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__act(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_triggers__act(vlSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___timing_resume(vlSelf);
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__nba(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__nba(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__act(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_CODING_PARAMETER_GENERATOR_TB.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDBF_CODING_PARAMETER_GENERATOR_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_CODING_PARAMETER_GENERATOR_TB.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_debug_assertions(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
