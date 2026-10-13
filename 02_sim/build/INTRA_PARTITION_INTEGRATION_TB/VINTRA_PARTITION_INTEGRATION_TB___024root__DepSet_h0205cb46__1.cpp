// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB__Syms.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"

extern const VlUnpacked<CData/*1:0*/, 64> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hf6c08d9d_0;
extern const VlUnpacked<CData/*2:0*/, 256> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hbf8dbda6_0;

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__10(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__10\n"); );
    // Init
    CData/*7:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*7:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready 
        = ((8U & (((~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                       >> 3U)) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready)) 
                  << 3U)) | ((4U & (((~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                                         >> 2U)) << 2U) 
                                    | (0x7ffffffcU 
                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready) 
                                          >> 1U)))) 
                             | ((2U & (((~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                                            >> 1U)) 
                                        << 1U) | (0x7ffffffeU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready) 
                                                     >> 1U)))) 
                                | (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid)) 
                                         | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready) 
                                            >> 1U))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_stage_load 
        = ((0xcU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                     << 1U) & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready))) 
           | ((2U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                      << 1U) & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready))) 
              | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_input_valid) 
                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready 
        = ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__r_current_state)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_dc_stream_fire 
        = ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select)) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready) 
              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_valid)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_ready 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready;
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_ready = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_ready = 0U;
    if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select))) {
        if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_ready 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready;
        }
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_core_select))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_ready 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready;
        }
    }
    __Vtableidx49 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_start_accept) 
                      << 5U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_last) 
                                 << 4U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_valid) 
                                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready)) 
                                            << 3U) 
                                           | ((0x7ffffffcU 
                                               & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                                                   >> 1U) 
                                                  & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready) 
                                                      & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
                                                      [3U]) 
                                                     << 2U))) 
                                              | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__r_current_state)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_next_state 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hf6c08d9d_0
        [__Vtableidx49];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage4_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage4_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer 
        = ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer 
        = ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage3_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage3_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage4_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_count_next 
        = (0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_push)
                    ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)
                        : ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)))
                    : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count) 
                           - (IData)(1U)) : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_outstanding_count_next 
        = (0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_output_issue_accept)
                    ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)
                        : ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)))
                    : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count) 
                           - (IData)(1U)) : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count))));
    __Vtableidx33 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_start) 
                      << 7U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__r_angle_negative) 
                                 << 6U) | (((IData)(vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension.__PVT__r_valid_stage3) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_issue_accept) 
                                                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_tu_last)) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer) 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_output_tu_last)) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__r_current_state))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_next_state 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hbf8dbda6_0
        [__Vtableidx33];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_count_next 
        = (0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_push)
                    ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)
                        : ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)))
                    : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count) 
                           - (IData)(1U)) : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_outstanding_count_next 
        = (0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_issue_accept)
                    ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)
                        : ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)))
                    : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count) 
                           - (IData)(1U)) : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count))));
    __Vtableidx44 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_start) 
                      << 7U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__r_angle_negative) 
                                 << 6U) | (((IData)(vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension.__PVT__r_valid_stage3) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_issue_accept) 
                                                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_tu_last)) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer) 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_output_tu_last)) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__r_current_state))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_next_state 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hbf8dbda6_0
        [__Vtableidx44];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage2_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage3_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage2_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_issue_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_issue_active) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_stage1_ready));
}

void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__0(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__1(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__2(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__3(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__4(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__1(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__1(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__5(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__0(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__6(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__1(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_comb__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__2(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__3(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__7(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__4(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__5(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__8(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__6(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__7(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__9(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__8(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__9(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__10(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_nba(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__1(vlSelf);
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__4(vlSelf);
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__1((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__1((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_comb__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___nba_comb__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
    }
    if ((0x2cULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x2dULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x2dULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x2cULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x2dULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
}
