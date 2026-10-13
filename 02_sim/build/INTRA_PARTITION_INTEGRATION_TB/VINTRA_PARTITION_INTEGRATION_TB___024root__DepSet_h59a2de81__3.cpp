// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"

extern const VlUnpacked<CData/*1:0*/, 16> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h5f0e86a5_0;

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__8(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__8\n"); );
    // Init
    CData/*3:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_data = 0U;
    if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_current_state))) {
        if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_current_state)))) {
            if ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_prop_phase))) {
                if ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_prop_phase))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_data 
                        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__w_tl_sub_sample;
                }
            }
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__orig_data_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_candidate_complete 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_write_fire) 
           & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
           [3U]);
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
            [3U];
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_cr_ready;
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_last;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready 
            = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__r_cand_sent) 
                | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_cand_wr_ready)) 
               & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_orig_ready) 
                  | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__r_orig_sent)));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_output_done 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_cr_valid) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_cr_ready) 
              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
              [3U]));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_is_better 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_valid)) 
                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_value 
                    < vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_cost)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_received_mask;
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_cost_fire) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id))));
    }
    __Vtableidx55 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop) 
                      << 3U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                                 << 2U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_fifo_count_next 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h5f0e86a5_0
        [__Vtableidx55];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_bank_valid;
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_candidate_complete) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_write_candidate_id))));
    }
    __Vtemp_1[0U] = (IData)((0x7800000000000000ULL 
                             | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_x_base)) 
                                 << 0x36U) | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_y)) 
                                               << 0x31U) 
                                              | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_row_last)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_last)) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                                                                             ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_winner_chroma_mode)
                                                                             : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_selected_mode)))) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_ctu_id)) 
                                                              << 0x1cU) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_cu_id) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_x) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_y) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))))))))))))))));
    __Vtemp_1[1U] = (((IData)(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                                ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data
                                : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_data)) 
                      << 0x1fU) | (IData)(((0x7800000000000000ULL 
                                            | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_x_base)) 
                                                << 0x36U) 
                                               | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_y)) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_row_last)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_last)) 
                                                         << 0x2fU) 
                                                        | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
                                                            << 0x2dU) 
                                                           | (((QData)((IData)(
                                                                               ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                                                                                 ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_winner_chroma_mode)
                                                                                 : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_selected_mode)))) 
                                                               << 0x25U) 
                                                              | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_ctu_id)) 
                                                                  << 0x1cU) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_cu_id) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_x) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_y) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))))))))))))))) 
                                           >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_pred_payload[0U] 
        = __Vtemp_1[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_pred_payload[1U] 
        = __Vtemp_1[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_pred_payload[2U] 
        = (((IData)(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                      ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data
                      : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_data)) 
            >> 1U) | ((IData)((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                                 ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data
                                 : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_data) 
                               >> 0x20U)) << 0x1fU));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_pred_payload[3U] 
        = ((IData)((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                      ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data
                      : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_data) 
                    >> 0x20U)) >> 1U);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_intra_done = 0U;
    if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                    if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_intra_done 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_output_done;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__9(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state;
    if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                = ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))
                    ? 0xdU : ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))
                               ? 0xdU : 0U));
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
                if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_fifo_write_ready) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 0xcU;
                }
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_map_update_seen) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 0xbU;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_CHROMA_SYNTAX_GENERATOR__DOT__r_valid) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                    = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_CHROMA_SYNTAX_GENERATOR__DOT__r_error) 
                         | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_CHROMA_SYNTAX_GENERATOR__DOT__r_ctu_id) 
                            != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_ctu_id))) 
                        | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_CHROMA_SYNTAX_GENERATOR__DOT__r_cu_id) 
                           != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_id)))
                        ? 0xdU : 0xaU);
            }
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_CHROMA_SYNTAX_GENERATOR__DOT__w_accept) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 9U;
        }
    } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
                if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_fire) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_match)
                            ? 8U : 0xdU);
                }
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_LUMA_SYNTAX_GENERATOR__DOT__r_valid) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                    = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_LUMA_SYNTAX_GENERATOR__DOT__r_error) 
                         | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_LUMA_SYNTAX_GENERATOR__DOT__r_ctu_id) 
                            != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_ctu_id))) 
                        | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_LUMA_SYNTAX_GENERATOR__DOT__r_cu_id) 
                           != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_id)))
                        ? 0xdU : 7U);
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_LUMA_SYNTAX_GENERATOR__DOT__w_accept) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 6U;
            }
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_fire) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_match)
                    ? 5U : 0xdU);
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MPM_LIST_GENERATOR__DOT__r_valid) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
                    = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MPM_LIST_GENERATOR__DOT__r_error) 
                         | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MPM_LIST_GENERATOR__DOT__r_ctu_id) 
                            != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_ctu_id))) 
                        | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MPM_LIST_GENERATOR__DOT__r_cu_id) 
                           != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_id)))
                        ? 0xdU : 4U);
            }
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_valid) 
                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MPM_LIST_GENERATOR__DOT__w_accept))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_cu_ready) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_leaf_fire) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_leaf_match)
                ? 1U : 0xdU);
    }
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_error) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state = 0xdU;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state;
    if ((0x10U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
        if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0U;
        } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0U;
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0U;
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__cu_ref_commit_done) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_output_done) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0x10U;
                    }
                } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cand_start_accept) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0xfU;
                }
            } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state 
                    = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))
                        ? 1U : 6U);
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_rd_done) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0xcU;
                }
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_winner_accept) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 0xbU;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_candidate_done_match) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state 
                    = ((3U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))
                        ? 0xaU : 8U);
            }
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cand_start_accept) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 9U;
        }
    } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_ref_accept) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state 
                        = ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))
                            ? 0xeU : 8U);
                }
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_ref_req_accept) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_dec_start_ready) 
                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_mode_dec_start))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 6U;
            }
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_orig_tu_ready) 
                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_orig_start))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 4U;
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_presel_rsp_accept) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_output_ready) 
             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_presel_valid))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cu_accept) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cu_geometry_ok)
                ? 1U : 0x12U);
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state = 0U;
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state))) {
            if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_valid) 
                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_rd_ready) 
                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_last)))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state = 4U;
            }
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_rd_start) 
                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_bank_valid) 
                       >> (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_selected_winner_id)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state))) {
        if ((0xfU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_buf_start) 
                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_size_valid))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state = 1U;
    }
}

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__10(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_mode 
        = ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id))
            ? ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id))
                ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_candidate_mode_3)
                : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_candidate_mode_2))
            : ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id))
                ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_candidate_mode_1)
                : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_candidate_mode_0)));
}

void VINTRA_PARTITION_INTEGRATION_TB___024root___timing_resume(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf22bd20e__0.resume("@(posedge INTRA_PARTITION_INTEGRATION_TB.I_CLK)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h096616bd__0.resume("@([event] INTRA_PARTITION_INTEGRATION_TB.ev_direct_leaf_handshake)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VINTRA_PARTITION_INTEGRATION_TB___024root___timing_commit(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf22bd20e__0.commit("@(posedge INTRA_PARTITION_INTEGRATION_TB.I_CLK)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h096616bd__0.commit("@([event] INTRA_PARTITION_INTEGRATION_TB.ev_direct_leaf_handshake)");
    }
}

void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_triggers__act(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_act(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

bool VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__act(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_triggers__act(vlSelf);
    VINTRA_PARTITION_INTEGRATION_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VINTRA_PARTITION_INTEGRATION_TB___024root___timing_resume(vlSelf);
        VINTRA_PARTITION_INTEGRATION_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_nba(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

bool VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__nba(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__nba(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__act(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VINTRA_PARTITION_INTEGRATION_TB___024root___eval(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_PARTITION_INTEGRATION_TB.sv", 20, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_PARTITION_INTEGRATION_TB.sv", 20, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VINTRA_PARTITION_INTEGRATION_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_debug_assertions(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
